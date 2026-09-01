# Array Insert

## সমস্যা
একটি array-তে নির্দিষ্ট index-এ নতুন value insert করতে হবে।

## ধারণা
- insert করার আগে target position পর্যন্ত elements কে right side-এ shift করতে হবে
- তারপর নতুন value বসাতে হবে
- array size ১ বাড়বে

## উদাহরণ
```text
arr = [10, 20, 30, 40]
insert at index = 1
value = 25
```

ফলাফল:
```text
[10, 25, 20, 30, 40]
```

## Step by step
```text
before: [10, 20, 30, 40]
index:   0   1   2   3

insert 25 at position 1

shift right:
[10, 20, 30, 40]
     30 -> 40
     20 -> 30
     25 -> 20

final:
[10, 25, 20, 30, 40]
```

## C++ code
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 1];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos, val;
    cin >> pos >> val;

    // shift all elements right from the end
    for (int i = n; i >= pos + 1; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;

    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

## ব্যাখ্যা
```cpp
for (int i = n; i >= pos + 1; i--) {
    arr[i] = arr[i - 1];
}
```

এখানে শেষ থেকে শুরু করে move করা হচ্ছে, কারণ যদি শুরু থেকে shift করি, তাহলে পুরোনো value overwrite হয়ে যাবে।

তারপর:
```cpp
arr[pos] = val;
```

এভাবে নতুন element সঠিক position-এ বসে।

## Time Complexity
- O(n)

কারণ সব elements কে shift করতে হয়।

## Space Complexity
- O(1)

## গুরুত্বপূর্ণ বিষয়
- insert-এর সময় index boundary ঠিক রাখতে হবে
- shift করার জন্য শেষ থেকে শুরু করতে হয়
- array size ১ বাড়ে

---

## Summary
Insert operation-এ মূল কাজ হলো:
1. target index-এর পরে থাকা elements কে এক step right shift করা
2. নির্দিষ্ট position-এ value বসানো
3. size বাড়ানো

এটি array-তে commonly used operation।
