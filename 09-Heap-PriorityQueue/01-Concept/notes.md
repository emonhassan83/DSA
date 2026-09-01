# Heap / Priority Queue — মৌলিক ধারণা

## ১) Heap কী?

Heap হলো এমন একটি tree-based data structure যেখানে parent node-এর value child node-এর value-এর তুলনায় সর্বদা ordered থাকে।

### Types
- Min Heap: parent <= children
- Max Heap: parent >= children

---

## ২) Priority Queue

Priority queue এমন queue যেখানে highest priority element first ফেলে।

### Example
```cpp
priority_queue<int> pq; // max heap
priority_queue<int, vector<int>, greater<int>> minPq; // min heap
```

---

## ৩) Why use heap?

- top-k problems
- merge k sorted lists
- scheduling
- Dijkstra algorithm
- median maintenance

---

## ৪) Heap operations

### push
insert value

### pop
remove top element

### top
highest priority element access

---

## ৫) Complexity

- push: O(log n)
- pop: O(log n)
- top: O(1)

---

## ৬) Real-life analogy

Heap priority queue-এর মতো hospital emergency queue যেখানে critical patient first gets attention.

---

## ৭) Common problems

- kth largest element
- kth smallest element
- top k frequent elements
- merge k sorted arrays
- greedy scheduling

---

## ৮) Interview note

Heap is extremely useful when you need fastest access to the most important element while preserving order under insertion/removal.

> Heap is not just a tree—it is a smart way to optimize selection problems.
