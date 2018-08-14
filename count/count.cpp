#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    const std::vector<int> v{ 1, 2, 1, 138, 1, 0, -1813, -173, -88, 1, 15, 47, 1 };
    std::cout << std::count(v.begin(), v.end(), 1);
    return 0;
}
