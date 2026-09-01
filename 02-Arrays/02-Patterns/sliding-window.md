# Sliding Window

## ১) Sliding Window কী?

Sliding window হলো এমন একটি pattern যেখানে আমরা একটি window (subarray/subsequence) ধরে রাখি এবং সেটি ধীরে ধীরে move করে answer খুঁজি।

### মূল ধারণা
- left ও right pointer ব্যবহার করা হয়
- right বাড়িয়ে window expand করা হয়
- condition invalid হলে left বাড়িয়ে shrink করা হয়
- valid window-এ answer update করা হয়

---

## ২) কেন ব্যবহার হয়?

অনেক problem-এ subarray বা substring নিয়ে কাজ করতে হয়।

### Common examples
- maximum sum subarray of fixed size
- longest substring without repeating characters
- minimum window required to satisfy condition
- count of valid subarrays

---

## ৩) সাধারণ logic
```cpp
int left = 0;
for (int right = 0; right < n; right++) {
    // include arr[right] in window

    while (condition is invalid) {
        // shrink from left
        left++;
    }

    // process current window
}
```

### Why this works
- right বাড়ালে window বড় হয়
- condition invalid হলে left বাড়িয়ে window আবার valid করা হয়
- valid state-এ answer compute করা হয়

---

## ৪) Example: maximum sum subarray of size k
```cpp
int maxSumK(vector<int>& arr, int k) {
    int n = arr.size();
    int windowSum = 0;

    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int ans = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        ans = max(ans, windowSum);
    }

    return ans;
}
```

### কী হচ্ছে?
প্রথম window compute করা হয়েছে, তারপর এক element add করে এবং আগের element remove করে নতুন window তৈরি হয়েছে।

---

## ৫) Complexity

- Time: O(n)
- Space: O(1)

### কারণ
প্রতিটি element শুধু একবার add হয়, আরেকবার remove হয়—যেন total O(n) work।

---

## ৬) Sliding window-এর 핵 নীতি

1. window maintain করা
2. condition check করা
3. invalid হলে shrink
4. valid হলে answer update
5. window size dynamic হতে পারে

---

## ৭) Interview note

Sliding window অনেক tough problemকে cleanly O(n) complexity-এ solve করে।

> মূল জিনিস হলো “window state” ঠিক রাখা। যতক্ষণ valid, answer update; invalid হলে shrink।

এ pattern বোঝলে অনেক string ও array problem অনেক সহজ হয়ে যায়।
