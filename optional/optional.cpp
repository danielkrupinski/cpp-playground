#include <iostream>
#include <optional>

int main()
{
    std::optional<std::string> s{ "std::optional test" };
    std::optional<std::string> s1{ std::nullopt };
    std::cout << "s = " << s.value_or("empty") << '\n' << "s1 = " << s1.value_or("empty") << '\n';
    return 0;
}
