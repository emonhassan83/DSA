# Two Pointers

## ১) Two Pointers কী?

Array, string, বা sorted sequence-এ দুইটি pointer ব্যবহার করে solution খোঁজা হয়।

একটি pointer সাধারণত left বা start position-এ থাকে, আরেকটি right বা end position-এ থাকে।

### মূল ধারণা
দুইটি pointer একসাথে move করে এবং condition check করে।

এটি অনেক সময় O(n) complexity-এ problem solve করে।

---

## ২) কখন ব্যবহার করব?

Two pointers সাধারণত তখনই দরকার হয়, যখন:
- array sorted থাকে
- pair বা triplet খুঁজতে হয়
- palindrome/ reverse/ symmetry check করতে হয়
- duplicates remove করতে হয়
- subarray condition check করতে হয়

---

## ৩) সাধারণ pattern

### a) left-right pointer
```cpp
int left = 0, right = n - 1;
while (left < right) {
    // process data
    left++;
    right--;
}
```

### b) fast-slow pointer
```cpp
int slow = 0, fast = 0;
while (fast < n) {
    // process
    fast++;
    slow++;
}
```

---

## ৪) Common problem types

- sorted pair sum
- palindrome check
- reverse array
- remove duplicates
- moving zeroes
- container with most water
- three-sum related patterns

---

## ৫) Example: palindrome check
```cpp
bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }

    return true;
}
```

### কী হচ্ছে?
- left index থেকে শুরু
- right index থেকে শেষ
- প্রতিটি step-এ compare করা হচ্ছে
- এক জোড়া mismatch হলে false

---

## ৬) Complexity

- Time: O(n)
- Space: O(1)

কারণ প্রতিটি element constant number of times access হয়।

---

## ৭) Advantages

- extra memory লাগে কম
- time complexity often optimal
- solved efficiently in single pass

---

## ৮) Important idea

Two pointers visualization খুব গুরুত্বপূর্ণ:
- কিছুক্ষেত্রে left-right
- কিছুক্ষেত্রে slow-fast
- কিছুক্ষেত্রে start/end from opposite direction

### সর্বাধিক গুরুত্বপূর্ণ rule
Pointer movement logic ঠিক রাখা, otherwise wrong pattern will be followed.

---

## ৯) Interview note

> Two pointers is one of the most useful array patterns because it reduces brute force from O(n^2) to O(n) in many problems.

সুতরাং এই pattern বুঝলে অনেক interview problem সহজ হয়ে যায়।
