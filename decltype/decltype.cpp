#include <iostream>

constexpr decltype(auto) square(int a) noexcept
{
    return a * a;
}

int main()
{
    std::cout << square(i) << std::endl;
    return 0;
}
