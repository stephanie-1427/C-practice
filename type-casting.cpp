#include <iostream>

int main()
{
    int a = -5, b = 4;
    float p = a / b; // uses integer division since a and b are ints
    int q = b + 2.6;
    std::cout << p << " " << q << std::endl; // -1 6

    return 0;
}