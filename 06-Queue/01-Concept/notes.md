# Queue — মৌলিক ধারণা

## ১) Queue কী?

Queue হলো একটি linear data structure যেখানে element insertion এক ends-এ হয়, আর deletion অন্য ends-এ হয়।

এটি FIFO principle অনুসরণ করে:

```text
First In, First Out
```

---

## ২) Queue-এর analogy

- people standing in line
- printer queue
- task scheduling

প্রথম এসে প্রথম বের হয়।

---

## ৩) Operations

### enqueue
rear-এ element add করা

### dequeue
front থেকে element remove করা

### front
front element দেখা

### empty
queue empty কিনা check

### size
element count

---

## ৪) Queue implementation

```cpp
queue<int> q;
q.push(10);
q.push(20);
q.push(30);

cout << q.front(); // 10
q.pop();
```

---

## ৫) Complexity

- enqueue: O(1)
- dequeue: O(1)
- front: O(1)
- size: O(1)

---

## ৬) Use cases

- BFS traversal
- CPU scheduling
- message queue
- printer spooler
- level-order traversal

---

## ৭) Queue vs Stack

### Stack
- LIFO
- top end

### Queue
- FIFO
- front and rear

---

## ৮) Common problems

- BFS
- level-order traversal
- sliding window with queue
- process scheduling
- shortest path in unweighted graph

---

## ৯) Interview note

Queue problems mostly focus on order management and processing requests in correct sequence.

> Queue is about fairness: the oldest item should be served first.
