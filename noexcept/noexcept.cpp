#include <iostream>

constexpr int square(int a) noexcept
{
    return a * a;
}

int main()
{
    std::cout << square(4) << ' ' << square(5) << '\n';
    return 0;
}
