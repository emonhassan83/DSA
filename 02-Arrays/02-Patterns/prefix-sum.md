# Prefix Sum

## ১) Prefix Sum কী?

Prefix sum মানে cumulative sum।

যদি array থাকে:
```cpp
arr = [2, 4, 6, 8]
```

তাহলে prefix sum হবে:
```cpp
prefix = [2, 6, 12, 20]
```

### Formula
```cpp
prefix[i] = arr[0] + arr[1] + ... + arr[i]
```

---

## ২) কেন দরকার?

অনেক problem-এ subarray sum, range sum, cumulative value বের করতে হয়।

এমন সময় prefix sum খুবই উপকারী।

### Example
```text
sum of arr[2..4] = prefix[4] - prefix[1]
```

এভাবে repeated queries O(1) time-এ করা যায়।

---

## ৩) Implementation
```cpp
vector<int> prefix(n);
prefix[0] = arr[0];
for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1] + arr[i];
}
```

### Why useful?
এখন আমরা যেকোনো subarray sum খুব দ্রুত বের করতে পারব।

---

## ৪) Formula for range sum
```cpp
int rangeSum(int l, int r, vector<int>& arr) {
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    return prefix[r] - (l == 0 ? 0 : prefix[l - 1]);
}
```

### Example
```text
arr = [1, 2, 3, 4, 5]
range 1..3 => 2 + 3 + 4 = 9
```

---

## ৫) ব্যবহার

- subarray sum query
- range sum calculation
- average calculation
- equilibrium problems
- frequency-based cumulative checks

---

## ৬) Complexity

- build prefix sum: O(n)
- each query: O(1)

### Benefit
এভাবে repeated queries খুব efficiently solve করা যায়।

---

## ৭) Interview note

Prefix sum is a classic array optimization technique.

যদি problem-এ many queries or subarray sum related condition থাকে, prefix sum almost always comes into mind.
