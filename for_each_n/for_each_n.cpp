#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::for_each_n(v.begin(), 7, [](int a) { a & 1 ? std::cout << a << " is odd\n" : std::cout << a << " is even\n"; });
    return 0;
}
