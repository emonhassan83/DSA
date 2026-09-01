# Linked List — মৌলিক ধারণা

## ১) Linked List কী?

Linked List হলো এমন একটি linear data structure যেখানে nodeগুলো linked/connected থাকে।

প্রতিটি node-এ data এবং next pointer থাকে।

```cpp
struct Node {
    int data;
    Node* next;
};
```

---

## ২) Array vs Linked List

### Array
- index-based access
- consecutive memory
- random access fast
- insertion/deletion costly

### Linked List
- node-based structure
- dynamic memory allocation
- insertion/deletion easy
- random access slow

---

## ৩) Types of linked list

### ১. Singly Linked List
প্রতিটি node শুধু next pointer ধরে রাখে।

### ২. Doubly Linked List
প্রতিটি node-এ next এবং prev দুইটি pointer থাকে।

### ৩. Circular Linked List
শেষ node-এ next head-কে নির্দেশ করে।

---

## ৪) Singly linked list structure

```cpp
struct Node {
    int data;
    Node* next;
};
```

### Example
```text
head -> 10 -> 20 -> 30 -> NULL
```

---

## ৫) Basic operations

### Insert at head
```cpp
Node* newNode = new Node{value, head};
head = newNode;
```

### Insert at tail
- traverse to last node
- assign next to new node

### Delete node
- previous node-এ next update করে

### Traverse
```cpp
for (Node* cur = head; cur != NULL; cur = cur->next) {
    cout << cur->data << " ";
}
```

---

## ৬) Why linked list is useful?

- dynamic size
- insertion/deletion at middle easier than array
- stack/queue implementation uses it often

---

## ৭) Complexity

### Singly linked list
- insert at head: O(1)
- insert at tail: O(n)
- search: O(n)
- delete by value: O(n)
- traversal: O(n)

### Space
- O(n) total

---

## ৮) Common problems

- reverse linked list
- find middle node
- detect cycle
- merge two sorted lists
- remove nth node
- reverse in k groups

---

## ৯) Fast-slow pointers

Linked list-এ fast-slow pointer very useful.

```cpp
Node* slow = head;
Node* fast = head;
while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
}
```

### Uses
- middle node detection
- cycle detection
- palindrome linked list

---

## ১০) Interview note

Linked list problem solving revolves around pointer manipulation.

Key challenge is preserving correct next links and handling null pointers carefully.

> Linked list is all about pointer discipline.
