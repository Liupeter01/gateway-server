#pragma once
#ifndef _DEF_HPP_
#include <stdint.h>

enum class ServiceType : uint8_t {
  SERVICE_VERIFICATION,  // get verification code
  SERVICE_REGISTERATION, // user registeration
  SERVICE_CHECKEEXISTS,  // check account existance
  SERVICE_RESETPASSWD,   // password reset
  SERVICE_LOGINSERVER    // try to login into server
};

enum class ServiceStatus : uint8_t {
  SERVICE_SUCCESS,          // SUCCESS
  JSONPARSE_ERROR,          // json parsing error
  NETWORK_ERROR,            // network failed
  GRPC_ERROR,               // grpc error
  REDIS_UNKOWN_ERROR,       // redis server error code
  REDIS_CPATCHA_NOT_FOUND,  // redis no cpatcha
  MYSQL_INTERNAL_ERROR,     // mysql error
  MYSQL_MISSING_INFO,       // mysql missing account info
  MYSQL_ACCOUNT_NOT_EXISTS, // mysql account not exists
  LOGIN_INFO_ERROR,         // login info error
  LOGIN_UNSUCCESSFUL // common login uncessfully reason, due to internel error
};

#define _DEF_HPP_
#endif
