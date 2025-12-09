#include <iostream>
#include <vector>

struct dllNode {
    int data;
    dllNode *next;
    dllNode *prev;
};

class DLList {
    private:
        dllNode *head;
        dllNode *tail;
        int size;
    
    public:
        int getSize() { return size; }

        // clear helper function
        void clear() {
            dllNode *tmp = nullptr;
            while (head != nullptr && tail != nullptr) {
                tmp = head;
                head = head->next;

                tmp->next = nullptr;
                tmp->prev = nullptr;

                if (tmp == tail) {
                    tail = nullptr;
                }

                delete tmp;

            }
            size = 0;
        }

        // default constructor
        DLList() : head(nullptr), tail(nullptr), size(0) {};

        // constructor with parameters
        DLList(dllNode* top,
                dllNode* bottom,
                const int& setSize) : head(top), tail(bottom), size(setSize) {};

        // overloaded copy assignment operator
        DLList& operator=(const DLList& rhs) {
            // prevent self assignment
            if (&rhs != this) {
                // empty the contents of this object
                clear();

                // deep copy the contents of rhs object into this object
                dllNode *tmp = rhs.head;
                while (tmp != nullptr) {
                    dllNode *insert = new dllNode{tmp->data, nullptr, nullptr};

                    // first element
                    if (tmp == rhs.head) {
                        head = insert;
                        tail = insert;
                    } else { // append to end
                        insert->prev = tail;
                        tail->next = insert;
                        tail = insert;
                    }

                    tmp = tmp->next;
                }

                size = rhs.size;
            }

            // return *this
            return *this;
        }

        // move constructor
        DLList(DLList&& rhs) {
            // move the contents of rhs object into this object
            head = rhs.head;
            tail = rhs.tail;
            size = rhs.size;

            // reset the contents of rhs
            rhs.head = nullptr;
            rhs.tail = nullptr;
            rhs.size = 0;
        }

        // overloaded move assignment operator
        DLList& operator=(DLList&& rhs) {
            // prevent self assignment
            if (&rhs != this) {
                // delete contents of this object
                clear();

                // copy elements of rhs object into this object
                head = rhs.head;
                tail = rhs.tail;
                size = rhs.size;

                // reset elements of rhs object
                rhs.head = nullptr;
                rhs.tail = nullptr;
                rhs.size = 0;

            }
            // return *this
            return *this;
        }

        // destructor
        ~DLList() { clear(); }
};


int main() {
    
    return 0;
}
