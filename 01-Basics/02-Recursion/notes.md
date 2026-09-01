# রিকারশান (Recursion)

## ১) রিকারশান কী?

রিকারশান হলো এমন একটি কৌশল যেখানে একটি function নিজেকে একই ধরনের কাজ করতে আবার কল করে।

এভাবে repetitive task সহজে handle করা যায়।

### সাধারণ গঠন
```cpp
void func(int n) {
    if (n == 0) return; // base case
    cout << n << "\n";
    func(n - 1); // recursive call
}
```

## ২) রিকারশনের মূল উপাদান

### a) Base Case
এটি function-এর stopping condition।

যদি base case না থাকে, function অনির্দিষ্টভাবে চলতে থাকবে এবং stack overflow হবে।

### b) Recursive Call
ফাংশন নিজেই নিজেকে আবার কল করে।

### c) Problem Reduction
প্রতিটি recursive call-এ problem ছোট হতে থাকে।

---

## ৩) রিকারশনের ব্যবহার

- factorial
- fibonacci
- tree traversal
- backtracking
- divide and conquer

---

## ৪) Factorial উদাহরণ
```cpp
int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}
```

### ব্যাখ্যা
- fact(5) = 5 × fact(4)
- fact(4) = 4 × fact(3)
- ...
- fact(1) = 1

---

## ৫) Fibonacci উদাহরণ
```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
```

### সমস্যা
এটি overlapping subproblems-এর কারণে inefficient।

এটি DP-তে optimize করা যায়।

---

## ৬) রিকারশানের সুবিধা

- code concise
- complex problems সহজে model করা যায়
- tree/graph traversal-এ খুব কার্যকর

---

## ৭) রিকারশানের সীমাবদ্ধতা

- stack memory ব্যবহার করে
- recursion depth বেশি হলে crash হতে পারে
- অনেক ক্ষেত্রে iterative solution better

---

## ৮) Complexity

### factorial
- time: O(n)
- space: O(n) (recursive stack)

### fibonacci naive version
- time: O(2^n)
- space: O(n)

---

## ৯) রিকারশান শেখার নীতি

1. base case খুঁজো
2. smaller problem বানাও
3. recursive call ঠিকভাবে দাও
4. return value ঠিকভাবে নির্ধারণ করো

---

## ১০) শেষ কথা

রিকারশান DSA-তে অতি গুরুত্বপূর্ণ।

জটিল problemকে ছোট অংশে ভাগ করতে পারলে recursion অনেক শক্তিশালী হয়।

তবে base case ভুলে গেলে bug নির্মূল করা কঠিন হয়ে যায়।
