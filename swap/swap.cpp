#include <algorithm>
#include <iostream>

int main()
{
    int a = 2;
    int b = 50;
    std::cout << "a = " << a << '\n' << "b = " << b << '\n' << '\n';
    std::swap(a, b);
    std::cout << "a = " << a << '\n' << "b = " << b << '\n';
    return 0;
}
