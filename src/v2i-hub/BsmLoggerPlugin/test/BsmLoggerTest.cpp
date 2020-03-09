/*  Copyright (C) 2020 LEIDOS.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 *
 */

#include <vector>
#include <gtest/gtest.h>
#include "../src/BsmLoggerPlugin.h"

using namespace std;
namespace unit_test {

// For a detailed tutorial of test fixtures, see official documentation:
//
//   Google Test Primer: https://github.com/google/googletest/blob/master/googletest/docs/Primer.md
//
// Also note that the mock framework can also be used if needed.  It is not used in this example.
//
//   Google Mock Docs: https://github.com/google/googletest/blob/master/googlemock/README.md

class BsmLoggerTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  BsmLoggerTest() {
     // You can do set-up work for each test here.
  }

  ~BsmLoggerTest() override {
     // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  void SetUp() override {
     // Code here will be called immediately after the constructor (right
     // before each test).
  }

  void TearDown() override {
     // Code here will be called immediately after each test (right
     // before the destructor).
  }

  // Class members declared here can be used by all tests in the test suite
  // for BsmLoggerTest.
};

// A test case will continue running on failure when the "EXPECT" macros are used.
// A test case will abort on failure when the "ASSERT" macros are used.
// testframework for OpenBSMLogFile
TEST_F(BsmLoggerTest, BsmIsOpened)
{
	EXPECT_TRUE(true);
}

// testframework for HandleBasicSafetyMessage
TEST_F(BsmLoggerTest, BsmIsHandled)
{
    EXPECT_TRUE(true);
}

TEST_F(BsmLoggerTest, ConfigIsUpdated)
{
    EXPECT_TRUE(true);
}

// testframework for UpdateConfigSettings
TEST_F(BsmLoggerTest, )
{
    EXPECT_TRUE(true);
}

}  // namespace