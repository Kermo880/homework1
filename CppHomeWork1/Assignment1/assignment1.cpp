#include "assignment1.hpp"
#include <typeinfo>
#include <string>
#include <vector>
#include <array>
#include <cuchar>

bool RG::Homework1::assignment1()
{
    using namespace std::literals;

    int i1;
    int i2 = 0;
    long long i3 = 5ll;
    bool b = true;
    char8_t c = u8'a';
    long double d = 5.5l;
    
    std::u8string s = u8"Hello World!";

    std::vector<int> v = {1, 2, 3, 4, 5};
    std::array<int, 5> a = {1, 2, 3, 4, 5};

    return (typeid(i1) == typeid(int))
        && (i2 == 0)
        && (i3 == 5ll)
        && (b == true)
        && (static_cast<char>(c) == 'a')
        && (d == 5.5l)
        && (s == std::u8string(u8"Hello World!"))
        && std::equal(v.begin(), v.end(), std::vector<int>{1, 2, 3, 4, 5}.begin())
        && std::equal(a.begin(), a.end(), std::array<int, 5>{1, 2, 3, 4, 5}.begin());
}