// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: vboData.proto
// Protobuf C++ Version: 5.27.2

#include "vboData.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;

inline constexpr vboData_proto::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        podata_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        targettype_{static_cast< ::vboData_proto_VBO_TARGET >(0)},
        componenttype_{static_cast< ::vboData_proto_VBO_COMPONENT >(0)},
        vbotype_{static_cast< ::vboData_proto_VBO_TYPE >(0)},
        stride_{0u},
        count_{0u},
        datasize_{0u},
        enabled_{false} {}

template <typename>
PROTOBUF_CONSTEXPR vboData_proto::vboData_proto(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct vboData_protoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR vboData_protoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~vboData_protoDefaultTypeInternal() {}
  union {
    vboData_proto _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 vboData_protoDefaultTypeInternal _vboData_proto_default_instance_;
PROTOBUF_CONSTINIT const uint32_t vboData_proto_VBO_TARGET_internal_data_[] = {
    131072u, 0u, };
bool vboData_proto_VBO_TARGET_IsValid(int value) {
  return 0 <= value && value <= 1;
}
static ::google::protobuf::internal::ExplicitlyConstructed<std::string>
    vboData_proto_VBO_TARGET_strings[2] = {};

static const char vboData_proto_VBO_TARGET_names[] = {
    "ARRAY_BUFFER"
    "ELEMENT_ARRAY_BUFFER"
};

static const ::google::protobuf::internal::EnumEntry vboData_proto_VBO_TARGET_entries[] =
    {
        {{&vboData_proto_VBO_TARGET_names[0], 12}, 0},
        {{&vboData_proto_VBO_TARGET_names[12], 20}, 1},
};

static const int vboData_proto_VBO_TARGET_entries_by_number[] = {
    0,  // 0 -> ARRAY_BUFFER
    1,  // 1 -> ELEMENT_ARRAY_BUFFER
};

const std::string& vboData_proto_VBO_TARGET_Name(vboData_proto_VBO_TARGET value) {
  static const bool kDummy =
      ::google::protobuf::internal::InitializeEnumStrings(
          vboData_proto_VBO_TARGET_entries, vboData_proto_VBO_TARGET_entries_by_number,
          2, vboData_proto_VBO_TARGET_strings);
  (void)kDummy;

  int idx = ::google::protobuf::internal::LookUpEnumName(
      vboData_proto_VBO_TARGET_entries, vboData_proto_VBO_TARGET_entries_by_number, 2,
      value);
  return idx == -1 ? ::google::protobuf::internal::GetEmptyString()
                   : vboData_proto_VBO_TARGET_strings[idx].get();
}

bool vboData_proto_VBO_TARGET_Parse(absl::string_view name, vboData_proto_VBO_TARGET* value) {
  int int_value;
  bool success = ::google::protobuf::internal::LookUpEnumValue(
      vboData_proto_VBO_TARGET_entries, 2, name, &int_value);
  if (success) {
    *value = static_cast<vboData_proto_VBO_TARGET>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr vboData_proto_VBO_TARGET vboData_proto::ARRAY_BUFFER;
constexpr vboData_proto_VBO_TARGET vboData_proto::ELEMENT_ARRAY_BUFFER;
constexpr vboData_proto_VBO_TARGET vboData_proto::VBO_TARGET_MIN;
constexpr vboData_proto_VBO_TARGET vboData_proto::VBO_TARGET_MAX;
constexpr int vboData_proto::VBO_TARGET_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
PROTOBUF_CONSTINIT const uint32_t vboData_proto_VBO_COMPONENT_internal_data_[] = {
    524288u, 0u, };
bool vboData_proto_VBO_COMPONENT_IsValid(int value) {
  return 0 <= value && value <= 7;
}
static ::google::protobuf::internal::ExplicitlyConstructed<std::string>
    vboData_proto_VBO_COMPONENT_strings[8] = {};

static const char vboData_proto_VBO_COMPONENT_names[] = {
    "BYTE"
    "DOUBLE"
    "FLOAT"
    "INT"
    "SHORT"
    "UNSIGNED_BYTE"
    "UNSIGNED_INT"
    "UNSIGNED_SHORT"
};

static const ::google::protobuf::internal::EnumEntry vboData_proto_VBO_COMPONENT_entries[] =
    {
        {{&vboData_proto_VBO_COMPONENT_names[0], 4}, 0},
        {{&vboData_proto_VBO_COMPONENT_names[4], 6}, 7},
        {{&vboData_proto_VBO_COMPONENT_names[10], 5}, 6},
        {{&vboData_proto_VBO_COMPONENT_names[15], 3}, 4},
        {{&vboData_proto_VBO_COMPONENT_names[18], 5}, 2},
        {{&vboData_proto_VBO_COMPONENT_names[23], 13}, 1},
        {{&vboData_proto_VBO_COMPONENT_names[36], 12}, 5},
        {{&vboData_proto_VBO_COMPONENT_names[48], 14}, 3},
};

static const int vboData_proto_VBO_COMPONENT_entries_by_number[] = {
    0,  // 0 -> BYTE
    5,  // 1 -> UNSIGNED_BYTE
    4,  // 2 -> SHORT
    7,  // 3 -> UNSIGNED_SHORT
    3,  // 4 -> INT
    6,  // 5 -> UNSIGNED_INT
    2,  // 6 -> FLOAT
    1,  // 7 -> DOUBLE
};

const std::string& vboData_proto_VBO_COMPONENT_Name(vboData_proto_VBO_COMPONENT value) {
  static const bool kDummy =
      ::google::protobuf::internal::InitializeEnumStrings(
          vboData_proto_VBO_COMPONENT_entries, vboData_proto_VBO_COMPONENT_entries_by_number,
          8, vboData_proto_VBO_COMPONENT_strings);
  (void)kDummy;

  int idx = ::google::protobuf::internal::LookUpEnumName(
      vboData_proto_VBO_COMPONENT_entries, vboData_proto_VBO_COMPONENT_entries_by_number, 8,
      value);
  return idx == -1 ? ::google::protobuf::internal::GetEmptyString()
                   : vboData_proto_VBO_COMPONENT_strings[idx].get();
}

bool vboData_proto_VBO_COMPONENT_Parse(absl::string_view name, vboData_proto_VBO_COMPONENT* value) {
  int int_value;
  bool success = ::google::protobuf::internal::LookUpEnumValue(
      vboData_proto_VBO_COMPONENT_entries, 8, name, &int_value);
  if (success) {
    *value = static_cast<vboData_proto_VBO_COMPONENT>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr vboData_proto_VBO_COMPONENT vboData_proto::BYTE;
constexpr vboData_proto_VBO_COMPONENT vboData_proto::UNSIGNED_BYTE;
constexpr vboData_proto_VBO_COMPONENT vboData_proto::SHORT;
constexpr vboData_proto_VBO_COMPONENT vboData_proto::UNSIGNED_SHORT;
constexpr vboData_proto_VBO_COMPONENT vboData_proto::INT;
constexpr vboData_proto_VBO_COMPONENT vboData_proto::UNSIGNED_INT;
constexpr vboData_proto_VBO_COMPONENT vboData_proto::FLOAT;
constexpr vboData_proto_VBO_COMPONENT vboData_proto::DOUBLE;
constexpr vboData_proto_VBO_COMPONENT vboData_proto::VBO_COMPONENT_MIN;
constexpr vboData_proto_VBO_COMPONENT vboData_proto::VBO_COMPONENT_MAX;
constexpr int vboData_proto::VBO_COMPONENT_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
PROTOBUF_CONSTINIT const uint32_t vboData_proto_VBO_TYPE_internal_data_[] = {
    589824u, 0u, };
bool vboData_proto_VBO_TYPE_IsValid(int value) {
  return 0 <= value && value <= 8;
}
static ::google::protobuf::internal::ExplicitlyConstructed<std::string>
    vboData_proto_VBO_TYPE_strings[9] = {};

static const char vboData_proto_VBO_TYPE_names[] = {
    "MAT2"
    "MAT3"
    "MAT4"
    "MATRIX"
    "SCALAR"
    "VEC2"
    "VEC3"
    "VEC4"
    "VECTOR"
};

static const ::google::protobuf::internal::EnumEntry vboData_proto_VBO_TYPE_entries[] =
    {
        {{&vboData_proto_VBO_TYPE_names[0], 4}, 3},
        {{&vboData_proto_VBO_TYPE_names[4], 4}, 4},
        {{&vboData_proto_VBO_TYPE_names[8], 4}, 5},
        {{&vboData_proto_VBO_TYPE_names[12], 6}, 8},
        {{&vboData_proto_VBO_TYPE_names[18], 6}, 6},
        {{&vboData_proto_VBO_TYPE_names[24], 4}, 0},
        {{&vboData_proto_VBO_TYPE_names[28], 4}, 1},
        {{&vboData_proto_VBO_TYPE_names[32], 4}, 2},
        {{&vboData_proto_VBO_TYPE_names[36], 6}, 7},
};

static const int vboData_proto_VBO_TYPE_entries_by_number[] = {
    5,  // 0 -> VEC2
    6,  // 1 -> VEC3
    7,  // 2 -> VEC4
    0,  // 3 -> MAT2
    1,  // 4 -> MAT3
    2,  // 5 -> MAT4
    4,  // 6 -> SCALAR
    8,  // 7 -> VECTOR
    3,  // 8 -> MATRIX
};

const std::string& vboData_proto_VBO_TYPE_Name(vboData_proto_VBO_TYPE value) {
  static const bool kDummy =
      ::google::protobuf::internal::InitializeEnumStrings(
          vboData_proto_VBO_TYPE_entries, vboData_proto_VBO_TYPE_entries_by_number,
          9, vboData_proto_VBO_TYPE_strings);
  (void)kDummy;

  int idx = ::google::protobuf::internal::LookUpEnumName(
      vboData_proto_VBO_TYPE_entries, vboData_proto_VBO_TYPE_entries_by_number, 9,
      value);
  return idx == -1 ? ::google::protobuf::internal::GetEmptyString()
                   : vboData_proto_VBO_TYPE_strings[idx].get();
}

bool vboData_proto_VBO_TYPE_Parse(absl::string_view name, vboData_proto_VBO_TYPE* value) {
  int int_value;
  bool success = ::google::protobuf::internal::LookUpEnumValue(
      vboData_proto_VBO_TYPE_entries, 9, name, &int_value);
  if (success) {
    *value = static_cast<vboData_proto_VBO_TYPE>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr vboData_proto_VBO_TYPE vboData_proto::VEC2;
constexpr vboData_proto_VBO_TYPE vboData_proto::VEC3;
constexpr vboData_proto_VBO_TYPE vboData_proto::VEC4;
constexpr vboData_proto_VBO_TYPE vboData_proto::MAT2;
constexpr vboData_proto_VBO_TYPE vboData_proto::MAT3;
constexpr vboData_proto_VBO_TYPE vboData_proto::MAT4;
constexpr vboData_proto_VBO_TYPE vboData_proto::SCALAR;
constexpr vboData_proto_VBO_TYPE vboData_proto::VECTOR;
constexpr vboData_proto_VBO_TYPE vboData_proto::MATRIX;
constexpr vboData_proto_VBO_TYPE vboData_proto::VBO_TYPE_MIN;
constexpr vboData_proto_VBO_TYPE vboData_proto::VBO_TYPE_MAX;
constexpr int vboData_proto::VBO_TYPE_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class vboData_proto::_Internal {
 public:
  using HasBits =
      decltype(std::declval<vboData_proto>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_._has_bits_);
};

vboData_proto::vboData_proto(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:vboData_proto)
}
inline PROTOBUF_NDEBUG_INLINE vboData_proto::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::vboData_proto& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        podata_(arena, from.podata_) {}

vboData_proto::vboData_proto(
    ::google::protobuf::Arena* arena,
    const vboData_proto& from)
    : ::google::protobuf::MessageLite(arena) {
  vboData_proto* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, targettype_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, targettype_),
           offsetof(Impl_, enabled_) -
               offsetof(Impl_, targettype_) +
               sizeof(Impl_::enabled_));

  // @@protoc_insertion_point(copy_constructor:vboData_proto)
}
inline PROTOBUF_NDEBUG_INLINE vboData_proto::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        podata_(arena) {}

inline void vboData_proto::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, targettype_),
           0,
           offsetof(Impl_, enabled_) -
               offsetof(Impl_, targettype_) +
               sizeof(Impl_::enabled_));
}
vboData_proto::~vboData_proto() {
  // @@protoc_insertion_point(destructor:vboData_proto)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void vboData_proto::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.podata_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
vboData_proto::GetClassData() const {
  PROTOBUF_CONSTINIT static const ClassDataLite<14> _data_ =
      {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_._cached_size_),
              true,
          },
          "vboData_proto",
      };

  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 8, 0, 0, 2> vboData_proto::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_._has_bits_),
    0, // no _extensions_
    8, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967040,  // skipmap
    offsetof(decltype(_table_), field_entries),
    8,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_vboData_proto_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::vboData_proto>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // optional bool enabled = 8;
    {::_pbi::TcParser::FastV8S1,
     {64, 7, 0, PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.enabled_)}},
    // optional .vboData_proto.VBO_TARGET targetType = 1;
    {::_pbi::TcParser::FastV32S1,
     {8, 1, 0, PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.targettype_)}},
    // optional .vboData_proto.VBO_COMPONENT componentType = 2;
    {::_pbi::TcParser::FastV32S1,
     {16, 2, 0, PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.componenttype_)}},
    // optional .vboData_proto.VBO_TYPE vboType = 3;
    {::_pbi::TcParser::FastV32S1,
     {24, 3, 0, PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.vbotype_)}},
    // optional uint32 stride = 4;
    {::_pbi::TcParser::FastV32S1,
     {32, 4, 0, PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.stride_)}},
    // optional uint32 count = 5;
    {::_pbi::TcParser::FastV32S1,
     {40, 5, 0, PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.count_)}},
    // optional uint32 dataSize = 6;
    {::_pbi::TcParser::FastV32S1,
     {48, 6, 0, PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.datasize_)}},
    // optional bytes poData = 7;
    {::_pbi::TcParser::FastBS1,
     {58, 0, 0, PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.podata_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional .vboData_proto.VBO_TARGET targetType = 1;
    {PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.targettype_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kOpenEnum)},
    // optional .vboData_proto.VBO_COMPONENT componentType = 2;
    {PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.componenttype_), _Internal::kHasBitsOffset + 2, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kOpenEnum)},
    // optional .vboData_proto.VBO_TYPE vboType = 3;
    {PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.vbotype_), _Internal::kHasBitsOffset + 3, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kOpenEnum)},
    // optional uint32 stride = 4;
    {PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.stride_), _Internal::kHasBitsOffset + 4, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // optional uint32 count = 5;
    {PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.count_), _Internal::kHasBitsOffset + 5, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // optional uint32 dataSize = 6;
    {PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.datasize_), _Internal::kHasBitsOffset + 6, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // optional bytes poData = 7;
    {PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.podata_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // optional bool enabled = 8;
    {PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.enabled_), _Internal::kHasBitsOffset + 7, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBool)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void vboData_proto::Clear() {
// @@protoc_insertion_point(message_clear_start:vboData_proto)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.podata_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x000000feu) {
    ::memset(&_impl_.targettype_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.enabled_) -
        reinterpret_cast<char*>(&_impl_.targettype_)) + sizeof(_impl_.enabled_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

::uint8_t* vboData_proto::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:vboData_proto)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .vboData_proto.VBO_TARGET targetType = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        1, this->_internal_targettype(), target);
  }

  // optional .vboData_proto.VBO_COMPONENT componentType = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        2, this->_internal_componenttype(), target);
  }

  // optional .vboData_proto.VBO_TYPE vboType = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        3, this->_internal_vbotype(), target);
  }

  // optional uint32 stride = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        4, this->_internal_stride(), target);
  }

  // optional uint32 count = 5;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        5, this->_internal_count(), target);
  }

  // optional uint32 dataSize = 6;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        6, this->_internal_datasize(), target);
  }

  // optional bytes poData = 7;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_podata();
    target = stream->WriteBytesMaybeAliased(7, _s, target);
  }

  // optional bool enabled = 8;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        8, this->_internal_enabled(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:vboData_proto)
  return target;
}

::size_t vboData_proto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:vboData_proto)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional bytes poData = 7;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                      this->_internal_podata());
    }

    // optional .vboData_proto.VBO_TARGET targetType = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_targettype());
    }

    // optional .vboData_proto.VBO_COMPONENT componentType = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_componenttype());
    }

    // optional .vboData_proto.VBO_TYPE vboType = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_vbotype());
    }

    // optional uint32 stride = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_stride());
    }

    // optional uint32 count = 5;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_count());
    }

    // optional uint32 dataSize = 6;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_datasize());
    }

    // optional bool enabled = 8;
    if (cached_has_bits & 0x00000080u) {
      total_size += 2;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  _impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
  return total_size;
}

void vboData_proto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const vboData_proto*>(
      &from));
}

void vboData_proto::MergeFrom(const vboData_proto& from) {
  vboData_proto* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:vboData_proto)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_podata(from._internal_podata());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.targettype_ = from._impl_.targettype_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.componenttype_ = from._impl_.componenttype_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.vbotype_ = from._impl_.vbotype_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.stride_ = from._impl_.stride_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.count_ = from._impl_.count_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.datasize_ = from._impl_.datasize_;
    }
    if (cached_has_bits & 0x00000080u) {
      _this->_impl_.enabled_ = from._impl_.enabled_;
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void vboData_proto::CopyFrom(const vboData_proto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:vboData_proto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void vboData_proto::InternalSwap(vboData_proto* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.podata_, &other->_impl_.podata_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.enabled_)
      + sizeof(vboData_proto::_impl_.enabled_)
      - PROTOBUF_FIELD_OFFSET(vboData_proto, _impl_.targettype_)>(
          reinterpret_cast<char*>(&_impl_.targettype_),
          reinterpret_cast<char*>(&other->_impl_.targettype_));
}

// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
