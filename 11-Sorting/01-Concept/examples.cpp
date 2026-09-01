#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {9, 3, 7, 1, 5};
    sort(arr.begin(), arr.end());

    cout << "Sorted: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
