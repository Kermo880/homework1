#include "assignment3.hpp"
#include <string>
#include <vector>
#include <array>
#include <iostream>

bool RG::Homework1::assignment3()
{
    using namespace std::literals;

    int i1{};
    long long i2{5ll};
    long double d{4.5l};
    char8_t c{u8'd'};
    std::u8string s{u8"Hello World!"s};
    std::vector v{1, 2, 3, 4, 5};
    std::array a{2, 3, 7, 5, 6};

    i1++;
    ++i1;
    i1 += 1;
    i2 += i1;
    d += 0.3l;
    d /= i1;
    c += i1;
    s += c;
    v.at(1) *= ++v.at(2);
    a.at(2) += v.at(3);
    a.at(2) *= i1;
    a.at(2) -= i2;
    a.at(2) /= v.at(4);

    return (i1 == 3)
        && (i2 == 8ll)
        && (d == 4.8l/3)
        && (c == u8'g')
        && (s == u8"Hello World!g"s)
        && (v == std::vector{1, 8, 4, 4, 5})
        && (a == std::array{2, 3, 5, 5, 6});
}