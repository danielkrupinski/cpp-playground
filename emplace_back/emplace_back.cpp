#include <iostream>
#include <vector>

struct Foo {
    int a;
    std::string s;
    
    Foo(int _a, const std::string& _s) : a{ _a }, s{ _s } { }
};

int main()
{
    std::vector<Foo> foo;
    foo.emplace_back(2018, "C++");
    std::cout << foo[0].a << '\n' << foo[0].s << '\n';
    return 0;
}