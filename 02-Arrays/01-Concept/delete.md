# Array Delete

## সমস্যা
একটি array-থেকে নির্দিষ্ট index-এর element delete করতে হবে।

## ধারণা
- delete position-এর পরে থাকা elements কে left shift করতে হবে
- শেষে duplicate value থাকে, তাই array size ১ কমিয়ে দিতে হবে
- deleted index-টি effectively remove হয়

## উদাহরণ
```text
arr = [10, 20, 30, 40, 50]
delete at index = 2
```

ফলাফল:
```text
[10, 20, 40, 50]
```

## Step by step
```text
before: [10, 20, 30, 40, 50]
index:    0   1   2   3   4

remove index 2 (30)

shift left:
[10, 20, 30, 40, 50]
      30 -> 40
      40 -> 50

final:
[10, 20, 40, 50]
```

## C++ code
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos;
    cin >> pos;

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

## ব্যাখ্যা
```cpp
for (int i = pos; i < n - 1; i++) {
    arr[i] = arr[i + 1];
}
```

এখানে delete করা position থেকে শুরু করে প্রতিটি element-এর value পরের element থেকে নেওয়া হয়।

যেমন:
```text
arr[2] = arr[3]
arr[3] = arr[4]
```

এভাবে left shift হয়।

শেষের element duplicate হয়ে যায়, কিন্তু আমরা n-1 পর্যন্ত print করি বলে deleted element চলে যায়।

## Time Complexity
- O(n)

কারণ array-এর বাকি সব element shift হয়।

## Space Complexity
- O(1)

## গুরুত্বপূর্ণ বিষয়
- delete-এ left shift করতে হয়
- boundary condition হিসেবে n-1 ব্যবহার করতে হয়
- last element duplicate থাকার সমস্যা থাকে, সেটি print-এ এড়ানো হয়

---

## Summary
Delete operation-এ মূল কাজ হলো:
1. target index থেকে শুরু করে left shift করা
2. last element অপ্রয়োজনীয় হয়ে যায়
3. array size ১ কমানো

এটি array-এ খুব সাধারণ operation।
