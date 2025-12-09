#include <iostream>

int main () {
    int x[5] = {0, 1, 2, 3, 4};

    int *p = x;
    
    std::cout << "address of p: " << p << std::endl;
    std::cout << "address of x: " << x << std::endl;
    
    std::cout << "pointer defrenence: " << *p << std::endl;
    // should be value at x[0]
    
    *p = -1; // x[0] = -1
    
    // should be -1 since x[0] was updated to -1
    std::cout << "pointer defrenence: " << *p << std::endl;
    
    p++;
    // should be 1, since p++ = address of x[1]
    std::cout << "pointer defrenence: " << *p << std::endl;
    
    int y = 42;
    p = &y;
    std::cout << "address of p: " << p << std::endl;
    std::cout << "address of x: " << x << std::endl;
    std::cout << "pointer defrenence: " << *p << std::endl;
    std::cout << "x is " << *x << std::endl; // can an array be dereferenced? YES!
    
    // an array is a pointer
    // not possible: x++;
    
    // are p = x and q = &x[0] the same?
    p = x;
    int *q = &x[0];
    
    if (p == q) { std::cout << "same address" << std::endl; } // true
    
    // what happens when a pointer points to an address out of range?
    p += 4;
    std::cout << "last element in array x: " << *p << std::endl;
    p++;
    std::cout << "what comes after (out of range): " << p << std::endl;
    std::cout << "what comes after (out of range): " << *p << std::endl;
    // garbage!

    return 0;

    /*
    OUTPUT

    address of p: 0x7ffca512b490
    address of x: 0x7ffca512b490
    pointer defrenence: 0
    pointer defrenence: -1
    pointer defrenence: 1
    address of p: 0x7ffca512b48c
    address of x: 0x7ffca512b490
    pointer defrenence: 42
    x is -1
    same address
    last element in array x: 4
    what comes after (out of range): 0x7ffca512b4a4
    what comes after (out of range): 779647075

    */

}