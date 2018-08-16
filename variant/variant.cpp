#include <iostream>
#include <variant>

int main()
{
    std::variant<int, double> v = 20;
    std::cout << "v = " << std::get<int>(v) << '\n';
    v = 33.33;
    std::cout << "v = " << std::get<double>(v) << '\n';
    return 0;
}
