// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_memory.proto

#ifndef PROTOBUF_category_5fmemory_2eproto__INCLUDED
#define PROTOBUF_category_5fmemory_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_category_5fmemory_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsMemoryImpl();
void InitDefaultsMemory();
inline void InitDefaults() {
  InitDefaultsMemory();
}
}  // namespace protobuf_category_5fmemory_2eproto
namespace aspia {
namespace proto {
class Memory;
class MemoryDefaultTypeInternal;
extern MemoryDefaultTypeInternal _Memory_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace aspia {
namespace proto {

// ===================================================================

class Memory : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.Memory) */ {
 public:
  Memory();
  virtual ~Memory();

  Memory(const Memory& from);

  inline Memory& operator=(const Memory& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Memory(Memory&& from) noexcept
    : Memory() {
    *this = ::std::move(from);
  }

  inline Memory& operator=(Memory&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Memory& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Memory* internal_default_instance() {
    return reinterpret_cast<const Memory*>(
               &_Memory_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Memory* other);
  friend void swap(Memory& a, Memory& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Memory* New() const PROTOBUF_FINAL { return New(NULL); }

  Memory* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Memory& from);
  void MergeFrom(const Memory& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Memory* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 total_physical = 1;
  void clear_total_physical();
  static const int kTotalPhysicalFieldNumber = 1;
  ::google::protobuf::uint64 total_physical() const;
  void set_total_physical(::google::protobuf::uint64 value);

  // uint64 free_physical = 2;
  void clear_free_physical();
  static const int kFreePhysicalFieldNumber = 2;
  ::google::protobuf::uint64 free_physical() const;
  void set_free_physical(::google::protobuf::uint64 value);

  // uint64 total_page_file = 3;
  void clear_total_page_file();
  static const int kTotalPageFileFieldNumber = 3;
  ::google::protobuf::uint64 total_page_file() const;
  void set_total_page_file(::google::protobuf::uint64 value);

  // uint64 free_page_file = 4;
  void clear_free_page_file();
  static const int kFreePageFileFieldNumber = 4;
  ::google::protobuf::uint64 free_page_file() const;
  void set_free_page_file(::google::protobuf::uint64 value);

  // uint64 total_virtual = 5;
  void clear_total_virtual();
  static const int kTotalVirtualFieldNumber = 5;
  ::google::protobuf::uint64 total_virtual() const;
  void set_total_virtual(::google::protobuf::uint64 value);

  // uint64 free_virtual = 6;
  void clear_free_virtual();
  static const int kFreeVirtualFieldNumber = 6;
  ::google::protobuf::uint64 free_virtual() const;
  void set_free_virtual(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:aspia.proto.Memory)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::uint64 total_physical_;
  ::google::protobuf::uint64 free_physical_;
  ::google::protobuf::uint64 total_page_file_;
  ::google::protobuf::uint64 free_page_file_;
  ::google::protobuf::uint64 total_virtual_;
  ::google::protobuf::uint64 free_virtual_;
  mutable int _cached_size_;
  friend struct ::protobuf_category_5fmemory_2eproto::TableStruct;
  friend void ::protobuf_category_5fmemory_2eproto::InitDefaultsMemoryImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Memory

// uint64 total_physical = 1;
inline void Memory::clear_total_physical() {
  total_physical_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Memory::total_physical() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Memory.total_physical)
  return total_physical_;
}
inline void Memory::set_total_physical(::google::protobuf::uint64 value) {
  
  total_physical_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.Memory.total_physical)
}

// uint64 free_physical = 2;
inline void Memory::clear_free_physical() {
  free_physical_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Memory::free_physical() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Memory.free_physical)
  return free_physical_;
}
inline void Memory::set_free_physical(::google::protobuf::uint64 value) {
  
  free_physical_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.Memory.free_physical)
}

// uint64 total_page_file = 3;
inline void Memory::clear_total_page_file() {
  total_page_file_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Memory::total_page_file() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Memory.total_page_file)
  return total_page_file_;
}
inline void Memory::set_total_page_file(::google::protobuf::uint64 value) {
  
  total_page_file_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.Memory.total_page_file)
}

// uint64 free_page_file = 4;
inline void Memory::clear_free_page_file() {
  free_page_file_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Memory::free_page_file() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Memory.free_page_file)
  return free_page_file_;
}
inline void Memory::set_free_page_file(::google::protobuf::uint64 value) {
  
  free_page_file_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.Memory.free_page_file)
}

// uint64 total_virtual = 5;
inline void Memory::clear_total_virtual() {
  total_virtual_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Memory::total_virtual() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Memory.total_virtual)
  return total_virtual_;
}
inline void Memory::set_total_virtual(::google::protobuf::uint64 value) {
  
  total_virtual_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.Memory.total_virtual)
}

// uint64 free_virtual = 6;
inline void Memory::clear_free_virtual() {
  free_virtual_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Memory::free_virtual() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Memory.free_virtual)
  return free_virtual_;
}
inline void Memory::set_free_virtual(::google::protobuf::uint64 value) {
  
  free_virtual_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.Memory.free_virtual)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_category_5fmemory_2eproto__INCLUDED
