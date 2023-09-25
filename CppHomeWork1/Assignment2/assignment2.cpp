#include "assignment2.hpp"
#include <string>
#include <vector>
#include <array>

bool RG::Homework1::assignment2()
{
    using namespace std::literals;
    int i1;
    long long i2{7ll};
    long double d{4.5l};
    char8_t c{u8'd'};
    std::u8string s{u8"Hello World!"s};
    std::vector<int> v{1, 2, 3, 4, 5};
    std::array<int, 5> a{2, 3, 7, 5, 6};

    i1 = 4;
    ++i2;
    d += 0.7l;
    c = u8'b';
    s = u8"Your Name"s;
    v = {5, 4, 3, 2, 1};
    a.at(2) = i1;

    return (i1 == 4)
        && (i2 == 8ll)
        && (d == 5.2l)
        && (c == u8'b')
        && (s != u8"Hello World!"s)
        && (v == std::vector<int>{5, 4, 3, 2, 1})
        && (a == std::array<int, 5>{2, 3, 4, 5, 6});
}

