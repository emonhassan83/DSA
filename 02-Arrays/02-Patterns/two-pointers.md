# Two Pointers

## ১) Two Pointers কী?

Array বা string-এ দুইটি pointer ব্যবহার করে সমাধান করা হয়।

একটি pointer শুরু থেকে, অন্যটি শেষ থেকে বা একই দিকে কিন্তু আলাদা অবস্থানে চলে।

---

## ২) কেন ব্যবহার করা হয়?

যখন আমাদের pair/condition check করতে হয়, তখন single traversal দিয়ে সব cases cover করা কঠিন হয়।

Two pointers আমাদের দ্রুত সমাধান দেয়।

---

## ৩) সাধারণ pattern

### a) left and right pointer
```cpp
int left = 0, right = n - 1;
while (left < right) {
    // process
    left++;
    right--;
}
```

### b) fast and slow pointer
```cpp
int slow = 0, fast = 0;
while (fast < n) {
    // move
    fast++;
    slow++;
}
```

---

## ৪) Common problem types

- sorted array pair sum
- palindrome check
- reverse array
- remove duplicates
- moving zeroes
- container with most water

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

---

## ৬) Complexity

- time: O(n)
- space: O(1)

---

## ৭) বিশ্লেষণ

Two pointers সাধারণত sorted বা symmetric structure-এ খুব ভালো কাজ করে।

প্রতিটি element কম-বেশি একবার processed হয়, তাই efficiency খুব ভালো।

---

## ৮) Interview note

> Two pointers সাধারণত O(n) বা O(n log n)-এর মধ্যে খুব efficient solution দেয়।

সবচেয়ে গুরুত্বপূর্ণ জিনিস হলো pointer movement logic ঠিক রাখা।
