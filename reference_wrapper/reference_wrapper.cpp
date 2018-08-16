#include <iostream>
#include <functional>
#include <vector>

int main()
{
    int a = 12;
    int b = 17;
    int c = 22;
    std::vector<std::reference_wrapper<int>> v{ a, b, c };
    return 0;
}
