# Strings — মৌলিক ধারণা

## ১) String কী?

String হলো characterগুলোর একটি sequence।

C++-এ string সাধারণত `string` datatype-এ store করা হয়।

```cpp
string s = "hello";
```

String-এ প্রতিটি character index-based access করা যায়:

```cpp
cout << s[0]; // h
```

---

## ২) String-এর বৈশিষ্ট্য

- immutable in some languages, but in C++ it can be modified
- character-based traversal
- indexing works like array
- substring, concatenation, comparison করা যায়
- অনেক algorithm string pattern-এ solve হয়

---

## ৩) String basics

### Declaration
```cpp
string s = "Phitron";
```

### Length
```cpp
int len = s.size();
```

### Access
```cpp
char ch = s[2];
```

### Iteration
```cpp
for (char c : s) {
    cout << c << " ";
}
```

---

## ৪) String manipulation

### Concatenation
```cpp
string a = "Hello";
string b = "World";
string c = a + " " + b;
```

### Compare
```cpp
if (a == b) {
    // same
}
```

### Reverse
```cpp
reverse(s.begin(), s.end());
```

---

## ৫) Substring

String-এর কোনো অংশ cut করে নেওয়া যায়।

```cpp
string sub = s.substr(1, 4); // from index 1, length 4
```

### Importance
- pattern matching
- palindrome check
- subsequence problems

---

## ৬) Frequency counting in strings

String-এ character frequency count খুব গুরুত্বপূর্ণ।

```cpp
map<char, int> cnt;
for (char c : s) cnt[c]++;
```

### Uses
- anagram checks
- duplicate character detection
- counting vowels/consonants

---

## ৭) Palindrome

Palindrome মানে string forward and backward একই থাকে।

```cpp
"madam"
"racecar"
```

### Method
- left/right pointer compare
- if mismatch => not palindrome

---

## ৮) String patterns in DSA

### Common patterns
- two pointers
- sliding window
- prefix sum (for character count in ranges)
- hash map / frequency map
- trie (advanced)

---

## ৯) Common string problems

- reverse string
- check palindrome
- count vowels
- find longest repeating substring
- find unique characters
- anagram check
- longest substring without repeating characters

---

## ১০) Time complexity

### Basic operations
- length: O(1)
- access by index: O(1)
- traversal: O(n)
- substring creation: O(n)

### Interview tip
String problems generally resolve around:
- scanning once
- counting characters
- comparing ends
- using sliding window

---

## ১১) কিভাবে String problems solve করব?

1. input pattern বুঝো
2. character frequency মনে রাখো
3. 필요 হলে two pointers ব্যবহার করো
4. substring/window condition পরীক্ষা করো
5. complexity compute করো

---

## ১২) শেষ কথা

String DSA-তে খুব গুরুত্বপূর্ণ topic।

কিছু সমস্যা খুব সহজ মনে হলেও hidden edge cases থাকে, যেমন:
- empty string
- uppercase/lowercase mismatch
- spaces and punctuation
- repeated characters

> String problems usually depend on pattern recognition and efficient scanning.
