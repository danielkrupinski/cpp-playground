#include <functional>
#include <iostream>

int main()
{
    std::function<bool(int, int)> greater{ std::greater<int>{ } };
    std::cout << greater(1, 10) << '\n' << greater(20, 2) << '\n';
    return 0;
}
