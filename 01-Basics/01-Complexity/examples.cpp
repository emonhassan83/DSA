#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;

    // O(n)
    cout << "Linear traversal:\n";
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    // O(n^2)
    cout << "Nested loop:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i + j << " ";
        }
        cout << "\n";
    }

    return 0;
}
