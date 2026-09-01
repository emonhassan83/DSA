# Array Copy

## সমস্যা
একটি array-এর value অন্য array-এ কপি করতে হবে।

## ধারণা
- source array-এ loop চালিয়ে destination array-এ value copy করা হয়
- যদি দুই array combine করে নতুন array তৈরি করতে চাও, তাহলে প্রথম array-কে নতুন array-তে বসানো হবে
- তারপর second array-এর value next indices-এ বসানো হবে

## উদাহরণ
```text
A = [10, 20, 30]
B = [40, 50, 60]
```

ফলাফল:
```text
[10, 20, 30, 40, 50, 60]
```

## Step by step
```text
A = [10, 20, 30]
B = [40, 50, 60]

copy A to ans:
ans = [10, 20, 30]

copy B after A:
ans = [10, 20, 30, 40, 50, 60]
```

## C++ code
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n], b[m];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int ans[n + m];

    for (int i = 0; i < n; i++) {
        ans[i] = a[i];
    }

    int i = n;
    for (int j = 0; j < m; j++) {
        ans[i] = b[j];
        i++;
    }

    for (int k = 0; k < n + m; k++) {
        cout << ans[k] << " ";
    }

    return 0;
}
```

## ব্যাখ্যা
```cpp
for (int i = 0; i < n; i++) {
    ans[i] = a[i];
}
```

এখানে প্রথম array-এর সমস্ত element `ans`-এ copy হয়।

```cpp
int i = n;
for (int j = 0; j < m; j++) {
    ans[i] = b[j];
    i++;
}
```

এখানে second array-এর element গুলো `ans`-এর পরের index-এ বসানো হয়।

## Time Complexity
- O(n + m)

কারণ দুটো array-ই traverse করা হয়।

## Space Complexity
- O(n + m)

কারণ নতুন array তৈরি হয়েছে।

## গুরুত্বপূর্ণ বিষয়
- copy-এ index tracking খুব গুরুত্বপূর্ণ
- array এর size অনুযায়ী নতুন array allocate করতে হবে
- source থেকে destination-এ value sequence ঠিকভাবে copy করতে হবে

---

## Summary
Copy operation-এ মূল কাজ হলো:
1. source array থেকে values read করা
2. destination array-এ assigned করা
3. required হলে দুই array concatenate করা

এটি array manipulation-এর基础 concept।
