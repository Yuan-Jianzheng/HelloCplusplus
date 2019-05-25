#ifndef GLOBAL_ENVIRONMENT_H_
#define GLOBAL_ENVIRONMENT_H_

#include <iostream>
#include "gtest/gtest.h"

class GlobalEnvironment : public testing::Environment
{
public:
    virtual void SetUp()
    {
        std::cout << "Global Environment Set Up" << std::endl;
    }

    virtual void TearDown()
    {
        std::cout << "Global Environment Tear Down" << std::endl;
    }
};

#endif