# Stack — মৌলিক ধারণা

## ১) Stack কী?

Stack হলো একটি linear data structure যেখানে element insertion ও deletion একই শেষ (top) থেকে হয়।

এটি LIFO principle অনুসরণ করে:

```text
Last In, First Out
```

---

## ২) Stack-এর real-life analogy

- plates stack
- browser back button
- function call stack

সর্বশেষ placed item প্রথমে বের হয়।

---

## ৩) Operations

### push
top-এ element add করা

### pop
top থেকে element remove করা

### top
top element দেখানো

### empty
stack empty কিনা check করা

### size
stack-এ কত element আছে

---

## ৪) Stack implementation

```cpp
stack<int> st;
st.push(10);
st.push(20);
st.push(30);

cout << st.top(); // 30
st.pop();
```

---

## ৫) Complexity

- push: O(1)
- pop: O(1)
- top: O(1)
- search: O(n)

### Space
- O(n) overall

---

## ৬) Use cases

- expression evaluation
- parentheses matching
- function recursion
- undo/redo
- DFS traversal
- monotonic stack problems

---

## ৭) Common problems

- valid parentheses
- next greater element
- stock span
- min stack
- largest rectangle in histogram

---

## ৮) Why stack matters?

এটি অনেক algorithm-এ core role পালন করে।

বিশেষ করে:
- parsing expressions
- backtracking
- recursion simulation
- monotonic optimization

---

## ৯) Interview note

Stack problems mostly revolve around maintaining a sequence and deciding when to pop.

> In stack, the critical idea is “when to keep and when to remove.”
