#include <iostream>
#include <vector>

int main() {
    std::vector<int> v(1,1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4); // vector v: 1 2 3 4
    std::vector<int>::iterator i = v.begin();
    std::vector<int>::iterator j = i+2;
    std::cout << *j << " ";
    i+=3; std::cout << *i << " ";
    j = i -1; std::cout << *j << " ";
    j -= 2; std::cout << *j << " ";
    std::cout << v[1] << std::endl;
    (j < i) ? std::cout << "j < i" : std::cout << "not (j < i)";
    std::cout << std::endl;
    (j > i) ? std::cout << "j > i" : std::cout << "not (j > i)";
    std::cout << std::endl;
    i = j;
    i <= j && j <= i ? std::cout << "i & j equal" :
                                std::cout << "i & j not equal";
    std::cout << std::endl;

    
    return 0;
}

/*
OUTPUT

3 4 3 1 2
j < i
not (j > i)
i & j equal

*/
