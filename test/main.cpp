#include "global_environment.h"
#include "gtest/gtest.h"
#include <iostream>

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    testing::AddGlobalTestEnvironment(new GlobalEnvironment());
    return RUN_ALL_TESTS();
}