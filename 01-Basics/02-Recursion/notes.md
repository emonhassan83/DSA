# রিকারশান (Recursion)

## ১) রিকারশান কী?

রিকারশান হলো এমন একটি কৌশল যেখানে একটি function নিজেই নিজেকে আবার কল করে।

এটি একটি problemকে ছোট ছোট অংশে ভেঙ্গে সমাধান করার পদ্ধতি।

প্রতিটি recursive call-এ একই ধরনের কাজ কিন্তু smaller input নিয়ে করা হয়।

### সাধারণ কাঠামো
```cpp
void func(int n) {
    if (n == 0) return; // base case
    cout << n << "\n";
    func(n - 1); // recursive call
}
```

### ব্যাখ্যা
- `if (n == 0)` → base case
- `func(n - 1)` → recursive call
- Problem size প্রতিবার ছোট হয়ে যাচ্ছে

---

## ২) রিকারশনের মূল উপাদান

### a) Base Case
এটি stopping condition, যেখানে recursion বন্ধ হয়।

যদি base case না থাকে, function অনন্তকাল চলতে থাকবে এবং stack overflow হবে।

### b) Recursive Case
এখানেই function নিজেকে আবার কল করে।

### c) Problem Reduction
প্রতিটি step-এ problem ছোট হয়ে যায় যাতে একসময় base case-এ পৌঁছে যায়।

---

## ৩) কেন recursion দরকার?

কিছু problem natural recursive structure আছে, যেমন:
- tree traversal
- graph traversal
- backtracking
- divide and conquer
- factorial
- fibonacci

এগুলো iterative solution-এও করা যায়, কিন্তু recursion অনেক সুন্দর ও readable হতে পারে।

---

## ৪) Factorial উদাহরণ
```cpp
int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}
```

### কী হচ্ছে?
```text
fact(5) = 5 * fact(4)
fact(4) = 4 * fact(3)
fact(3) = 3 * fact(2)
fact(2) = 2 * fact(1)
fact(1) = 1
```

ফলে:
```text
5 * 4 * 3 * 2 * 1 = 120
```

### Complexity
- Time: O(n)
- Space: O(n) (call stack)

---

## ৫) Fibonacci উদাহরণ
```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
```

### Flow
```text
fib(5)
= fib(4) + fib(3)
= (fib(3)+fib(2)) + (fib(2)+fib(1))
```

### সমস্যা
এটি overlap subproblems তৈরি করে।

একই মান বারবার recompute হয়, তাই performance খারাপ হয়।

### Complexity (naive)
- Time: O(2^n)
- Space: O(n)

এটি DP-এ optimize করা হয়।

---

## ৬) Recursive Call Stack

প্রতিটি function call stack-এ জমা হয়।

```cpp
void func(int n) {
    if (n == 0) return;
    func(n - 1);
}
```

যখন `func(5)` কল হয়, stack এর ভেতরে অনেক activation record জমা হয়।

শেষে base case-এ পৌঁছে return শুরু হয়।

### Stack মনে রাখো
- recursion depth যত বেশি, stack memory তত বেশি লাগে
- খুব বেশি depth হলে stack overflow হতে পারে

---

## ৭) রিকারশানের সুবিধা

- কোড ছোট ও readable হয়
- complex problems সহজে model করা যায়
- tree / graph traversal-এ খুব কার্যকর
- backtracking খুব সহজে করা যায়

---

## ৮) রিকারশানের সীমাবদ্ধতা

- stack memory ব্যবহার করে
- deep recursion হলে performance কমে যায়
- infinite recursion ঝুঁকি থাকে
-บาง cases iterative approach more efficient

---

## ৯) Recursive vs Iterative

### Recursive
```cpp
int fact(int n) {
    if (n == 1) return 1;
    return n * fact(n - 1);
}
```

### Iterative
```cpp
int fact(int n) {
    int ans = 1;
    for (int i = 2; i <= n; i++) {
        ans *= i;
    }
    return ans;
}
```

### তুলনা
- recursion: conceptually elegant, but stack overhead
- iterative: often faster and memory-efficient

---

## ১০) রিকারশান শেখার মূল নীতি

1. base case ঠিক রাখো
2. smaller problem তৈরি করো
3. recursive call-এ problem size কমাও
4. return value ঠিকভাবে সেট করো
5. infinite loop না হয় সেদিকে খেয়াল রাখো

---

## ১১) Common mistakes

### 1. Base case ভুল
উদাহরণ:
```cpp
void func(int n) {
    func(n - 1);
}
```

এখানে base case নেই, তাই infinite recursion।

### 2. Problem size কম না হওয়া
যদি n একই থাকে, recursion শেষ হবে না।

### 3. Return value ভুল
ফাংশন থেকে ঠিক value return না করলে wrong output আসবে।

---

## ১২) Interview-এ recursion সম্পর্কে কী বলতে পারবে?

> Recursion is a technique where a function calls itself on a smaller subproblem until it reaches a base case. It helps solve problems like tree traversal, factorial, backtracking, and divide-and-conquer efficiently when the structure is naturally recursive.

---

## ১৩) সংক্ষিপ্ত সারাংশ

- recursion = self-calling function
- base case অত্যন্ত গুরুত্বপূর্ণ
- recursive call-এ problem size কমাতে হয়
- stack memory ব্যবহার করে
- অনেক DSA problem recursion-এ সুন্দরভাবে solve হয়

---

## ১৪) চূড়ান্ত কথা

রিকারশান DSA-র গুরুত্বপূর্ণ একটি ভিত্তি।

দেখা যাবে অনেক কঠিন problemও recursive thinking দিয়ে সহজ হয়ে যায়।

তবে base case ও problem reduction ঠিক না হলে recursion ভুল পথে যেতে পারে।

> “Recursion-এর শক্তি আছে, কিন্তু base case-ই সেট করে দেয় সমাধানের সঠিক পথ।”
