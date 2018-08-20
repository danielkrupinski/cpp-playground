#include <algorithm>
#include <chrono>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

int main()
{
    std::vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::shuffle(v.begin(), v.end(),
                 std::default_random_engine{ std::chrono::system_clock::now().time_since_epoch().count() });
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>{ std::cout, " " });
    return 0;
}
