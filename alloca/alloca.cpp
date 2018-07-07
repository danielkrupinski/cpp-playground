#include <alloca.h>
#include <iostream>

int main()
{
    int* tab = static_cast<int*>(alloca(3 * sizeof(int)));
    std::cout << "tab[3] allocated on stack with alloca():\n";

    for (int i = 0; i != 3; ++i) {
        tab[i] = i;
        std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
    }
    return 0;
}
