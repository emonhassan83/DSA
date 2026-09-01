#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> mp;
    mp["apple"] = 3;
    mp["banana"] = 5;

    cout << "apple count: " << mp["apple"] << "\n";
    cout << "banana count: " << mp["banana"] << "\n";

    unordered_set<int> st = {1, 2, 3, 3, 4};
    cout << "Set size: " << st.size() << "\n";

    return 0;
}
