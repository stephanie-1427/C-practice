#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};

    auto evens = std::remove_if(vec.begin(), vec.end(),
                                [](int x){ return x % 2 == 0; });
    
    vec.erase(evens, vec.end());
    
    for (auto item : vec) {
        std::cout << item << " ";
    }

    return 0;
}
