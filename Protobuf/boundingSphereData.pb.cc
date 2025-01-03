// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: boundingSphereData.proto
// Protobuf C++ Version: 5.27.2

#include "boundingSphereData.pb.h"

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

inline constexpr boundingSphereData_proto::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        cntr_{},
        rad_{0} {}

template <typename>
PROTOBUF_CONSTEXPR boundingSphereData_proto::boundingSphereData_proto(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct boundingSphereData_protoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR boundingSphereData_protoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~boundingSphereData_protoDefaultTypeInternal() {}
  union {
    boundingSphereData_proto _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 boundingSphereData_protoDefaultTypeInternal _boundingSphereData_proto_default_instance_;
// ===================================================================

class boundingSphereData_proto::_Internal {
 public:
  using HasBits =
      decltype(std::declval<boundingSphereData_proto>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(boundingSphereData_proto, _impl_._has_bits_);
};

boundingSphereData_proto::boundingSphereData_proto(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:boundingSphereData_proto)
}
inline PROTOBUF_NDEBUG_INLINE boundingSphereData_proto::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::boundingSphereData_proto& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        cntr_{visibility, arena, from.cntr_} {}

boundingSphereData_proto::boundingSphereData_proto(
    ::google::protobuf::Arena* arena,
    const boundingSphereData_proto& from)
    : ::google::protobuf::MessageLite(arena) {
  boundingSphereData_proto* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.rad_ = from._impl_.rad_;

  // @@protoc_insertion_point(copy_constructor:boundingSphereData_proto)
}
inline PROTOBUF_NDEBUG_INLINE boundingSphereData_proto::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        cntr_{visibility, arena} {}

inline void boundingSphereData_proto::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.rad_ = {};
}
boundingSphereData_proto::~boundingSphereData_proto() {
  // @@protoc_insertion_point(destructor:boundingSphereData_proto)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void boundingSphereData_proto::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
boundingSphereData_proto::GetClassData() const {
  PROTOBUF_CONSTINIT static const ClassDataLite<25> _data_ =
      {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(boundingSphereData_proto, _impl_._cached_size_),
              true,
          },
          "boundingSphereData_proto",
      };

  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> boundingSphereData_proto::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(boundingSphereData_proto, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_boundingSphereData_proto_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::boundingSphereData_proto>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // optional float rad = 2;
    {::_pbi::TcParser::FastF32S1,
     {21, 0, 0, PROTOBUF_FIELD_OFFSET(boundingSphereData_proto, _impl_.rad_)}},
    // repeated float cntr = 1;
    {::_pbi::TcParser::FastF32P1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(boundingSphereData_proto, _impl_.cntr_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated float cntr = 1;
    {PROTOBUF_FIELD_OFFSET(boundingSphereData_proto, _impl_.cntr_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kPackedFloat)},
    // optional float rad = 2;
    {PROTOBUF_FIELD_OFFSET(boundingSphereData_proto, _impl_.rad_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFloat)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void boundingSphereData_proto::Clear() {
// @@protoc_insertion_point(message_clear_start:boundingSphereData_proto)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.cntr_.Clear();
  _impl_.rad_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

::uint8_t* boundingSphereData_proto::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:boundingSphereData_proto)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated float cntr = 1;
  if (this->_internal_cntr_size() > 0) {
    target = stream->WriteFixedPacked(1, _internal_cntr(), target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // optional float rad = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        2, this->_internal_rad(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:boundingSphereData_proto)
  return target;
}

::size_t boundingSphereData_proto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:boundingSphereData_proto)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // repeated float cntr = 1;
  {
    std::size_t data_size = std::size_t{4} *
        ::_pbi::FromIntSize(this->_internal_cntr_size())
    ;
    std::size_t tag_size = data_size == 0
        ? 0
        : 1 + ::_pbi::WireFormatLite::Int32Size(
                            static_cast<int32_t>(data_size))
    ;
    total_size += tag_size + data_size;
  }
  // optional float rad = 2;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 5;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  _impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
  return total_size;
}

void boundingSphereData_proto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const boundingSphereData_proto*>(
      &from));
}

void boundingSphereData_proto::MergeFrom(const boundingSphereData_proto& from) {
  boundingSphereData_proto* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:boundingSphereData_proto)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_cntr()->MergeFrom(from._internal_cntr());
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _this->_impl_.rad_ = from._impl_.rad_;
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void boundingSphereData_proto::CopyFrom(const boundingSphereData_proto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:boundingSphereData_proto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void boundingSphereData_proto::InternalSwap(boundingSphereData_proto* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.cntr_.InternalSwap(&other->_impl_.cntr_);
        swap(_impl_.rad_, other->_impl_.rad_);
}

// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
