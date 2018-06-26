#include "gtest/gtest.h"
#include "../controller.h"

TEST(Controller, DistanceIsFine) {
    EXPECT_EQ(convert(GreenRange), OK);
}

TEST(Controller, DistanceWarnsUpperTreshold) {
    EXPECT_EQ(convert(GreenRange - 1), WARN);
}

TEST(Controller, DistanceWarnsLowerTreshold) {
    EXPECT_EQ(convert(YellowRange), WARN);
}

TEST(Controller, DistanceErrorsUpperTreshold) {
    EXPECT_EQ(convert(YellowRange-1), ERROR);
}

TEST(Controller, DistanceErrorsLowerTreshold) {
    EXPECT_EQ(convert(RedRange), ERROR);
}