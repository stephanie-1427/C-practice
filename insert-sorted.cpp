struct Node {
    int data;
    Node* prev;
    Node* next;
};

void insertSorted(Node*& head, int value) {
    // if list is empty
    if (head == nullptr) {
        head = new Node{value, nullptr, nullptr};
        return;
    }

    // if there is one element in list (head->next == nullptr)
    if (head->next == nullptr) {
        Node* tmp = new Node{value, nullptr, nullptr};

        // 2 cases: value is greater than or equal to element
        if (value >= head->data) {
            // insert at end
            tmp->prev = head;
            head->next = tmp;
        } else { // value is less than element
            // insert at beginning
            tmp->next = head;
            head->prev = tmp;
            head = tmp;
        }

        tmp = nullptr;
        return;
    }

    // list has at least two elements
    Node* tmp = head;
    while(tmp != nullptr) {
        Node* insert = new Node{value, nullptr, nullptr};

        // 3 cases

        // value is smallest
        if (tmp->prev == nullptr && value <= tmp->data) {
            // add to beginning
            tmp->prev = insert;
            insert->next = tmp;
            head = insert;
            break;
        } 

        // value is largest
        if (tmp->next == nullptr && value >= tmp->data) {
            // add to end
            tmp->next = insert;
            insert->prev = tmp;
            break;
        }

        // value is between
        if (value >= tmp->data && value < tmp->next->data) {
            // insert after tmp and before tmp->next
            insert->next = tmp->next;
            insert->prev = tmp;
            tmp->next->prev = insert;
            tmp->next = insert;
            break;
        }

        tmp = tmp->next;
    }
}