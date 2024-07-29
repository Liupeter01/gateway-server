#ifndef SINGLETON_HPP
#define SINGLETON_HPP
#include <mutex>
#include <memory>
#include<boost/noncopyable.hpp>

template<typename _Ty>
struct SingletonDeletor {
          void operator()(_Ty* value) {
                    delete value;
          }
};

template <typename _Ty> 
class Singleton:public boost::noncopyable_::noncopyable {
          static std::shared_ptr<_Ty> m_instance;

protected:
          Singleton() = default;

public:
          ~Singleton() {}
          static std::shared_ptr<_Ty>& get_instance() {
                    static std::once_flag flag;
                    std::call_once(flag, [&]() {
                              m_instance = std::shared_ptr<_Ty>(new _Ty, SingletonDeletor<_Ty>());
                              });
                    return m_instance;
          }
};

template<typename _Ty>
std::shared_ptr<_Ty> Singleton<_Ty>::m_instance = nullptr;

#endif // SINGLETON_HPP
