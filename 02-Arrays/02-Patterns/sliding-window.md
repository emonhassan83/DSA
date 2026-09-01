# Sliding Window

## ১) Sliding Window কী?

Sliding window হলো এমন একটি pattern যেখানে window size ধীরে ধীরে shift করে solution খোঁজা হয়।

### সাধারণ ধারণা
- window start ও end index থাকে
- window expand/contract করা হয়
- condition check করা হয়

---

## ২) কেন দরকার?

অনেক problem-এ subarray বা substring নিয়ে কাজ করতে হয়।

যেমন:
- maximum sum of subarray of size k
- longest substring without repeating characters
- minimum window substring

---

## ৩) সাধারণ logic
```cpp
int left = 0;
for (int right = 0; right < n; right++) {
    // include arr[right] in window
    while (condition is invalid) {
        // remove arr[left]
        left++;
    }
    // process current window
}
```

---

## ৪) Example: maximum sum subarray of size k
```cpp
int maxSumK(vector<int>& arr, int k) {
    int n = arr.size();
    int windowSum = 0;

    for (int i = 0; i < k; i++) windowSum += arr[i];

    int ans = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        ans = max(ans, windowSum);
    }

    return ans;
}
```

---

## ৫) Complexity

- time: O(n)
- space: O(1) (if using only variables)

---

## ৬) Sliding window-এ গুরুত্বপূর্ণ কৌশল

- window maintain রাখা
- condition invalid হলে shrink
- valid হলে answer update

---

## ৭) Interview note

Sliding window অনেকটা dynamic array processing-এর মতো।

এর মানে হলো we do not reprocess entire array repeatedly; we maintain only current window state.

> এটি O(n) complexity-এ অনেক tough problem solve করতে সাহায্য করে।
