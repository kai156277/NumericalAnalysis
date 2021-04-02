#include "Interpolation.h"
#include "gtest/gtest.h"

TEST(Interpolation, lagrange_1)
{
    std::vector<double> xs = {-1, 0, 1, 2};
    std::vector<double> ys = {-7, -4, 5, 26};

    double fx = lagrange(xs, ys, 0.5);
    EXPECT_DOUBLE_EQ(fx, -0.625);
}

TEST(Interpolation, lagrange_2)
{
    std::vector<double> xs = {0.32, 0.34};
    std::vector<double> ys = {0.314567, 0.333487};

    double fx = lagrange(xs, ys, 0.3367);
    EXPECT_NEAR(fx, 0.330365, 0.92 * 1e-5);
}

TEST(Interpolation, lagrange_3)
{
    std::vector<double> xs = {0.32, 0.34, 0.36};
    std::vector<double> ys = {0.314567, 0.333487, 0.352274};

    double fx = lagrange(xs, ys, 0.3367);
    EXPECT_NEAR(fx, 0.330374, 0.5 * 1e-5);
}
