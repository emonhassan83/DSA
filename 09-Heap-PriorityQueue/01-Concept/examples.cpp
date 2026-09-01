#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq; // max heap
    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Top: " << pq.top() << "\n";
    pq.pop();
    cout << "After pop, top: " << pq.top() << "\n";

    return 0;
}
