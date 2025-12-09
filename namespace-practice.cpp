#include <iostream>

namespace mymath {
    int* createArray(int size) {
        int *arr = new int[size];
        return arr;
    }

    void destroyArray(int* arr) {
        delete [] arr;
    }

    void fill(int* arr, int size, int value) {
        for (int i = 0; i < size; ++i) {
            arr[i] = value;
        }
    }
}

int main() {

    // use without using namespace

    int *myArray = mymath::createArray(5);
    mymath::fill(myArray, 5, 3);

    for (int i= 0; i < 5; ++i) {
        std::cout << myArray[i] << " ";
    }

    return 0;
}
