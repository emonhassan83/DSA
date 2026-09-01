# জটিলতা (Complexity) — Big O, Time, Space

## ১) জটিলতা কী?

কম্পিউটার বিজ্ঞান ও DSA-তে "জটিলতা" মানে হলো কোনো algorithm কতটা efficiently কাজ করে।

কোনো code লিখলে আমরা সাধারণত দুই ধরনের জটিলতা দেখি:
- Time Complexity: কত দ্রুত কাজ করবে
- Space Complexity: geheugen/মেমরি কতটা নেবে

একটি algorithm ভালো হলে সেটি শুধু দ্রুত নয়, বরং resource-ও efficiently ব্যবহার করে।

---

## ২) কেন জটিলতা জানতে হবে?

যখন program বড় হয়, তখন input size বেড়ে যায়।

উদাহরণ:
- n = 10 → কাজটা অল্প মনে হয়
- n = 10^5 বা 10^7 → একই code অনেক ধীর হতে পারে

সুতরাং, আমরা বুঝতে চাই:
- input size বাড়ালে কোডের performance কীভাবে বদলে যায়
- কোন algorithm বেশি efficient
- interview-এ Big O কীভাবে explain করতে হয়

---

## ৩) Time Complexity কী?

Time complexity প্রকাশ করে algorithm-এর execution time input size-এর সাথে কীভাবে পরিবর্তিত হয়।

এটি সাধারণত Big O notation-এ লেখা হয়।

### উদাহরণ
```cpp
for (int i = 0; i < n; i++) {
    cout << i << "\n";
}
```

এখানে loop n বার চলে।

তাই কাজের complexity হলো:

O(n)

অর্থাৎ input size n বাড়লে execution time linearভাবে বাড়ে।

---

## ৪) Big O notation

Big O notation দ্বারা সবচেয়ে খারাপ/উচ্চ complexity বোঝানো হয়।

### সাধারণ forms
- O(1): constant time
- O(log n): logarithmic
- O(n): linear
- O(n log n): log-linear
- O(n^2): quadratic
- O(2^n): exponential
- O(n!): factorial

### গুরুত্ব
Big O বোঝার মাধ্যমে আমরা compare করতে পারি:

O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(2^n)

---

## ৫) Constant Time — O(1)

যদি কোনো কাজের জন্য input size যতই বাড়ুক না কেন, execution time ধ্রুবক থাকে, তাকে O(1) বলে।

### উদাহরণ
```cpp
int a = 5;
int b = 10;
int sum = a + b;
```

এখানে কাজটি ঠিক একবার হয়।

### বৈশিষ্ট্য
- input size বাড়লে সমস্যা হয় না
- খুব efficient

---

## ৬) Linear Time — O(n)

যখন loop বা traversal input size-এর সমানুপাতিক বার চলে, তখন complexity O(n)।

### উদাহরণ
```cpp
for (int i = 0; i < n; i++) {
    cout << arr[i] << "\n";
}
```

এটি n বার চলবে।

### অর্থ
n = 100 হলে 100 বার কাজ হবে
n = 10000 হলে 10000 বার কাজ হবে

---

## ৭) Quadratic Time — O(n^2)

যখন nested loop থাকে, তখন complexity O(n^2)।

### উদাহরণ
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << i << " " << j << "\n";
    }
}
```

এখানে outer loop n বার, inner loop n বার।

সুতরাং মোট কাজ = n × n = n^2

### ব্যবহার
- brute force
- pair checking
- matrix traversal

---

## ৮) Logarithmic Time — O(log n)

কখনও কখনও algorithm অর্ধেক করে search করে।

ধরা যাক, 1000 element-এর মধ্যে search করার জন্য binary search ব্যবহার করা হয়।

প্রতিটি step-এ size অর্ধেক হয়।

### সূত্র
```text
n -> n/2 -> n/4 -> n/8 -> ...
```

এটি log n complexity তৈরি করে।

### কেন গুরুত্বপূর্ণ?
Binary search, heap, balanced BST-এ এই complexity দেখা যায়।

---

## ৯) O(n log n)

এটি অনেক algorithm-এ দেখা যায়, যেমন:
- merge sort
- quick sort (average case)
- heap sort
- many divide-and-conquer approaches

### ধারণা
- n-এর জন্য কাজের খরচ n
- তার উপর log n বার divide/recombine করা হয়

সুতরাং total = n log n

---

## ১০) Space Complexity কী?

Space complexity বোঝায় algorithm-running-এর সময় কতটুকু memory/space লাগে।

### উদাহরণ
```cpp
int arr[100];
```

এটি 100 integers ধরে রাখে, সুতরাং memory ব্যবহার হয়।

### Space complexity-ও Big O-তে প্রকাশ করা হয়
- O(1): extra space constant
- O(n): extra array/list/dictionary

---

## ১১) Best Case / Average Case / Worst Case

একই algorithm different inputs-এ ভিন্নভাবে কাজ করতে পারে।

### Best case
সবচেয়ে ভালো condition-এ runtime minimum

### Average case
সাধারণ input-এ গড় performance

### Worst case
সবচেয়ে খারাপ condition-এ runtime maximum

### উদাহরণ: Linear Search
- Best case: target first position → O(1)
- Worst case: target last position / not found → O(n)
- Average case: O(n)

---

## ১২) Complexity বোঝার সহজ নিয়ম

### 1. Loop আছে?
- এক loop → O(n)
- nested loop → O(n^2)

### 2. Divide and conquer?
- O(log n) বা O(n log n)

### 3. Array/HashMap ব্যবহার?
- access/search often O(1) average

### 4. Recursive call?
- recursive depth অনুযায়ী complexity বাড়ে

---

## ১৩) Common Comparison

| Algorithm | Time Complexity | Space Complexity |
|---|---:|---:|
| Access array element | O(1) | O(1) |
| Linear search | O(n) | O(1) |
| Binary search | O(log n) | O(1) |
| Bubble sort | O(n^2) | O(1) |
| Merge sort | O(n log n) | O(n) |
| DFS/BFS | O(V + E) | O(V) |

---

## ১৪) কিভাবে interview-এ উত্তর দেবেন?

এভাবে বলতে পারেন:

> এই algorithm-এ প্রতিটি element একবার processed হচ্ছে, তাই time complexity O(n)।

অথবা

> এই code-এ nested loop রয়েছে, ফলে complexity O(n^2)।

অথবা

> আমরা input sizeকে অর্ধেক করে ফেলছি, তাই complexity O(log n)।

---

## ১৫) বাস্তব উদাহরণ

### Example 1: sum of array
```cpp
int sum = 0;
for (int i = 0; i < n; i++) {
    sum += arr[i];
}
```

- loop n times
- time = O(n)
- extra memory = O(1)

### Example 2: nested loop
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << i + j << "\n";
    }
}
```

- total work = n × n
- time = O(n^2)

---

## ১৬) DSA-তে জটিলতার গুরুত্ব

DSA-এর মূল উদ্দেশ্য হলো:
- দ্রুত solution খোঁজা
- memory efficient solution খোঁজা
- চমৎকার algorithm বেছে নেওয়া

একই সমস্যা বিভিন্ন উপায়ে সমাধান করা যায়, কিন্তু performance ভিন্ন হবে।

সুতরাং complexity বোঝা অনেক গুরুত্বপূর্ণ।

---

## ১৭) সংক্ষিপ্ত সারাংশ

- Complexity বোঝায় performance
- Time complexity = execution time
- Space complexity = memory use
- Big O = asymptotic growth rate
- ছোট input-এ difference কম মনে হলেও বড় input-এ তা বিশাল হয়

---

## ১৮) ছোট practice

1. এক loop থাকলে complexity কত?
   - উত্তর: O(n)

2. nested loop থাকলে complexity কত?
   - উত্তর: O(n^2)

3. binary search complexity কত?
   - উত্তর: O(log n)

4. array access complexity কত?
   - উত্তর: O(1)

---

## ১৯) শেষ কথা

Complexity শুধু math না, বরং problem-solving-এর একটা ভাষা।

একজন ভালো DSA learner প্রথমেই এই ভাষা শিখে।

যত ভালো complexity বোঝবে, তত দ্রুত algorithm compare করতে পারবে।

> “জটিলতা বোঝা মানেই algorithm-এর সত্যিকার মূল্য বোঝা।”
