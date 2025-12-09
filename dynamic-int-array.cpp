class DynamicIntArray {
    private:
        int capacity;
        int array_size;
        int *p;
    
    public:
        // constructors
        DynamicIntArray(int set_capacity) : capacity(set_capacity),
                                            array_size(0),
                                            p(new int[set_capacity]) {}

        // functions
        void push_back(const int& x);
        void pop_back();
        int size();
        int& operator[](const int& index);
};

void DynamicIntArray::push_back(const int& x) {
    // check if it needs to double
    if (array_size == capacity) {
        // double
        int *temp = new int[capacity * 2];

        // copy over elements
        for (int i = 0; i < array_size; ++i) {
            temp[i] = p[i];
        }

        // delete p
        delete [] p;

        // assign objects p to new pointer
        p = temp;
        
        // update capacity
        capacity *= 2;

        // set temp to nullptr
        temp = nullptr;
    }

    // index to insert at = size
    p[array_size] = x;
    ++array_size;
}

void DynamicIntArray::pop_back() {
    // last element = array_size - 1
    p[array_size - 1] = 0;
    --array_size;
}

int DynamicIntArray::size() {
    return array_size;
}

int& DynamicIntArray::operator[](const int& index) {
    return p[index];
}