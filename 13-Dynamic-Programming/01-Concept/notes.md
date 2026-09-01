# Dynamic Programming — মৌলিক ধারণা

## ১) DP কী?

Dynamic Programming (DP) হলো এমন একটি technique যেখানে overlapping subproblems-এর solution memoize/remember করা হয়, যাতে একই calculation বারবার না করতে হয়।

---

## ২) DP-এর মূল ধারণা

### ১. Overlapping Subproblems
একই subproblem বারবার compute হয়।

### ২. Optimal Substructure
একটি problem-এর optimal solution ছোট subproblems-এর optimal solution থেকে আসে।

---

## ৩) DP-এর দুই ধরনের

### Top-down (Memoization)
```cpp
int dp[n];
memset(dp, -1, sizeof(dp));
```

Recursive function call + memoization

### Bottom-up (Tabulation)
Loop-based iterative fill.

---

## ৪) Fibonacci example

### naive recursion
```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
```

This recomputes same values many times.

### DP solution
```cpp
int fib(int n) {
    vector<int> dp(n + 1);
    dp[0] = 0; dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
```

---

## ৫) Complexity

- Time: depends on state count
- Space: DP array size

### Fibonacci example
- Time: O(n)
- Space: O(n)

---

## ৬) Common DP problem types

- 1D DP
- 2D DP
- knapsack
- subsequence
- longest increasing subsequence
- coin change
- grid paths

---

## ৭) Important lesson

DP-এর main challenge is identifying:
- state
- transition
- base case

---

## ৮) Interview note

DP is usually the step after greedy or brute force fails.

> If a problem has repeated subproblems, think DP.
