#include <iostream>

int main()
{
    float f = 1.234f;
    std::cout << "f = " << f << '\n' << "f = " << std::hexfloat << f << '\n';
    return 0;
}
