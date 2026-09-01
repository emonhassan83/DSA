#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array elements:\n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    int target = 30;
    bool found = false;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            found = true;
            cout << "Found at index: " << i << "\n";
            break;
        }
    }

    if (!found) {
        cout << "Not found\n";
    }

    return 0;
}
