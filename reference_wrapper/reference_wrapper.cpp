#include <algorithm>
#include <iostream>
#include <functional>
#include <numeric>
#include <vector>

int main()
{
    int a = 12;
    int b = 17;
    int c = 22;
    std::cout << "a = " << a << '\n' << "b = " << b << '\n' << "c = " << c << "\n\n";
    std::vector<std::reference_wrapper<int>> v{ a, b, c };
    std::for_each(v.begin(), v.end(), [](std::reference_wrapper<int> r) { r.get() = 33; });
    std::cout << "a = " << a << '\n' << "b = " << b << '\n' << "c = " << c << '\n';
    return 0;
}
