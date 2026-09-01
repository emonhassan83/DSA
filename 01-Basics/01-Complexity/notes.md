# জটিলতা (Complexity) — Big O, Time, Space

## ১) জটিলতা কী?

কম্পিউটার বিজ্ঞানে "complexity" মানে কোনো algorithm বা code কতটা efficientভাবে কাজ করে।

কোনো problem solve করার সময় আমরা শুধু output ঠিক দেয়ার উপর মনোযোগ দিই না; আমরা ভাবি:
- এটি কত দ্রুত কাজ করবে?
- কতটুকু memory নিবে?
- input বড় হলে কী হবে?

এ কারণেই DSA-তে complexity খুব গুরুত্বপূর্ণ।

### সাধারণভাবে দুই ধরনের complexity থাকে:
- Time Complexity: কত সময় লাগবে
- Space Complexity: কত memory লাগবে

একটি algorithm ভালো মানেই শুধু দ্রুত নয়; বরং memory-ও efficiently ব্যবহার করলেই সেটি ভালো।

---

## ২) কেন Complexity জানতে হবে?

ধরো, দুইটি solution একই output দিচ্ছে।

- একটি solution O(n)
- অন্যটি O(n^2)

এখন input 10^5 বা 10^6 হলে প্রথম solution অনেক দ্রুত কাজ করবে, আর second solution শ্লথ হয়ে যাবে।

ইন্টারভিউতে interviewer-কে বুঝাতে হয় যে তুমি algorithm selection সম্পর্কে চিন্তা করতে পারো।

### বাস্তব উদাহরণ
```cpp
int sum = 0;
for (int i = 0; i < n; i++) {
    sum += arr[i];
}
```

এখানে একটি loop আছে, তাই O(n)।

কিন্তু যদি nested loop থাকে:
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << i + j << "\n";
    }
}
```

এটি O(n^2)।

---

## ৩) Time Complexity কী?

Time complexity বলতে বোঝায় input size বাড়লে execution time কত দ্রুত বাড়ে।

গুরুত্বপূর্ণ: আমরা exact time in milliseconds বলে দিই না। বরং asymptotic growth rate বলে দিই।

### Big O notation
Big O notation এমনভাবে complexity প্রকাশ করে যে input size very large হলে behavior কী হবে।

### সাধারণ ফর্ম
- O(1): constant time
- O(log n): logarithmic
- O(n): linear
- O(n log n): linearithmic
- O(n^2): quadratic
- O(2^n): exponential
- O(n!): factorial

### তুলনা
```text
O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(2^n)
```

---

## ৪) Constant Time — O(1)

যখন algorithm-এর execution time input size-এর উপর নির্ভর করে না, তখন তাকে O(1) বলা হয়।

### উদাহরণ
```cpp
int a = 5;
int b = 10;
int c = a + b;
```

এখানে a ও b-এর মান যাই হোক, work fixed।

### বৈশিষ্ট্য
- খুব efficient
- input size বাড়লেও time বদলায় না

---

## ৫) Linear Time — O(n)

যখন একবারে একটি loop input size n বার চলে, তখন complexity O(n)।

### উদাহরণ
```cpp
for (int i = 0; i < n; i++) {
    cout << arr[i] << "\n";
}
```

এখানে n elements traverse হয়।

### অর্থ
- n = 10 → 10 কাজ
- n = 1000 → 1000 কাজ

এটাই linear growth।

---

## ৬) Quadratic Time — O(n^2)

যখন nested loop থাকে, তখন complexity সাধারণত O(n^2)।

### উদাহরণ
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << i << " " << j << "\n";
    }
}
```

এখানে মোট কাজ = n × n

### কখন দেখা যায়?
- brute force
- pair generation
- matrix operations
- double nested traversal

### সমস্যা
এ ধরনের solution বড় input-এ খুব ধীর হয়।

---

## ৭) Logarithmic Time — O(log n)

কখনও algorithm input size অর্ধেক করে কমিয়ে ফেলে।

### উদাহরণ
Binary Search-এ প্রতি step-এ search space অর্ধেক হয়।

```text
n -> n/2 -> n/4 -> n/8 -> ...
```

এটা log n complexity তৈরি করে।

### কেন গুরুত্বপূর্ণ?
Binary search, heap operations, balanced BST-এ এই complexity দেখা যায়।

---

## ৮) O(n log n)

এটি এমন complexity যেখানে কাজের মূল অংশ n, কিন্তু তার সাথে log n factor থাকে।

### উদাহরণ
- merge sort
- heap sort
- quick sort (average case)
- many divide-and-conquer algorithms

### ধারণা
- input size n
- divide/recombine করতে log n ঘর
- মোট complexity n × log n

---

## ৯) Space Complexity কী?

Space complexity বোঝায় algorithm চলাকালীন কত memory ব্যবহার করে।

### উদাহরণ
```cpp
int arr[100];
```

এখানে 100 integers memory নিচ্ছে।

### Space complexity-ও Big O-তে প্রকাশ হয়
- O(1): constant extra space
- O(n): array/list/map/queue ব্যবহার

### উদাহরণ
```cpp
vector<int> v(n);
```

এখানে n-sized extra space লাগছে, তাই O(n)।

---

## ১০) Best / Average / Worst case

একই algorithm ভিন্ন input-এ ভিন্নভাবে কাজ করতে পারে।

### Best Case
সবচেয়ে ভালো condition।

### Average Case
সাধারণ input-এ গড় performance।

### Worst Case
সবচেয়ে খারাপ condition।

### Example: Linear Search
```cpp
for (int i = 0; i < n; i++) {
    if (arr[i] == target) return i;
}
```

- Best case: target first index → O(1)
- Worst case: target not found / last index → O(n)
- Average case: O(n)

---

## ১১) Complexity বোঝার সহজ নিয়ম

### 1. loop একটিই আছে
- O(n)

### 2. nested loop আছে
- O(n^2)

### 3. input size অর্ধেক হচ্ছে
- O(log n)

### 4. divide and conquer
- O(n log n)

### 5. recursive call depth বেশি
- recursive stack-based memory increases

---

## ১২) Common Comparison Table

| Operation | Time Complexity | Space Complexity |
|---|---:|---:|
| Array access | O(1) | O(1) |
| Linear search | O(n) | O(1) |
| Binary search | O(log n) | O(1) |
| Bubble sort | O(n^2) | O(1) |
| Merge sort | O(n log n) | O(n) |
| DFS/BFS | O(V + E) | O(V) |

---

## ১৩) Interview-এ complexity বলার ভঙ্গি

### উদাহরণ ১
> এই solution-এ প্রতিটি element একবার traverse করা হচ্ছে, তাই time complexity O(n)।

### উদাহরণ ২
> nested loop আছে, তাই total operations n^2. So time complexity is O(n^2).

### উদাহরণ ৩
> search space প্রতি step-এ অর্ধেক কমছে, তাই complexity O(log n).

---

## ১৪) বাস্তব জীবনের analogy

ধরো, তুমি 1000 বইয়ের মধ্যে বই খুঁজছো:
- linear search: বইটার দিকে একের পর এক যাও
- binary search: মাঝখান থেকে শুরু করে অর্ধেক ভাগে ফেলো

এমনই complexity-এর পার্থক্য।

---

## ১৫) DSA-তে Complexity-এর গুরুত্ব

DSA-তে মূল লক্ষ্য থাকে:
- efficiency maximize করা
- resource use optimize করা
- scalable solution তৈরি করা

একই প্রশ্নের অনেক solution আছে, কিন্তু complexity দেখে আমরা সেরা solution বেছে নিতে পারি।

---

## ১৬) মূল takeaway

- Complexity মানে performance measurement
- Time complexity = execution time growth
- Space complexity = memory growth
- Big O notation = asymptotic comparison
- ছোট input-এ পার্থক্য কম, কিন্তু বড় input-এ বিশাল পার্থক্য দেখা যায়

---

## ১৭) ছোট practice

1. একটি loop থাকলে complexity কত?
   - উত্তর: O(n)

2. nested loop থাকলে complexity কত?
   - উত্তর: O(n^2)

3. binary search complexity কত?
   - উত্তর: O(log n)

4. array access complexity কত?
   - উত্তর: O(1)

5. merge sort complexity কত?
   - উত্তর: O(n log n)

---

## ১৮) শেষ কথা

Complexity শুধু theory নয়; এটি problem-solving-এর ভাষা।

যে লোক complexity বুঝতে পারে, সে algorithm compare করতে পারে, এবং সমস্যার সেরা সমাধান বেছে নিতে পারে।

> “Complexity বোঝা মানেই algorithm-এর সত্যিকার মূল্য বোঝা।”
