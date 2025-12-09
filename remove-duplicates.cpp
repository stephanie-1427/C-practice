#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> vec{10, 10, 20, 30, 30};

    for (auto i = vec.begin(); i != vec.end(); ++i) {
        for (auto j = i + 1; j != vec.end(); ) {
            if (*i == *j) {
                j = vec.erase(j);
            } else {
                ++j;
            }
        }
    }

    for (auto item : vec) {
        std::cout << item << " ";
    }
}
