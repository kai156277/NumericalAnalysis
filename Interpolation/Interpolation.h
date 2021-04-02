#pragma once
#include <stdint.h>
#include <vector>

// lagrange 插值算法
// 此算法已做出如下假设：
// 1. xs.size() >= ys.size()
// 2. xs 中任意节点互异
double lagrange(const std::vector<double> &xs,
                const std::vector<double> &ys,
                double                     x);
double newton();
