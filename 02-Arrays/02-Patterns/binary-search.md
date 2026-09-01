# Binary Search

## ১) Binary Search কী?

Binary search হলো sorted array-এ search করার একটি efficient method।

### মূল ধারণা
- array sorted হতে হবে
- middle element দেখা হয়
- target ধরে compare করা হয়
- search space অর্ধেক করে ফেলা হয়

---

## ২) কেন এটি useful?

Linear search-এ O(n), কিন্তু binary search-এ O(log n)।

এটা অনেক বড় array-এ খুব দ্রুত কাজ করে।

### Example
```text
n = 1,000,000
log2(n) ≈ 20
```

অর্থাৎ 20 step-এ target খুঁজে পাওয়া সম্ভব।

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

## ৪) Logics details

### Case 1: arr[mid] == target
- answer found

### Case 2: arr[mid] < target
- target right side-এ আছে
- left = mid + 1

### Case 3: arr[mid] > target
- target left side-এ আছে
- right = mid - 1

---

## ৫) Complexity

- Time: O(log n)
- Space: O(1)

### Why log n?
প্রতিটি step-এ array size অর্ধেক হয়।

---

## ৬) When to use it?

- sorted array
- search on answer
- lower bound / upper bound
- rotated sorted array
- monotonic function problems

---

## ৭) Common pitfalls

- array sorted না হলে binary search কাজ করবে না
- left/right boundary ভুল হলে infinite loop হতে পারে
- mid calculation carefully করতে হয়

### Safe formula
```cpp
int mid = left + (right - left) / 2;
```

এটি overflow problem এড়ায়।

---

## ৮) Interview note

Binary search conceptually simple, but boundary conditions are tricky.

> সবচেয়ে গুরুত্বপূর্ণ জিনিস হলো left/right update ঠিক রাখা।

এই pattern বোঝা গেলে many DSA problems very fast solve করা যায়।
