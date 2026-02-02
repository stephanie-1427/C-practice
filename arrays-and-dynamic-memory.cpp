#include <iostream>

int** createZeroMatrix(const int& rows, const int& cols) {
    // initialize a pointer on stack (same type as return value)
    int **p;

    // declare an array of int pointers of size rows on heap
    p = new int*[rows];

    // iterate through that array, assigning each
    // row pointer to an array of size cols on heap
    for (int i = 0; i < rows; ++i) {
        p[i] = new int[cols] {0};
    }

    return p;
}


void deleteMatrix(int **matrix, const int& rows) {
    // iterate through each row
    for (int i = 0; i < rows; ++i) {
        // delete the pointer
        delete [] matrix[i];
    }
    
    // delete the array of pointers
    delete [] matrix;
}


int* createZeroMatrixMixed(const int& rows, const int& cols) {
    // create an array of pointers on stack
    int *p[rows];

    // for each pointer in the array of pointers
    for (int i = 0; i < rows; ++i) {
        // initialize an array of size cols on heap
        p[i] = new int[cols] {0};
    }

    // return the array of pointers
    return *p;
}


void deleteMatrixMixed(int **matrix, const int& rows) {
    // iterate through the array of pointers
    for (int i = 0; i < rows; ++i) {
        // delete each pointer (memory on heap)
        delete [] matrix[i];
    }
}

