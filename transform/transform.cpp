#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::transform(v.begin(), v.end(), v.begin(), [](int& a) { a += 10; });
    return 0;
}
