#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "level";

    // length
    cout << "Length: " << s.size() << "\n";

    // indexing
    cout << "First char: " << s[0] << "\n";

    // reverse
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s << "\n";

    // palindrome check
    string t = "madam";
    bool ok = true;
    for (int i = 0, j = t.size() - 1; i < j; i++, j--) {
        if (t[i] != t[j]) {
            ok = false;
            break;
        }
    }

    cout << "Palindrome? " << (ok ? "Yes" : "No") << "\n";

    return 0;
}
