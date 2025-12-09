#include <iostream>

int main() {
    int i = 0;
    int size = 5;

    for(;;) {
        std::cout << "infinite loop";
    }
    
    for(; i < size;) {
        std::cout << "infinite loop";
    }
    
    for (;;++i) {
        std::cout << "infinite loop";
    }
    
    return 0;
}