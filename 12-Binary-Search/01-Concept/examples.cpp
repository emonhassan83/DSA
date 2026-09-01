#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 7;

    int left = 0, right = arr.size() - 1;
    bool found = false;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            found = true;
            cout << "Found at index: " << mid << "\n";
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) cout << "Not found\n";

    return 0;
}
