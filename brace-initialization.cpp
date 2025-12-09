#include <iostream>

class Example {
    private:
        int h{13}; // uses brace initialization to create an int w/ value 13
        // brace initialization can be used on built in types, list initialization,
        // new expressions, structs
    public:
        int getH() { return h; }
};

int main()
{
    Example a;
    std::cout << a.getH();

    return 0;
}