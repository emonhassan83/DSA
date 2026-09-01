# Binary Search

## ১) Binary Search কী?

Binary search হলো sorted array-এ search করার একটি efficient method।

---

## ২) মূল ধারণা

- mid index বের করো
- target mid-element-এর সাথে তুলনা করো
- target যদি mid-এর চেয়ে বড় হয়, right = mid + 1
- target যদি mid-এর চেয়ে ছোট হয়, left = mid - 1

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

## ৪) Complexity

- time: O(log n)
- space: O(1)

---

## ৫) যখন ব্যবহার করবেন?

- sorted array
- search on answer
- lower bound / upper bound
- rotated sorted array

---

## ৬) Interview note

Binary search জিনিসটা conceptually simple, কিন্তু boundary condition (left, right, mid updates) ঠিক রাখা খুব গুরুত্বপূর্ণ।

> সঠিকly boundary manage করলে binary search খুব reliable হয়ে ওঠে।
