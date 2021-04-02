#include "Interpolation.h"
#include <iostream>
#include <vector>

double lagrange(const std::vector<double> &xs,
                const std::vector<double> &ys,
                double                     x)
{
    int32_t size = xs.size();
    double  y    = 0.0;
    for (int i = 0; i < size; i++)
    {
        double lx = 1.0;
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                continue;

            lx *= (x - xs[j]) / (xs[i] - xs[j]);
        }
        y += (lx * ys[i]);
    }
    return y;
}
