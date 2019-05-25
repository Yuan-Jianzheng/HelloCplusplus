#include "calc.h"
#include "gtest/gtest.h"

TEST(calc, add) {
    ASSERT_EQ(9, Calc::add(3, 6));
}

TEST(calc, sub) {
    ASSERT_EQ(3, Calc::sub(9, 6));
}
