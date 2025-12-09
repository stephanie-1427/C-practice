#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec{3, 4, 0, -1, -2};
    
    int startidx = 0, endidx = 3;
    
    vec.erase(vec.begin() + startidx, vec.begin() + endidx);
    
    for (auto item: vec) {
        std::cout << item << " "; // -1 -2
    }
    
    return 0;
}