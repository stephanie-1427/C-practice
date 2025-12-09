#include <iostream>

int main()
{
    // namespace

    int i = 0;
    
    for (int i = 0; i < 10; ++i) {
        i = 15;
        
        // the loop control variable only exists
        // in the scope of the loop
    } // death of the loop control variable here

    
    std::cout << i << std::endl;

    return 0;
}