#include <iostream>
#include "gtest/gtest.h"
#include "global_environment.h"

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    testing::AddGlobalTestEnvironment(new GlobalEnvironment());
    return RUN_ALL_TESTS();
}