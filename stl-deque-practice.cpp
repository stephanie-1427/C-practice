#include <iostream>
#include <algorithm>
#include <deque>

int main() {
    std::deque<int> a_deque;
    a_deque.push_back(0);
    a_deque.push_back(1);
    a_deque.push_back(2);
    a_deque.push_back(3);
    a_deque.push_back(4);

    std::transform(a_deque.begin(), a_deque.end(), a_deque.begin(), [](int x){return x * 3;});

    for (auto item: a_deque) {
        std::cout << item << " ";
    }

    return 0;
}
