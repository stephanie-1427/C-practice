#include <iostream>

int main()
{
    int *p = new int(5);
    int *q = p; // p and q point to the same address in memory
    *q += 3;
    delete p; // deleting the memory at that address,
    // but q is still pointing to that = undefined behavior
    std::cout << *q << '\n';

    return 0;
}