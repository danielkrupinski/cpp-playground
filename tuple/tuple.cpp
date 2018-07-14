#include <iostream>
#include <tuple>

int main()
{
    std::tuple<int, char, bool> tuple{ 123, 'A', true };
    std::cout << std::get<0>(tuple) << '\n' << std::get<1>(tuple) << '\n' << std::get<2>(tuple);
    return 0;
}