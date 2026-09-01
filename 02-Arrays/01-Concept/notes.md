# Arrays — মৌলিক ধারণা

## ১) Array কী?

Array হলো একই ধরনের data-এর একটি ধারাবাহিক collection।

এটি memory-এ consecutive space-এ store করা হয়।

### উদাহরণ
```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

এখানে 5টি integer data one after another memory-এ রাখা আছে।

### Array-এর সাধারণ গঠন
```cpp
int arr[5];
arr[0] = 10;
arr[1] = 20;
```

---

## ২) Array-এর বৈশিষ্ট্য

- fixed size
- same type data
- index-based access
- contiguous memory
- random access

### সুবিধা
- access খুব fast
- memory predictable
- traversal easy
- indexing-based logic simple

### সীমাবদ্ধতা
- insertion/deletion costly
- resizing problem
- fixed length

---

## ৩) Indexing

Array-এর প্রতিটি element-এর একটি index থাকে।

```cpp
arr[0] = 10; // first element
arr[1] = 20; // second element
arr[4] = 50; // last element
```

C++-এ index 0-based।

### Why important?
কারণ অনেক problem-এ index manipulation দিয়ে solution করা হয়।

---

## ৪) Array access complexity

```cpp
arr[i]
```

এটি direct memory access, তাই complexity O(1)।

### কারণ
array element ঠিক index দিয়ে পাওয়া যায়, loop walk না করে।

---

## ৫) Traversal

Array traversal মানে array-এর সব element একবারে দেখা।

```cpp
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
```

### Complexity
- Time: O(n)
- Space: O(1)

কারণ n elements visit করতে হচ্ছে।

---

## ৬) Insertion

Array-এ insert করলে উপাদান shift হতে পারে।

### Example
```cpp
int arr[5] = {1, 2, 4, 5};
```

এখানে 3 insert করতে চাইলে 4, 5-এর পরের positions shift হবে।

### Complexity
- Best case: O(1)
- Worst case: O(n)

কারণ middle/ beginning-এ insert করলে সব elements shift হতে পারে।

---

## ৭) Deletion

Delete-ও array-এ often shifting লাগে।

```cpp
arr[2] = arr[3];
```

এভাবে data move করে।

### Complexity
- Generally O(n)

---

## ৮) Search

### Linear Search
```cpp
for (int i = 0; i < n; i++) {
    if (arr[i] == target) return i;
}
```

### Complexity
- Time: O(n)
- Space: O(1)

### Binary Search
Sorted array-এ binary search ব্যবহার করা হয়।

```cpp
int left = 0, right = n - 1;
while (left <= right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) return mid;
    else if (arr[mid] < target) left = mid + 1;
    else right = mid - 1;
}
```

### Complexity
- Time: O(log n)
- Space: O(1)

---

## ৯) Prefix Sum

Prefix sum হলো cumulative sum array।

### Example
```cpp
arr = [2, 4, 6, 8]
prefix = [2, 6, 12, 20]
```

### Formula
```cpp
prefix[i] = arr[0] + arr[1] + ... + arr[i];
```

### Why useful?
Subarray sum query করতে এটি খুব fast।

```cpp
sum(l..r) = prefix[r] - prefix[l-1]
```

---

## ১০) Two Pointers

Array-এ দুইটি pointer ব্যবহার করে solution করা হয়।

### Common use
- pair sum
- palindrome check
- reverse array
- remove duplicates
- two-sum variant

### Benefit
- O(n) complexity
- extra memory low

---

## ১১) Sliding Window

Array-এ window move করে কাজ করা হয়।

### Example
- maximum sum of subarray of size k
- longest subarray satisfying condition
- minimum window problem

### Idea
- window expand
- condition invalid হলে shrink
- valid হলে answer update

---

## ১২) Array problems examples

- maximum element
- minimum element
- reverse array
- rotate array
- pair sum
- subarray sum
- duplicate removal
- sorted array check

---

## ১৩) Interview note

Array হলো DSA-এর ভিত্তি।

অনেক advanced topic-এ array patterns ব্যবহার হয়, যেমন:
- two pointers
- prefix sum
- sliding window
- binary search
- hashing

সুতরাং array concept ঠিকভাবে বুঝতে না পারলে অন্য topics-ও কঠিন হয়ে পড়ে।

---

## ১৪) সংক্ষিপ্ত সারাংশ

- array হলো same-type data collection
- index-based access
- direct access => O(1)
- traversal => O(n)
- insertion/deletion => O(n)
- search => O(n) or O(log n)
- many advanced patterns are built on arrays

> Array শেখা মানেই DSA-এর foundation শক্তিশালী করা।
