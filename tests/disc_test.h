#ifndef DISC_H
#define DISC_H

#include <gtest/gtest.h>

extern "C" {
#include <stdio.h>
#include <math.h>
}
TEST(discTest, num0) {
    double a[2];
    disc(1,5,6,a);
    ASSERT_EQ(a[0], -2);
    ASSERT_EQ(a[1], -3);
}

TEST(discTest, num1) {
    double a[2];
    disc(1,4,4,a);
    ASSERT_EQ(a[0], -2);
}

TEST(discTest, num2) {
    double a[2];
    ASSERT_EQ(disc(1,2,3,a), 2);
}

TEST(discTest, negative) {
    double a[2];
    ASSERT_EQ(disc(0,0,0,a), 3);
}

#endif // DISC_H
