#include <initializer_list>
#include <iostream>

int main()
{
    std::initializer_list<int> initList{ 1, 2, 4, 16 };

    for (const auto& a : initList) {
        std::cout << a << '\n';
    }
    return 0;
}
