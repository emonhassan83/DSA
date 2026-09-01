# Array Reverse

## সমস্যা
একটি array-এর element গুলোকে উল্টো দিকে সাজাতে হবে।

## ধারণা
- i = 0, j = n - 1
- while i < j
- arr[i] এবং arr[j] swap করা হবে
- i বাড়বে, j কমবে

## উদাহরণ
```text
arr = [10, 20, 30, 40, 50]
```

ফলাফল:
```text
[50, 40, 30, 20, 10]
```

## Step by step
```text
before: [10, 20, 30, 40, 50]
        ^          ^
        i          j

swap 10 and 50
swap 20 and 40

final: [50, 40, 30, 20, 10]
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

    int i = 0, j = n - 1;
    while (i < j) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        i++;
        j--;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

## ব্যাখ্যা
```cpp
int tmp = arr[i];
arr[i] = arr[j];
arr[j] = tmp;
```

এখানে temporary variable ব্যবহার করে value swap করা হয়।

- `tmp`-এ arr[i] রাখা হয়
- arr[i] তে arr[j] বসানো হয়
- arr[j] তে tmp বসানো হয়

যেহেতু i বাড়ে আর j কমে, তাই array-এর দুই প্রান্ত থেকে ক্রমান্বয়ে swap হয়।

## Time Complexity
- O(n)

প্রতিটি pair একবার swap হয়।

## Space Complexity
- O(1)

## গুরুত্বপূর্ণ বিষয়
- reverse-এ swapping logic খুব গুরুত্বপূর্ণ
- i < j condition ঠিক রাখতে হবে
- array-এর দুই প্রান্ত থেকে কাজ করতে হয়

---

## Summary
Reverse operation-এ মূল কাজ হলো:
1. first and last index-এ swap করা
2. inward move করা
3. মাঝখানে পৌঁছলে stop করা

এটি array-তে খুব common technique।
