#include <iostream>
#include <utility>

int main()
{
    std::pair<char, int> pair{ 'A', 123 };
    std::cout << pair.first << '\n' << pair.second << '\n' <<  std::get<0>(pair) << '\n' << std::get<1>(pair) << '\n';
    return 0;
}
