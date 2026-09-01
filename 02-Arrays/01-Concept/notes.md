# Arrays — মৌলিক ধারণা

## ১) Array কী?

Array হলো একই ধরনের data-এর একটি ধারাবাহিক collection।

উদাহরণ:
```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

এখানে সবগুলো element integer, এবং তারা consecutive memory location-এ সংরক্ষিত থাকে।

---

## ২) Array-এর বৈশিষ্ট্য

- fixed size
- index-based access
- contiguous memory
- random access
- same type data

### সুবিধা
- access খুব fast
- memory predictable
- traversal easy

### সীমাবদ্ধতা
- insertion/deletion cost higher
- resizing problem

---

## ৩) Indexing

Array-এর প্রতিটি element-এর জন্য index থাকে।

```cpp
arr[0] = 10; // first element
arr[1] = 20; // second element
```

Index 0-based indexing সাধারণত C++-এ ব্যবহৃত হয়।

---

## ৪) Array access complexity

```cpp
arr[i]
```

এটি O(1) time complexity রাখে, কারণ direct memory access করা হয়।

---

## ৫) Traversal

Array traversal মানে সব element একবার করে দেখা।

```cpp
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
```

এটি O(n) complexity।

---

## ৬) Insertion

Array-এ insertion করলে কিছু elements shift হতে পারে।

### Example
```cpp
int arr[5] = {1, 2, 4, 5};
```

এখানে 3 insert করতে চাইলে 4, 5 shifted হবে।

### Complexity
- best case: O(1)
- worst case: O(n)

---

## ৭) Deletion

Deletion-এও shifting লাগে।

```cpp
arr[2] = arr[3];
```

### Complexity
- O(n) generally

---

## ৮) Search

### Linear Search
```cpp
for (int i = 0; i < n; i++) {
    if (arr[i] == target) return i;
}
```

- time: O(n)
- space: O(1)

### Binary Search
Sorted array-এ binary search ব্যবহার করা হয়।

- time: O(log n)
- useful for large sorted arrays

---

## ৯) Prefix Sum

Prefix sum হলো cumulative sum array।

```cpp
prefix[0] = arr[0];
for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i-1] + arr[i];
}
```

এটি subarray sum query fast করে।

---

## ১০) Two Pointers

Array-এ দুইটি pointer ব্যবহার করে solve করা হয়।

### Common use
- sum pairs
- palindrome check
- reverse array
- sorted array problems

---

## ১১) Sliding Window

Array-এ window move করে problem solve করা হয়।

### Example
- maximum sum subarray of size k
- longest substring with k unique chars

---

## ১২) Array problems examples

- Find maximum element
- Find minimum element
- Reverse array
- Remove duplicate values
- Find pair sum
- Find subarray sum

---

## ১৩) Interview note

Array হলো DSA-এর সবচেয়ে গুরুত্বপূর্ণ ভিত্তি।

অনেক harder problem array pattern-এ solve হয়।

সুতরাং array concept ভালোভাবে বুঝতে হবে।

---

## ১৪) সংক্ষিপ্ত সারাংশ

- array হলো same-type data collection
- index-based access
- O(1) random access
- insertion/deletion cost O(n)
- traversal O(n)
- বিভিন্ন problem patterns array-এ বসে

> Array শেখা মানেই DSA-এর foundation শক্তিশালী করা।
