# Math Basics for DSA

## ১) Math কী?

DSA-তে math-এর কিছু মৌলিক ধারণা খুব গুরুত্বপূর্ণ।

এগুলো কেবল গণিতের নয়, বরং algorithm optimization-এর জন্যও ব্যবহার হয়।

---

## ২) modulo arithmetic

`%` operator ব্যবহার করে remainder বের করা হয়।

```cpp
int x = 17 % 5; // 2
```

### ব্যবহার
- cyclic pattern
- hashing
- number theory
- modular arithmetic problems

---

## ৩) divisibility

কোনো সংখ্যা x, y দ্বারা বিভাজ্য কিনা তা check করতে পারি।

```cpp
if (x % y == 0) {
    // divisible
}
```

### ব্যবহার
- prime check
- factorization
- divisors counting

---

## ৪) prime numbers

প্রাইম হলো এমন positive integer, যা 1 ও নিজের외 অন্য কোনো divisor রাখে না।

```text
2, 3, 5, 7, 11, 13, ...
```

### prime check algorithm
```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```

---

## ৫) gcd / lcm

### GCD
গরিষ্ঠ সাধারণ divisor

```cpp
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
```

### LCM
সাধারণ সর্বনিম্ন গুণিতক

```cpp
lcm = a / gcd(a, b) * b;
```

---

## ৬) power calculation

```cpp
pow(2, 10)
```

Math-এ exponentiation খুব গুরুত্বপূর্ণ, বিশেষ করে:
- fast exponentiation
- binary exponentiation
- logarithmic time optimization

---

## ৭) factorial

```cpp
n! = n × (n-1) × ... × 1
```

### ব্যবহার
- permutations
- combinations
- probability

---

## ৮) parity

সংখ্যা জোড়/বিজোড় নির্ণয়:

```cpp
if (n % 2 == 0) // even
```

### ব্যবহার
- pairing
- array problems
- bit manipulation basics

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

---

## ১০) math + algorithm

DSA-তে গণিতের ধারণাগুলো algorithm optimization-এ ব্যবহার হয়, যেমন:
- reducing repeated computations
- avoiding brute force
- handling modular constraints

---

## ১১) কেন এটা গুরুত্বপূর্ণ?

অনেক competitive problem-এ math ছাড়া সমাধান করা কঠিন।

বিশেষ করে:
- counting problems
- number theory
- divisors
- sequence problems
- gcd/lcm

---

## ১২) শেষ কথা

মৌলিক গণিতের ধারণা শেখা DSA-র জন্য খুব জরুরি।

আস্তে আস্তে এগুলো শিখলে algorithm problem solve করা অনেক সহজ হয়।
