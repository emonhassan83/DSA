# Tree — মৌলিক ধারণা

## ১) Tree কী?

Tree হলো hierarchical data structure যেখানে nodeগুলো parent-child relationship-এ থাকে।

### Structure
```text
       10
      /  \
     5    15
    / \     \
   2   7    20
```

---

## ২) Tree-এর মূল উপাদান

### Node
tree-এর প্রতিটি unit

### Root
topmost node

### Parent and Child
parent node-এর নিচে child node থাকে

### Leaf
child নেই এমন node

### Edge
nodeগুলোর সংযোগ

### Height / Depth
tree-এর vertical level

---

## ৩) Binary Tree

Binary tree-এ প্রতিটি node-তে সর্বোচ্চ 2টি child থাকে।

```cpp
struct Node {
    int data;
    Node* left;
    Node* right;
};
```

---

## ৪) Binary Search Tree (BST)

BST-এ left subtree-এ ছোট, right subtree-এ বড় value থাকে।

```text
      10
     /  \
    5    15
   / \     \
  2   7    20
```

### Property
- left < root
- right > root

---

## ৫) Tree traversal

### Preorder
root -> left -> right

### Inorder
left -> root -> right

### Postorder
left -> right -> root

### Level Order
breadth-wise traversal (BFS)

---

## ৬) Example traversal
```cpp
void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
```

---

## ৭) Why trees matter?

Trees are used in:
- file systems
- database indexing
- expression parsing
- priority queues
- hierarchical data representation

---

## ৮) Complexity

### Traversal
- O(n) for all nodes

### Search in BST
- average: O(log n)
- worst: O(n)

---

## ৯) Common problems

- height of tree
- diameter
- lowest common ancestor
- level-order traversal
- subtree check
- balanced tree

---

## ১০) Interview note

Tree problems usually require recursive thinking and careful handling of null nodes.

> In tree questions, recursion is often the cleanest solution.
