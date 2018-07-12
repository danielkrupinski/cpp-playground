#include <iostream>
#include <utility>

int main()
{
    std::pair<char, int> pair{ 'A', 123 };
    std::cout << pair.first << '\n' << pair.second;
    return 0;
}