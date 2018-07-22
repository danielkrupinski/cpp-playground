#include <iostream>

constexpr decltype(auto) square(int a) noexcept
{
    return a * a;
}

int main()
{
    auto i = 12;
    auto f = 1.123f;
    auto d = 3.21;
    auto b = true;
    std::cout << square(i) << std::endl;
    return 0;
}
