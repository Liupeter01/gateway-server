#pragma once
#ifndef _MYSQLMANAGEMENT_HPP_
#define _MYSQLMANAGEMENT_HPP_
#include <atomic>
#include <condition_variable>
#include <memory>
#include <mutex>
#include <optional>
#include <queue>
#include <singleton/singleton.hpp>
#include <sql/MySQLConnection.hpp>
#include <thread>
#include <tools/tools.hpp>

namespace mysql {
class MySQLConnection;
namespace details {
class MySQLManagement : public Singleton<MySQLManagement> {
  friend class mysql::MySQLConnection;
  friend class Singleton<MySQLManagement>;

public:
  using context = mysql::MySQLConnection;
  using context_ptr = std::unique_ptr<context>;

  std::optional<context_ptr> acquire();
  void release(context_ptr conn);

public:
  ~MySQLManagement();
  void shutdown();

private:
  MySQLManagement() noexcept;
  MySQLManagement(
      std::size_t poolSize, std::size_t timeOut, const std::string &username,
      const std::string &password, const std::string &database,
      const std::string &host = "localhost",
      const std::string &port = boost::mysql::default_port_string) noexcept;

  void registerSQLStatement();
  void roundRobinChecking(std::size_t timeout);

private:
  std::string m_username;
  std::string m_password;
  std::string m_database;
  std::string m_host;
  std::string m_port;

  /*sql operation command*/
  std::map<MySQLSelection, std::string> m_sql;

  /*stop flag*/
  std::atomic<bool> m_stop;

  /*round-robin timeout check(second)*/
  std::size_t m_timeout;

  std::thread m_RRThread;

  /*lock*/
  std::mutex m_mtx;
  std::condition_variable m_ctx;

  /*queue*/
  std::queue<context_ptr> m_queue;
};
} // namespace details

class MySQLRAII {
  using wrapper = tools::ResourcesWrapper<details::MySQLManagement::context>;

public:
  MySQLRAII();
  ~MySQLRAII();
  std::optional<wrapper> operator->();

private:
  bool status; // load stub success flag
  details::MySQLManagement::context_ptr m_mysql;
};
} // namespace mysql

#endif // !_MYSQLMANAGEMENT_HPP_
