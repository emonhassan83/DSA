#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << "\n";
    st.pop();
    cout << "After pop, top: " << st.top() << "\n";

    return 0;
}
