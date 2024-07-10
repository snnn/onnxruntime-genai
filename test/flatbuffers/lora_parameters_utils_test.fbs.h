// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_LORAPARAMETERSUTILSTEST_GENERATORS_LORA_PARAMETERS_TEST_H_
#define FLATBUFFERS_GENERATED_LORAPARAMETERSUTILSTEST_GENERATORS_LORA_PARAMETERS_TEST_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

#include "genai_lora.fbs.h"

namespace Generators {
namespace lora_parameters {
namespace test {

struct TestData;
struct TestDataBuilder;

struct TestData FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef TestDataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_INITIALIZERS = 4
  };
  const ::flatbuffers::Vector<::flatbuffers::Offset<Generators::lora_parameters::Tensor>> *initializers() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<Generators::lora_parameters::Tensor>> *>(VT_INITIALIZERS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_INITIALIZERS) &&
           verifier.VerifyVector(initializers()) &&
           verifier.VerifyVectorOfTables(initializers()) &&
           verifier.EndTable();
  }
};

struct TestDataBuilder {
  typedef TestData Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_initializers(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Generators::lora_parameters::Tensor>>> initializers) {
    fbb_.AddOffset(TestData::VT_INITIALIZERS, initializers);
  }
  explicit TestDataBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<TestData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<TestData>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<TestData> CreateTestData(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<Generators::lora_parameters::Tensor>>> initializers = 0) {
  TestDataBuilder builder_(_fbb);
  builder_.add_initializers(initializers);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<TestData> CreateTestDataDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<::flatbuffers::Offset<Generators::lora_parameters::Tensor>> *initializers = nullptr) {
  auto initializers__ = initializers ? _fbb.CreateVector<::flatbuffers::Offset<Generators::lora_parameters::Tensor>>(*initializers) : 0;
  return Generators::lora_parameters::test::CreateTestData(
      _fbb,
      initializers__);
}

inline const Generators::lora_parameters::test::TestData *GetTestData(const void *buf) {
  return ::flatbuffers::GetRoot<Generators::lora_parameters::test::TestData>(buf);
}

inline const Generators::lora_parameters::test::TestData *GetSizePrefixedTestData(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<Generators::lora_parameters::test::TestData>(buf);
}

inline bool VerifyTestDataBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Generators::lora_parameters::test::TestData>(nullptr);
}

inline bool VerifySizePrefixedTestDataBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Generators::lora_parameters::test::TestData>(nullptr);
}

inline void FinishTestDataBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<Generators::lora_parameters::test::TestData> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTestDataBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<Generators::lora_parameters::test::TestData> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace test
}  // namespace lora_parameters
}  // namespace Generators

#endif  // FLATBUFFERS_GENERATED_LORAPARAMETERSUTILSTEST_GENERATORS_LORA_PARAMETERS_TEST_H_
