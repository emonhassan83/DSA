#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* root = new Node{10, nullptr, nullptr};
    root->left = new Node{5, nullptr, nullptr};
    root->right = new Node{15, nullptr, nullptr};

    cout << "Preorder: ";
    preorder(root);
    cout << "\n";

    return 0;
}
