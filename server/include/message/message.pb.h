// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_message_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_message_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_message_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_message_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_message_2eproto;
namespace message {
class GetVerificationRequest;
struct GetVerificationRequestDefaultTypeInternal;
extern GetVerificationRequestDefaultTypeInternal _GetVerificationRequest_default_instance_;
class GetVerificationResponse;
struct GetVerificationResponseDefaultTypeInternal;
extern GetVerificationResponseDefaultTypeInternal _GetVerificationResponse_default_instance_;
}  // namespace message
PROTOBUF_NAMESPACE_OPEN
template<> ::message::GetVerificationRequest* Arena::CreateMaybeMessage<::message::GetVerificationRequest>(Arena*);
template<> ::message::GetVerificationResponse* Arena::CreateMaybeMessage<::message::GetVerificationResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace message {

// ===================================================================

class GetVerificationRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:message.GetVerificationRequest) */ {
 public:
  inline GetVerificationRequest() : GetVerificationRequest(nullptr) {}
  ~GetVerificationRequest() override;
  explicit PROTOBUF_CONSTEXPR GetVerificationRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GetVerificationRequest(const GetVerificationRequest& from);
  GetVerificationRequest(GetVerificationRequest&& from) noexcept
    : GetVerificationRequest() {
    *this = ::std::move(from);
  }

  inline GetVerificationRequest& operator=(const GetVerificationRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetVerificationRequest& operator=(GetVerificationRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GetVerificationRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const GetVerificationRequest* internal_default_instance() {
    return reinterpret_cast<const GetVerificationRequest*>(
               &_GetVerificationRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GetVerificationRequest& a, GetVerificationRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GetVerificationRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetVerificationRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GetVerificationRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GetVerificationRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GetVerificationRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GetVerificationRequest& from) {
    GetVerificationRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetVerificationRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "message.GetVerificationRequest";
  }
  protected:
  explicit GetVerificationRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEmailFieldNumber = 1,
  };
  // string email = 1;
  void clear_email();
  const std::string& email() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_email(ArgT0&& arg0, ArgT... args);
  std::string* mutable_email();
  PROTOBUF_NODISCARD std::string* release_email();
  void set_allocated_email(std::string* email);
  private:
  const std::string& _internal_email() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_email(const std::string& value);
  std::string* _internal_mutable_email();
  public:

  // @@protoc_insertion_point(class_scope:message.GetVerificationRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr email_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_message_2eproto;
};
// -------------------------------------------------------------------

class GetVerificationResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:message.GetVerificationResponse) */ {
 public:
  inline GetVerificationResponse() : GetVerificationResponse(nullptr) {}
  ~GetVerificationResponse() override;
  explicit PROTOBUF_CONSTEXPR GetVerificationResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GetVerificationResponse(const GetVerificationResponse& from);
  GetVerificationResponse(GetVerificationResponse&& from) noexcept
    : GetVerificationResponse() {
    *this = ::std::move(from);
  }

  inline GetVerificationResponse& operator=(const GetVerificationResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetVerificationResponse& operator=(GetVerificationResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GetVerificationResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const GetVerificationResponse* internal_default_instance() {
    return reinterpret_cast<const GetVerificationResponse*>(
               &_GetVerificationResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GetVerificationResponse& a, GetVerificationResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(GetVerificationResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetVerificationResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GetVerificationResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GetVerificationResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GetVerificationResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GetVerificationResponse& from) {
    GetVerificationResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetVerificationResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "message.GetVerificationResponse";
  }
  protected:
  explicit GetVerificationResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEmailFieldNumber = 2,
    kMessageFieldNumber = 3,
    kErrorFieldNumber = 1,
  };
  // string email = 2;
  void clear_email();
  const std::string& email() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_email(ArgT0&& arg0, ArgT... args);
  std::string* mutable_email();
  PROTOBUF_NODISCARD std::string* release_email();
  void set_allocated_email(std::string* email);
  private:
  const std::string& _internal_email() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_email(const std::string& value);
  std::string* _internal_mutable_email();
  public:

  // string message = 3;
  void clear_message();
  const std::string& message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // int32 error = 1;
  void clear_error();
  int32_t error() const;
  void set_error(int32_t value);
  private:
  int32_t _internal_error() const;
  void _internal_set_error(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:message.GetVerificationResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr email_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
    int32_t error_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_message_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetVerificationRequest

// string email = 1;
inline void GetVerificationRequest::clear_email() {
  _impl_.email_.ClearToEmpty();
}
inline const std::string& GetVerificationRequest::email() const {
  // @@protoc_insertion_point(field_get:message.GetVerificationRequest.email)
  return _internal_email();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GetVerificationRequest::set_email(ArgT0&& arg0, ArgT... args) {
 
 _impl_.email_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:message.GetVerificationRequest.email)
}
inline std::string* GetVerificationRequest::mutable_email() {
  std::string* _s = _internal_mutable_email();
  // @@protoc_insertion_point(field_mutable:message.GetVerificationRequest.email)
  return _s;
}
inline const std::string& GetVerificationRequest::_internal_email() const {
  return _impl_.email_.Get();
}
inline void GetVerificationRequest::_internal_set_email(const std::string& value) {
  
  _impl_.email_.Set(value, GetArenaForAllocation());
}
inline std::string* GetVerificationRequest::_internal_mutable_email() {
  
  return _impl_.email_.Mutable(GetArenaForAllocation());
}
inline std::string* GetVerificationRequest::release_email() {
  // @@protoc_insertion_point(field_release:message.GetVerificationRequest.email)
  return _impl_.email_.Release();
}
inline void GetVerificationRequest::set_allocated_email(std::string* email) {
  if (email != nullptr) {
    
  } else {
    
  }
  _impl_.email_.SetAllocated(email, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.email_.IsDefault()) {
    _impl_.email_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:message.GetVerificationRequest.email)
}

// -------------------------------------------------------------------

// GetVerificationResponse

// int32 error = 1;
inline void GetVerificationResponse::clear_error() {
  _impl_.error_ = 0;
}
inline int32_t GetVerificationResponse::_internal_error() const {
  return _impl_.error_;
}
inline int32_t GetVerificationResponse::error() const {
  // @@protoc_insertion_point(field_get:message.GetVerificationResponse.error)
  return _internal_error();
}
inline void GetVerificationResponse::_internal_set_error(int32_t value) {
  
  _impl_.error_ = value;
}
inline void GetVerificationResponse::set_error(int32_t value) {
  _internal_set_error(value);
  // @@protoc_insertion_point(field_set:message.GetVerificationResponse.error)
}

// string email = 2;
inline void GetVerificationResponse::clear_email() {
  _impl_.email_.ClearToEmpty();
}
inline const std::string& GetVerificationResponse::email() const {
  // @@protoc_insertion_point(field_get:message.GetVerificationResponse.email)
  return _internal_email();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GetVerificationResponse::set_email(ArgT0&& arg0, ArgT... args) {
 
 _impl_.email_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:message.GetVerificationResponse.email)
}
inline std::string* GetVerificationResponse::mutable_email() {
  std::string* _s = _internal_mutable_email();
  // @@protoc_insertion_point(field_mutable:message.GetVerificationResponse.email)
  return _s;
}
inline const std::string& GetVerificationResponse::_internal_email() const {
  return _impl_.email_.Get();
}
inline void GetVerificationResponse::_internal_set_email(const std::string& value) {
  
  _impl_.email_.Set(value, GetArenaForAllocation());
}
inline std::string* GetVerificationResponse::_internal_mutable_email() {
  
  return _impl_.email_.Mutable(GetArenaForAllocation());
}
inline std::string* GetVerificationResponse::release_email() {
  // @@protoc_insertion_point(field_release:message.GetVerificationResponse.email)
  return _impl_.email_.Release();
}
inline void GetVerificationResponse::set_allocated_email(std::string* email) {
  if (email != nullptr) {
    
  } else {
    
  }
  _impl_.email_.SetAllocated(email, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.email_.IsDefault()) {
    _impl_.email_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:message.GetVerificationResponse.email)
}

// string message = 3;
inline void GetVerificationResponse::clear_message() {
  _impl_.message_.ClearToEmpty();
}
inline const std::string& GetVerificationResponse::message() const {
  // @@protoc_insertion_point(field_get:message.GetVerificationResponse.message)
  return _internal_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GetVerificationResponse::set_message(ArgT0&& arg0, ArgT... args) {
 
 _impl_.message_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:message.GetVerificationResponse.message)
}
inline std::string* GetVerificationResponse::mutable_message() {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:message.GetVerificationResponse.message)
  return _s;
}
inline const std::string& GetVerificationResponse::_internal_message() const {
  return _impl_.message_.Get();
}
inline void GetVerificationResponse::_internal_set_message(const std::string& value) {
  
  _impl_.message_.Set(value, GetArenaForAllocation());
}
inline std::string* GetVerificationResponse::_internal_mutable_message() {
  
  return _impl_.message_.Mutable(GetArenaForAllocation());
}
inline std::string* GetVerificationResponse::release_message() {
  // @@protoc_insertion_point(field_release:message.GetVerificationResponse.message)
  return _impl_.message_.Release();
}
inline void GetVerificationResponse::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  _impl_.message_.SetAllocated(message, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.message_.IsDefault()) {
    _impl_.message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:message.GetVerificationResponse.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_message_2eproto
