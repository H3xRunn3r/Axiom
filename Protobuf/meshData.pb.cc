// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: meshData.proto
// Protobuf C++ Version: 5.27.2

#include "meshData.pb.h"

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

inline constexpr meshData_proto::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        rotation_{},
        translation_{},
        scale_{},
        pversion_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        pmeshname_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        vbo_vert_{nullptr},
        vbo_norm_{nullptr},
        vbo_uv_{nullptr},
        vbo_index_{nullptr},
        vbo_color_{nullptr},
        texture_{nullptr},
        bounding_sphere_{nullptr},
        mode_{static_cast< ::meshData_proto_RENDER_MODE >(0)},
        tricount_{0u},
        vertcount_{0u},
        enabled_{false} {}

template <typename>
PROTOBUF_CONSTEXPR meshData_proto::meshData_proto(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct meshData_protoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR meshData_protoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~meshData_protoDefaultTypeInternal() {}
  union {
    meshData_proto _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 meshData_protoDefaultTypeInternal _meshData_proto_default_instance_;
PROTOBUF_CONSTINIT const uint32_t meshData_proto_RENDER_MODE_internal_data_[] = {
    458752u, 0u, };
bool meshData_proto_RENDER_MODE_IsValid(int value) {
  return 0 <= value && value <= 6;
}
static ::google::protobuf::internal::ExplicitlyConstructed<std::string>
    meshData_proto_RENDER_MODE_strings[7] = {};

static const char meshData_proto_RENDER_MODE_names[] = {
    "MODE_LINE"
    "MODE_LINE_LOOP"
    "MODE_LINE_STRIP"
    "MODE_POINTS"
    "MODE_TRIANGLES"
    "MODE_TRIANGLE_FAN"
    "MODE_TRIANGLE_STRIP"
};

static const ::google::protobuf::internal::EnumEntry meshData_proto_RENDER_MODE_entries[] =
    {
        {{&meshData_proto_RENDER_MODE_names[0], 9}, 1},
        {{&meshData_proto_RENDER_MODE_names[9], 14}, 2},
        {{&meshData_proto_RENDER_MODE_names[23], 15}, 3},
        {{&meshData_proto_RENDER_MODE_names[38], 11}, 0},
        {{&meshData_proto_RENDER_MODE_names[49], 14}, 4},
        {{&meshData_proto_RENDER_MODE_names[63], 17}, 6},
        {{&meshData_proto_RENDER_MODE_names[80], 19}, 5},
};

static const int meshData_proto_RENDER_MODE_entries_by_number[] = {
    3,  // 0 -> MODE_POINTS
    0,  // 1 -> MODE_LINE
    1,  // 2 -> MODE_LINE_LOOP
    2,  // 3 -> MODE_LINE_STRIP
    4,  // 4 -> MODE_TRIANGLES
    6,  // 5 -> MODE_TRIANGLE_STRIP
    5,  // 6 -> MODE_TRIANGLE_FAN
};

const std::string& meshData_proto_RENDER_MODE_Name(meshData_proto_RENDER_MODE value) {
  static const bool kDummy =
      ::google::protobuf::internal::InitializeEnumStrings(
          meshData_proto_RENDER_MODE_entries, meshData_proto_RENDER_MODE_entries_by_number,
          7, meshData_proto_RENDER_MODE_strings);
  (void)kDummy;

  int idx = ::google::protobuf::internal::LookUpEnumName(
      meshData_proto_RENDER_MODE_entries, meshData_proto_RENDER_MODE_entries_by_number, 7,
      value);
  return idx == -1 ? ::google::protobuf::internal::GetEmptyString()
                   : meshData_proto_RENDER_MODE_strings[idx].get();
}

bool meshData_proto_RENDER_MODE_Parse(absl::string_view name, meshData_proto_RENDER_MODE* value) {
  int int_value;
  bool success = ::google::protobuf::internal::LookUpEnumValue(
      meshData_proto_RENDER_MODE_entries, 7, name, &int_value);
  if (success) {
    *value = static_cast<meshData_proto_RENDER_MODE>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr meshData_proto_RENDER_MODE meshData_proto::MODE_POINTS;
constexpr meshData_proto_RENDER_MODE meshData_proto::MODE_LINE;
constexpr meshData_proto_RENDER_MODE meshData_proto::MODE_LINE_LOOP;
constexpr meshData_proto_RENDER_MODE meshData_proto::MODE_LINE_STRIP;
constexpr meshData_proto_RENDER_MODE meshData_proto::MODE_TRIANGLES;
constexpr meshData_proto_RENDER_MODE meshData_proto::MODE_TRIANGLE_STRIP;
constexpr meshData_proto_RENDER_MODE meshData_proto::MODE_TRIANGLE_FAN;
constexpr meshData_proto_RENDER_MODE meshData_proto::RENDER_MODE_MIN;
constexpr meshData_proto_RENDER_MODE meshData_proto::RENDER_MODE_MAX;
constexpr int meshData_proto::RENDER_MODE_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class meshData_proto::_Internal {
 public:
  using HasBits =
      decltype(std::declval<meshData_proto>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_._has_bits_);
};

void meshData_proto::clear_vbo_vert() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.vbo_vert_ != nullptr) _impl_.vbo_vert_->Clear();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
void meshData_proto::clear_vbo_norm() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.vbo_norm_ != nullptr) _impl_.vbo_norm_->Clear();
  _impl_._has_bits_[0] &= ~0x00000008u;
}
void meshData_proto::clear_vbo_uv() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.vbo_uv_ != nullptr) _impl_.vbo_uv_->Clear();
  _impl_._has_bits_[0] &= ~0x00000010u;
}
void meshData_proto::clear_vbo_index() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.vbo_index_ != nullptr) _impl_.vbo_index_->Clear();
  _impl_._has_bits_[0] &= ~0x00000020u;
}
void meshData_proto::clear_vbo_color() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.vbo_color_ != nullptr) _impl_.vbo_color_->Clear();
  _impl_._has_bits_[0] &= ~0x00000040u;
}
void meshData_proto::clear_texture() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.texture_ != nullptr) _impl_.texture_->Clear();
  _impl_._has_bits_[0] &= ~0x00000080u;
}
void meshData_proto::clear_bounding_sphere() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (_impl_.bounding_sphere_ != nullptr) _impl_.bounding_sphere_->Clear();
  _impl_._has_bits_[0] &= ~0x00000100u;
}
meshData_proto::meshData_proto(::google::protobuf::Arena* arena)
    : ::google::protobuf::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:meshData_proto)
}
inline PROTOBUF_NDEBUG_INLINE meshData_proto::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::meshData_proto& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        rotation_{visibility, arena, from.rotation_},
        translation_{visibility, arena, from.translation_},
        scale_{visibility, arena, from.scale_},
        pversion_(arena, from.pversion_),
        pmeshname_(arena, from.pmeshname_) {}

meshData_proto::meshData_proto(
    ::google::protobuf::Arena* arena,
    const meshData_proto& from)
    : ::google::protobuf::MessageLite(arena) {
  meshData_proto* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.vbo_vert_ = (cached_has_bits & 0x00000004u) ? ::google::protobuf::MessageLite::CopyConstruct<::vboData_proto>(
                              arena, *from._impl_.vbo_vert_)
                        : nullptr;
  _impl_.vbo_norm_ = (cached_has_bits & 0x00000008u) ? ::google::protobuf::MessageLite::CopyConstruct<::vboData_proto>(
                              arena, *from._impl_.vbo_norm_)
                        : nullptr;
  _impl_.vbo_uv_ = (cached_has_bits & 0x00000010u) ? ::google::protobuf::MessageLite::CopyConstruct<::vboData_proto>(
                              arena, *from._impl_.vbo_uv_)
                        : nullptr;
  _impl_.vbo_index_ = (cached_has_bits & 0x00000020u) ? ::google::protobuf::MessageLite::CopyConstruct<::vboData_proto>(
                              arena, *from._impl_.vbo_index_)
                        : nullptr;
  _impl_.vbo_color_ = (cached_has_bits & 0x00000040u) ? ::google::protobuf::MessageLite::CopyConstruct<::vboData_proto>(
                              arena, *from._impl_.vbo_color_)
                        : nullptr;
  _impl_.texture_ = (cached_has_bits & 0x00000080u) ? ::google::protobuf::MessageLite::CopyConstruct<::textureData_proto>(
                              arena, *from._impl_.texture_)
                        : nullptr;
  _impl_.bounding_sphere_ = (cached_has_bits & 0x00000100u) ? ::google::protobuf::MessageLite::CopyConstruct<::boundingSphereData_proto>(
                              arena, *from._impl_.bounding_sphere_)
                        : nullptr;
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, mode_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, mode_),
           offsetof(Impl_, enabled_) -
               offsetof(Impl_, mode_) +
               sizeof(Impl_::enabled_));

  // @@protoc_insertion_point(copy_constructor:meshData_proto)
}
inline PROTOBUF_NDEBUG_INLINE meshData_proto::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        rotation_{visibility, arena},
        translation_{visibility, arena},
        scale_{visibility, arena},
        pversion_(arena),
        pmeshname_(arena) {}

inline void meshData_proto::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, vbo_vert_),
           0,
           offsetof(Impl_, enabled_) -
               offsetof(Impl_, vbo_vert_) +
               sizeof(Impl_::enabled_));
}
meshData_proto::~meshData_proto() {
  // @@protoc_insertion_point(destructor:meshData_proto)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void meshData_proto::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.pversion_.Destroy();
  _impl_.pmeshname_.Destroy();
  delete _impl_.vbo_vert_;
  delete _impl_.vbo_norm_;
  delete _impl_.vbo_uv_;
  delete _impl_.vbo_index_;
  delete _impl_.vbo_color_;
  delete _impl_.texture_;
  delete _impl_.bounding_sphere_;
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
meshData_proto::GetClassData() const {
  PROTOBUF_CONSTINIT static const ClassDataLite<15> _data_ =
      {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_._cached_size_),
              true,
          },
          "meshData_proto",
      };

  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<4, 16, 7, 0, 2> meshData_proto::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_._has_bits_),
    0, // no _extensions_
    16, 120,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294901760,  // skipmap
    offsetof(decltype(_table_), field_entries),
    16,  // num_field_entries
    7,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_meshData_proto_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::meshData_proto>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // optional bool enabled = 16;
    {::_pbi::TcParser::FastV8S2,
     {384, 12, 0, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.enabled_)}},
    // optional bytes pVersion = 1;
    {::_pbi::TcParser::FastBS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.pversion_)}},
    // optional bytes pMeshName = 2;
    {::_pbi::TcParser::FastBS1,
     {18, 1, 0, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.pmeshname_)}},
    // optional .meshData_proto.RENDER_MODE mode = 3;
    {::_pbi::TcParser::FastV32S1,
     {24, 9, 0, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.mode_)}},
    // optional uint32 triCount = 4;
    {::_pbi::TcParser::FastV32S1,
     {32, 10, 0, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.tricount_)}},
    // optional uint32 vertCount = 5;
    {::_pbi::TcParser::FastV32S1,
     {40, 11, 0, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.vertcount_)}},
    // optional .vboData_proto vbo_vert = 6;
    {::_pbi::TcParser::FastMtS1,
     {50, 2, 0, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.vbo_vert_)}},
    // optional .vboData_proto vbo_norm = 7;
    {::_pbi::TcParser::FastMtS1,
     {58, 3, 1, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.vbo_norm_)}},
    // optional .vboData_proto vbo_uv = 8;
    {::_pbi::TcParser::FastMtS1,
     {66, 4, 2, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.vbo_uv_)}},
    // optional .vboData_proto vbo_index = 9;
    {::_pbi::TcParser::FastMtS1,
     {74, 5, 3, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.vbo_index_)}},
    // optional .vboData_proto vbo_color = 10;
    {::_pbi::TcParser::FastMtS1,
     {82, 6, 4, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.vbo_color_)}},
    // optional .textureData_proto texture = 11;
    {::_pbi::TcParser::FastMtS1,
     {90, 7, 5, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.texture_)}},
    // optional .boundingSphereData_proto bounding_sphere = 12;
    {::_pbi::TcParser::FastMtS1,
     {98, 8, 6, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.bounding_sphere_)}},
    // repeated float rotation = 13;
    {::_pbi::TcParser::FastF32P1,
     {106, 63, 0, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.rotation_)}},
    // repeated float translation = 14;
    {::_pbi::TcParser::FastF32P1,
     {114, 63, 0, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.translation_)}},
    // repeated float scale = 15;
    {::_pbi::TcParser::FastF32P1,
     {122, 63, 0, PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.scale_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional bytes pVersion = 1;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.pversion_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // optional bytes pMeshName = 2;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.pmeshname_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // optional .meshData_proto.RENDER_MODE mode = 3;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.mode_), _Internal::kHasBitsOffset + 9, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kOpenEnum)},
    // optional uint32 triCount = 4;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.tricount_), _Internal::kHasBitsOffset + 10, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // optional uint32 vertCount = 5;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.vertcount_), _Internal::kHasBitsOffset + 11, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // optional .vboData_proto vbo_vert = 6;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.vbo_vert_), _Internal::kHasBitsOffset + 2, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // optional .vboData_proto vbo_norm = 7;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.vbo_norm_), _Internal::kHasBitsOffset + 3, 1,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // optional .vboData_proto vbo_uv = 8;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.vbo_uv_), _Internal::kHasBitsOffset + 4, 2,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // optional .vboData_proto vbo_index = 9;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.vbo_index_), _Internal::kHasBitsOffset + 5, 3,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // optional .vboData_proto vbo_color = 10;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.vbo_color_), _Internal::kHasBitsOffset + 6, 4,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // optional .textureData_proto texture = 11;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.texture_), _Internal::kHasBitsOffset + 7, 5,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // optional .boundingSphereData_proto bounding_sphere = 12;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.bounding_sphere_), _Internal::kHasBitsOffset + 8, 6,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // repeated float rotation = 13;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.rotation_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kPackedFloat)},
    // repeated float translation = 14;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.translation_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kPackedFloat)},
    // repeated float scale = 15;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.scale_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kPackedFloat)},
    // optional bool enabled = 16;
    {PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.enabled_), _Internal::kHasBitsOffset + 12, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBool)},
  }}, {{
    {::_pbi::TcParser::GetTable<::vboData_proto>()},
    {::_pbi::TcParser::GetTable<::vboData_proto>()},
    {::_pbi::TcParser::GetTable<::vboData_proto>()},
    {::_pbi::TcParser::GetTable<::vboData_proto>()},
    {::_pbi::TcParser::GetTable<::vboData_proto>()},
    {::_pbi::TcParser::GetTable<::textureData_proto>()},
    {::_pbi::TcParser::GetTable<::boundingSphereData_proto>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void meshData_proto::Clear() {
// @@protoc_insertion_point(message_clear_start:meshData_proto)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.rotation_.Clear();
  _impl_.translation_.Clear();
  _impl_.scale_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.pversion_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.pmeshname_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      ABSL_DCHECK(_impl_.vbo_vert_ != nullptr);
      _impl_.vbo_vert_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      ABSL_DCHECK(_impl_.vbo_norm_ != nullptr);
      _impl_.vbo_norm_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      ABSL_DCHECK(_impl_.vbo_uv_ != nullptr);
      _impl_.vbo_uv_->Clear();
    }
    if (cached_has_bits & 0x00000020u) {
      ABSL_DCHECK(_impl_.vbo_index_ != nullptr);
      _impl_.vbo_index_->Clear();
    }
    if (cached_has_bits & 0x00000040u) {
      ABSL_DCHECK(_impl_.vbo_color_ != nullptr);
      _impl_.vbo_color_->Clear();
    }
    if (cached_has_bits & 0x00000080u) {
      ABSL_DCHECK(_impl_.texture_ != nullptr);
      _impl_.texture_->Clear();
    }
  }
  if (cached_has_bits & 0x00000100u) {
    ABSL_DCHECK(_impl_.bounding_sphere_ != nullptr);
    _impl_.bounding_sphere_->Clear();
  }
  if (cached_has_bits & 0x00001e00u) {
    ::memset(&_impl_.mode_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.enabled_) -
        reinterpret_cast<char*>(&_impl_.mode_)) + sizeof(_impl_.enabled_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

::uint8_t* meshData_proto::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:meshData_proto)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional bytes pVersion = 1;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_pversion();
    target = stream->WriteBytesMaybeAliased(1, _s, target);
  }

  // optional bytes pMeshName = 2;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_pmeshname();
    target = stream->WriteBytesMaybeAliased(2, _s, target);
  }

  // optional .meshData_proto.RENDER_MODE mode = 3;
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        3, this->_internal_mode(), target);
  }

  // optional uint32 triCount = 4;
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        4, this->_internal_tricount(), target);
  }

  // optional uint32 vertCount = 5;
  if (cached_has_bits & 0x00000800u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        5, this->_internal_vertcount(), target);
  }

  // optional .vboData_proto vbo_vert = 6;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        6, *_impl_.vbo_vert_, _impl_.vbo_vert_->GetCachedSize(), target, stream);
  }

  // optional .vboData_proto vbo_norm = 7;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        7, *_impl_.vbo_norm_, _impl_.vbo_norm_->GetCachedSize(), target, stream);
  }

  // optional .vboData_proto vbo_uv = 8;
  if (cached_has_bits & 0x00000010u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        8, *_impl_.vbo_uv_, _impl_.vbo_uv_->GetCachedSize(), target, stream);
  }

  // optional .vboData_proto vbo_index = 9;
  if (cached_has_bits & 0x00000020u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        9, *_impl_.vbo_index_, _impl_.vbo_index_->GetCachedSize(), target, stream);
  }

  // optional .vboData_proto vbo_color = 10;
  if (cached_has_bits & 0x00000040u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        10, *_impl_.vbo_color_, _impl_.vbo_color_->GetCachedSize(), target, stream);
  }

  // optional .textureData_proto texture = 11;
  if (cached_has_bits & 0x00000080u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        11, *_impl_.texture_, _impl_.texture_->GetCachedSize(), target, stream);
  }

  // optional .boundingSphereData_proto bounding_sphere = 12;
  if (cached_has_bits & 0x00000100u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        12, *_impl_.bounding_sphere_, _impl_.bounding_sphere_->GetCachedSize(), target, stream);
  }

  // repeated float rotation = 13;
  if (this->_internal_rotation_size() > 0) {
    target = stream->WriteFixedPacked(13, _internal_rotation(), target);
  }

  // repeated float translation = 14;
  if (this->_internal_translation_size() > 0) {
    target = stream->WriteFixedPacked(14, _internal_translation(), target);
  }

  // repeated float scale = 15;
  if (this->_internal_scale_size() > 0) {
    target = stream->WriteFixedPacked(15, _internal_scale(), target);
  }

  // optional bool enabled = 16;
  if (cached_has_bits & 0x00001000u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        16, this->_internal_enabled(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(
        _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:meshData_proto)
  return target;
}

::size_t meshData_proto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:meshData_proto)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // repeated float rotation = 13;
  {
    std::size_t data_size = std::size_t{4} *
        ::_pbi::FromIntSize(this->_internal_rotation_size())
    ;
    std::size_t tag_size = data_size == 0
        ? 0
        : 1 + ::_pbi::WireFormatLite::Int32Size(
                            static_cast<int32_t>(data_size))
    ;
    total_size += tag_size + data_size;
  }
  // repeated float translation = 14;
  {
    std::size_t data_size = std::size_t{4} *
        ::_pbi::FromIntSize(this->_internal_translation_size())
    ;
    std::size_t tag_size = data_size == 0
        ? 0
        : 1 + ::_pbi::WireFormatLite::Int32Size(
                            static_cast<int32_t>(data_size))
    ;
    total_size += tag_size + data_size;
  }
  // repeated float scale = 15;
  {
    std::size_t data_size = std::size_t{4} *
        ::_pbi::FromIntSize(this->_internal_scale_size())
    ;
    std::size_t tag_size = data_size == 0
        ? 0
        : 1 + ::_pbi::WireFormatLite::Int32Size(
                            static_cast<int32_t>(data_size))
    ;
    total_size += tag_size + data_size;
  }
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional bytes pVersion = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                      this->_internal_pversion());
    }

    // optional bytes pMeshName = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                      this->_internal_pmeshname());
    }

    // optional .vboData_proto vbo_vert = 6;
    if (cached_has_bits & 0x00000004u) {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.vbo_vert_);
    }

    // optional .vboData_proto vbo_norm = 7;
    if (cached_has_bits & 0x00000008u) {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.vbo_norm_);
    }

    // optional .vboData_proto vbo_uv = 8;
    if (cached_has_bits & 0x00000010u) {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.vbo_uv_);
    }

    // optional .vboData_proto vbo_index = 9;
    if (cached_has_bits & 0x00000020u) {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.vbo_index_);
    }

    // optional .vboData_proto vbo_color = 10;
    if (cached_has_bits & 0x00000040u) {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.vbo_color_);
    }

    // optional .textureData_proto texture = 11;
    if (cached_has_bits & 0x00000080u) {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.texture_);
    }

  }
  if (cached_has_bits & 0x00001f00u) {
    // optional .boundingSphereData_proto bounding_sphere = 12;
    if (cached_has_bits & 0x00000100u) {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.bounding_sphere_);
    }

    // optional .meshData_proto.RENDER_MODE mode = 3;
    if (cached_has_bits & 0x00000200u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_mode());
    }

    // optional uint32 triCount = 4;
    if (cached_has_bits & 0x00000400u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_tricount());
    }

    // optional uint32 vertCount = 5;
    if (cached_has_bits & 0x00000800u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_vertcount());
    }

    // optional bool enabled = 16;
    if (cached_has_bits & 0x00001000u) {
      total_size += 3;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
  }
  _impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
  return total_size;
}

void meshData_proto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const meshData_proto*>(
      &from));
}

void meshData_proto::MergeFrom(const meshData_proto& from) {
  meshData_proto* const _this = this;
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:meshData_proto)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_rotation()->MergeFrom(from._internal_rotation());
  _this->_internal_mutable_translation()->MergeFrom(from._internal_translation());
  _this->_internal_mutable_scale()->MergeFrom(from._internal_scale());
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_pversion(from._internal_pversion());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_pmeshname(from._internal_pmeshname());
    }
    if (cached_has_bits & 0x00000004u) {
      ABSL_DCHECK(from._impl_.vbo_vert_ != nullptr);
      if (_this->_impl_.vbo_vert_ == nullptr) {
        _this->_impl_.vbo_vert_ =
            ::google::protobuf::MessageLite::CopyConstruct<::vboData_proto>(arena, *from._impl_.vbo_vert_);
      } else {
        _this->_impl_.vbo_vert_->MergeFrom(*from._impl_.vbo_vert_);
      }
    }
    if (cached_has_bits & 0x00000008u) {
      ABSL_DCHECK(from._impl_.vbo_norm_ != nullptr);
      if (_this->_impl_.vbo_norm_ == nullptr) {
        _this->_impl_.vbo_norm_ =
            ::google::protobuf::MessageLite::CopyConstruct<::vboData_proto>(arena, *from._impl_.vbo_norm_);
      } else {
        _this->_impl_.vbo_norm_->MergeFrom(*from._impl_.vbo_norm_);
      }
    }
    if (cached_has_bits & 0x00000010u) {
      ABSL_DCHECK(from._impl_.vbo_uv_ != nullptr);
      if (_this->_impl_.vbo_uv_ == nullptr) {
        _this->_impl_.vbo_uv_ =
            ::google::protobuf::MessageLite::CopyConstruct<::vboData_proto>(arena, *from._impl_.vbo_uv_);
      } else {
        _this->_impl_.vbo_uv_->MergeFrom(*from._impl_.vbo_uv_);
      }
    }
    if (cached_has_bits & 0x00000020u) {
      ABSL_DCHECK(from._impl_.vbo_index_ != nullptr);
      if (_this->_impl_.vbo_index_ == nullptr) {
        _this->_impl_.vbo_index_ =
            ::google::protobuf::MessageLite::CopyConstruct<::vboData_proto>(arena, *from._impl_.vbo_index_);
      } else {
        _this->_impl_.vbo_index_->MergeFrom(*from._impl_.vbo_index_);
      }
    }
    if (cached_has_bits & 0x00000040u) {
      ABSL_DCHECK(from._impl_.vbo_color_ != nullptr);
      if (_this->_impl_.vbo_color_ == nullptr) {
        _this->_impl_.vbo_color_ =
            ::google::protobuf::MessageLite::CopyConstruct<::vboData_proto>(arena, *from._impl_.vbo_color_);
      } else {
        _this->_impl_.vbo_color_->MergeFrom(*from._impl_.vbo_color_);
      }
    }
    if (cached_has_bits & 0x00000080u) {
      ABSL_DCHECK(from._impl_.texture_ != nullptr);
      if (_this->_impl_.texture_ == nullptr) {
        _this->_impl_.texture_ =
            ::google::protobuf::MessageLite::CopyConstruct<::textureData_proto>(arena, *from._impl_.texture_);
      } else {
        _this->_impl_.texture_->MergeFrom(*from._impl_.texture_);
      }
    }
  }
  if (cached_has_bits & 0x00001f00u) {
    if (cached_has_bits & 0x00000100u) {
      ABSL_DCHECK(from._impl_.bounding_sphere_ != nullptr);
      if (_this->_impl_.bounding_sphere_ == nullptr) {
        _this->_impl_.bounding_sphere_ =
            ::google::protobuf::MessageLite::CopyConstruct<::boundingSphereData_proto>(arena, *from._impl_.bounding_sphere_);
      } else {
        _this->_impl_.bounding_sphere_->MergeFrom(*from._impl_.bounding_sphere_);
      }
    }
    if (cached_has_bits & 0x00000200u) {
      _this->_impl_.mode_ = from._impl_.mode_;
    }
    if (cached_has_bits & 0x00000400u) {
      _this->_impl_.tricount_ = from._impl_.tricount_;
    }
    if (cached_has_bits & 0x00000800u) {
      _this->_impl_.vertcount_ = from._impl_.vertcount_;
    }
    if (cached_has_bits & 0x00001000u) {
      _this->_impl_.enabled_ = from._impl_.enabled_;
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void meshData_proto::CopyFrom(const meshData_proto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:meshData_proto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void meshData_proto::InternalSwap(meshData_proto* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.rotation_.InternalSwap(&other->_impl_.rotation_);
  _impl_.translation_.InternalSwap(&other->_impl_.translation_);
  _impl_.scale_.InternalSwap(&other->_impl_.scale_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.pversion_, &other->_impl_.pversion_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.pmeshname_, &other->_impl_.pmeshname_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.enabled_)
      + sizeof(meshData_proto::_impl_.enabled_)
      - PROTOBUF_FIELD_OFFSET(meshData_proto, _impl_.vbo_vert_)>(
          reinterpret_cast<char*>(&_impl_.vbo_vert_),
          reinterpret_cast<char*>(&other->_impl_.vbo_vert_));
}

// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
