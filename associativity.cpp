#include <iostream>

// associativity
int main () {
    int a, b, c;
    
    a = 1;
    b = 2;
    c = 3;
    
    a = b = c; // associatvity happens from right to left
    
    std::cout << a << b << c << std::endl;
    // OUTPUT: 333

    return 0;

}