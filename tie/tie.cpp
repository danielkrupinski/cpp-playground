#include <iostream>
#include <tuple>

int main()
{
    std::tuple<int, char, bool> tuple{ 10, 'A', true };
    int a;
    bool b;
    std::tie(a, std::ignore, b) = tuple;
    std::cout << a << '\n' << b << '\n';
    return 0;
}
