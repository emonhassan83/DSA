#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    cout << "Linked list: ";
    for (Node* cur = head; cur != nullptr; cur = cur->next) {
        cout << cur->data << " ";
    }
    cout << "\n";

    return 0;
}
