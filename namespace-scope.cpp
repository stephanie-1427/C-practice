#include <iostream>

// namespace scope example

namespace A {
    int i = 0;
}

namespace B {
    int i = 1;
    int j = 2;
    namespace C {
        namespace D {
            using namespace A; // use variables of A when their names are referenced
            int j = 3; // D::j and C::j
            int k = 4;
            int a = i; // will assign a to B::i = 1
        }
        using namespace D;
        
        int k = 5; // should exist independently of D::k
        // int l = k; // error: reference to k is ambiguous
        int m = i; // uses B::i because using only extends to scope it is used within
        int n = j; // uses D::j = 3
        
    }
}

int main()
{
    std::cout << A::i << std::endl; // 0
    
    std::cout << std::endl;
    
    std::cout << B::i << std::endl; // 1
    std::cout << B::j << std::endl; // 2
    
    std::cout << std::endl;

    std::cout << B::C::D::i << std::endl; // 0
    std::cout << B::C::D::j << std::endl; // 3
    std::cout << B::C::D::k << std::endl; // 4
    std::cout << B::C::D::a << std::endl; // 1
    
    std::cout << std::endl;

    std::cout << B::C::i << std::endl; // 0
    std::cout << B::C::k << std::endl; // 5
    std::cout << B::C::j << std::endl; // 3
    std::cout << B::C::a << std::endl; // 1
    std::cout << B::C::m << std::endl; // 1
    std::cout << B::C::n << std::endl; // 3
    return 0;
}