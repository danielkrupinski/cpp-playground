#include <functional>
#include <iostream>

int main()
{
    std::function<bool(int, int)> less{ std::greater<int>{ } };
    std::cout << less(1, 10) << '\n' << less(20, 2) << '\n';
    return 0;
}
