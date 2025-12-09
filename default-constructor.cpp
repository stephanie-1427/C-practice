#include <iostream>

class PieceTime {
    int hr = 0, min = 0, sec = 0;
    
    public:
        void getTime() {
            std::cout << hr << ":" << min << ":" << sec;
        }
};


int main() {
    // compiler builds default constructor
    // if there is no constructor defined
    PieceTime goodTime;
    goodTime.getTime();

    return 0;
}