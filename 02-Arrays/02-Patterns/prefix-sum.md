# Prefix Sum

## ১) Prefix Sum কী?

Prefix sum মানে cumulative sum।

যদি array থাকে:
```cpp
arr = [2, 4, 6, 8]
```

তাহলে prefix sum হবে:
```cpp
prefix = [2, 6, 12, 20]
```

---

## ২) কেন দরকার?

Prefix sum ব্যবহার করে আমরা subarray sum দ্রুত বের করতে পারি।

যেমন:
```text
sum(l..r) = prefix[r] - prefix[l-1]
```

---

## ৩) Implementation
```cpp
vector<int> prefix(n);
prefix[0] = arr[0];
for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1] + arr[i];
}
```

---

## ৪) ব্যবহার

- subarray sum query
- range sum problem
- average calculation
- equilibrium problems

---

## ৫) Example
```cpp
int rangeSum(int l, int r, vector<int>& arr) {
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    return prefix[r] - (l == 0 ? 0 : prefix[l - 1]);
}
```

---

## ৬) Complexity

- building prefix sum: O(n)
- each query: O(1)

---

## ৭) Interview note

Prefix sum অনেক problem-এ fast query করার জন্য ব্যবহৃত হয়।

এটি array patterns-এর একটি গুরুত্বপূর্ণ অংশ।
