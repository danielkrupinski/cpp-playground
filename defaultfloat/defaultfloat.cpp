#include <iostream>

int main()
{
    float f = 1.234f;
    std::cout << "f = " << std::hexfloat << f << "\nf = " << std::defaultfloat << f << '\n';
    return 0;
}
