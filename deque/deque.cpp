#include <deque>
#include <iostream>
#include <iterator>

int main()
{
    std::deque<int> d{ 1, 2, 3, 4, 5 };
    d.pop_back();
    d.push_front(0);
    std::copy(d.begin(), d.end(), std::ostream_iterator<int>{ std::cout, " " });
    std::cout << '\n';
    return 0;
}