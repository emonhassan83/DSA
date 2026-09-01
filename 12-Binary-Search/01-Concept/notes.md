# Binary Search — মৌলিক ধারণা

## ১) Binary Search কী?

Binary search হলো sorted array-এ efficient search করার একটি পদ্ধতি।

### Idea
- middle index compute করা হয়
- target compare করা হয়
- search space অর্ধেক করে ফেলি

---

## ২) Why it is fast?

Linear search-এ O(n), কিন্তু binary search-এ O(log n)।

### Example
```text
n = 1024
log2(1024) = 10
```

এটাই binary search-এর শক্তি।

---

## ৩) Implementation
```cpp
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}
```

---

## ৪) Key rules

- array sorted হতে হবে
- if mid < target, move right
- if mid > target, move left
- boundary update carefully করতে হবে

---

## ৫) Complexity

- Time: O(log n)
- Space: O(1)

---

## ৬) Common types

- basic search
- first/last occurrence
- lower bound
- upper bound
- search on answer
- rotated sorted array

---

## ৭) Interview note

Binary search is elegant but tricky around boundaries.

> The main risk is wrong left/right updates, which cause infinite loop or wrong answers.
