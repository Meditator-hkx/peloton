//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// ssi_txn_manager_test.cpp
//
// Identification: test/concurrency/ssi_txn_manager_test.cpp
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#include "common/harness.h"
#include "concurrency/transaction_tests_util.h"

namespace peloton {

namespace test {

//===--------------------------------------------------------------------===//
// Transaction Tests
//===--------------------------------------------------------------------===//

class SsiTxnManagerTests : public PelotonTest {};

TEST_F(SsiTxnManagerTests, Test) {
  concurrency::TransactionManagerFactory::Configure(CONCURRENCY_TYPE_SSI);
  EXPECT_TRUE(true);
}

}  // End test namespace
}  // End peloton namespace
