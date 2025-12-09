#include <iostream>
#include <string>

// namespace argument lookup example

namespace A {
    std::string func() { return "A"; }
}

namespace B {
    using A::func; // for this entire namespace, always use func from A when func has no arguments
    std::string func(int x) { return "B"; }
}

using namespace B;
int main()
{
    // performs an argument lookup
    std::cout << func() << std::endl; // A
    std::cout << func(1) << std::endl; // B
    return 0;
}