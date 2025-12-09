struct Node {
    int data;
    Node* next;
};

Node* reverse(Node* head) {
    // 1 2 3 4 5 
    // 2 3 4 5 1
    // 3 4 5 2 1
    // 4 5 3 2 1
    // 5 4 3 2 1

    // temp pointer to end of list
    Node* tmp = head;
    while (tmp->next != nullptr) { tmp = tmp->next; }

    // temp pointer to head
    Node *moveToBack = nullptr;

    // while head != end of list
    while (head != tmp) {
        moveToBack = head;

        // set new head to head->next
        head = head->next;
    
        if (tmp->next == nullptr) {
            // insert at end
            moveToBack->next = nullptr;
            tmp->next = moveToBack;
        } else {
            // insert after tmp and before tmp->next
            moveToBack->next = tmp->next;
            tmp->next = moveToBack;
        }

    }

    return head;
}