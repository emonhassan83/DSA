# Hashing — মৌলিক ধারণা

## ১) Hashing কী?

Hashing হলো key-value pair-এ data store করার একটি পদ্ধতি যাতে lookup, insertion, deletion খুব দ্রুত হয়।

এটি মূলত `unordered_map` বা `unordered_set`-এর মাধ্যমে ব্যবহার করা হয়।

---

## ২) Why hashing is important?

Array বা vector-এ search O(n) হতে পারে।

কিন্তু hash table-এ average case lookup O(1) হয়।

এটাই hashing-এর মূল শক্তি।

---

## ৩) Hash map structure

```cpp
unordered_map<string, int> mp;
mp["apple"] = 5;
mp["banana"] = 3;
```

### Use cases
- frequency count
- dictionary mapping
- pair counting
- caching

---

## ৪) Hash set

```cpp
unordered_set<int> st;
st.insert(5);
st.insert(10);
```

### Use cases
- duplicate removal
- membership check
- unique element tracking

---

## ৫) Frequency counting example

```cpp
unordered_map<char, int> freq;
for (char c : s) freq[c]++;
```

এভাবে আমরা string-এ character count বের করতে পারি।

---

## ৬) Complexity

### Average case
- insert: O(1)
- search: O(1)
- delete: O(1)

### Worst case
এটি O(n) হতে পারে, কিন্তু average case-এ খুব ভালো।

---

## ৭) Collision

Hashing-এ দুইটি different keys একই index-এ যেতে পারে।

একে collision বলে।

### Solution
- chaining
- open addressing
- rehashing

---

## ৮) Common problems

- two sum
- frequency count
- anagram check
- subset / duplicate check
- longest substring with unique characters
- group by key

---

## ৯) Interview note

Hashing is often the first optimization after brute force.

> When you need fast lookup by key, think of hashing.
