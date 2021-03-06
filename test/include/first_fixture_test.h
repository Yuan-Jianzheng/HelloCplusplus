#ifndef FIRST_FIXTURE_TEST_H_
#define FIRST_FIXTURE_TEST_H_

#include "gtest/gtest.h"
#include <iostream>

class FirstFixture : public testing::Test {
  public:
    static void SetUpTestCase() {
        std::cout << "First Fixture or Suite Set Up" << std::endl;
    }

    static void TearDownTestCase() {
        std::cout << "First Fixture or Suite Tear Down" << std::endl;
    }

    virtual void SetUp() {
        std::cout << "Test Case of First Fixture Set Up" << std::endl;
    }

    virtual void TearDown() {
        std::cout << "Test Case of First Fixture Tear Down" << std::endl;
    }

  public:
    int add(int a, int b) {
        return a + b;
    }
};

#endif