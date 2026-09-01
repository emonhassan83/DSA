# Math Basics for DSA

## ১) Math কেন DSA-তে গুরুত্বপূর্ণ?

DSA-তে অনেক সমস্যা arithmetic, number theory, counting, modular arithmetic, digit operation-এর উপর ভিত্তি করে গড়ে ওঠে।

গণিতের ধারণা না বুঝলে অনেক problem logic-wise কঠিন মনে হয়।

তাই DSA শুরু করার আগে math basics একটু ভালোভাবে শিখে নেওয়া খুব জরুরি।

---

## ২) modulo arithmetic

`%` operator ব্যবহার করে remainder বের করা হয়।

```cpp
int x = 17 % 5; // 2
```

### কেন ব্যবহার হয়?
- cyclic behavior
- repeated pattern
- hashing
- number theory
- modular arithmetic problems

### উদাহরণ
```cpp
int n = 10;
int r = n % 3; // 1
```

### সমস্যা
চলুন, কোনো number 7-এর সাথে 3 mod করতে গেলে 1 থাকে।

এমন things অনেক problems-এ crucial।

---

## ৩) divisibility

কোনো সংখ্যা x, y দ্বারা বিভাজ্য কিনা তা check করতে `x % y == 0` ব্যবহার করা হয়।

```cpp
if (x % y == 0) {
    cout << "Divisible\n";
}
```

### ব্যবহার
- prime check
- factorization
- counting divisors
- multiple-based conditions

---

## ৪) prime numbers

প্রাইম হলো এমন positive integer, যা 1 এবং নিজের ছাড়া অন্য কোনো divisor রাখে না।

```text
2, 3, 5, 7, 11, 13, ...
```

### Prime check উদাহরণ
```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```

### কেন i * i <= n?
কারণ যদি n-এর divisor থাকে, তাহলে তার একটি অংশ sqrt(n)-এর আগে থাকবে।

এটা optimize করে runtime কমায়।

---

## ৫) GCD / LCM

### GCD (Greatest Common Divisor)
দুটি সংখ্যার মধ্যে সর্ববৃহৎ সাধারণ divisor।

```cpp
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
```

### LCM (Least Common Multiple)
দুটি সংখ্যার সর্বনিম্ম সাধারণ গুণিতক।

```cpp
int lcm = a / gcd(a, b) * b;
```

### ব্যবহার
- fraction reduction
- synchronization problems
- cycle problems

---

## ৬) power calculation

```cpp
pow(2, 10)
```

### 중요 কারণ
- exponentiation
- fast exponentiation
- binary exponentiation
- logarithmic time optimization

### Example
```cpp
int power(int base, int exp) {
    int ans = 1;
    while (exp > 0) {
        if (exp % 2 == 1) ans *= base;
        base *= base;
        exp /= 2;
    }
    return ans;
}
```

এটি O(log n) time complexity রাখে।

---

## ৭) factorial

```cpp
n! = n × (n-1) × ... × 1
```

### উদাহরণ
```text
5! = 5 × 4 × 3 × 2 × 1 = 120
```

### ব্যবহার
- permutations
- combinations
- probability
- combinatorics

---

## ৮) parity

জোড়/বিজোড় চেক করা:

```cpp
if (n % 2 == 0) {
    cout << "Even\n";
} else {
    cout << "Odd\n";
}
```

### ব্যবহার
- array pairing
- bit manipulation
- pattern checks

---

## ৯) digit operations

একটি সংখ্যার অঙ্ক বের করা, যোগ করা, বিপরীত করা ইত্যাদি গণিতের অংশ।

```cpp
int n = 123;
int sum = (n % 10) + (n / 10 % 10) + (n / 100);
```

### ব্যবহার
- palindrome number
- Armstrong number
- digit DP
- number reversal

---

## ১০) math + algorithm = optimization

গণিতের ধারণাগুলো algorithm optimization-এ খুব সাহায্য করে।

### উদাহরণ
- brute force replace করে efficient formula
- repeated work reduce করা
- modular arithmetic ব্যবহার করে overflow-safe calculation

---

## ১১) কেন competitive programming-এ math গুরুত্বপূর্ণ?

অনেক problem-এ math ছাড়া solution সম্ভব হয় না।

### Common topics
- counting problems
- divisors
- sequence generation
- gcd/lcm
- modular arithmetic
- prime numbers

---

## ১২) সংক্ষিপ্ত সারাংশ

- math basics DSA-র foundation
- modulo, gcd, prime, factorial, parity—এসব concept খুব দরকার
- optimization-oriented thinking গড়ে ওঠে math থেকে
- DSA problem solve করার সময় math logic কাজে লাগে

---

## ১৩) চূড়ান্ত কথা

গণিতের মৌলিক ধারণা না জানলে অনেক DSA problem খুব কষ্টকর মনে হবে।

তাই math basics ভালোভাবে বুঝে নিতে হবে, যাতে algorithm শেখার সময় formula ও pattern দ্রুত বুঝতে পারা যায়।

> “DSA-তে math শেখা মানে সমস্যাকে সুন্দরভাবে model করা।”
