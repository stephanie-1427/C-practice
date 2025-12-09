#include <iostream>
#include <iterator>
#include <list>
#include <string>

int main() {
    std::list<std::string> a_list = {"backwards", "this", "print"};

    for (auto itr = a_list.rbegin(); itr != a_list.rend(); ++itr) {
        std::cout << *itr << " ";
    }
    
    return 0;
}
