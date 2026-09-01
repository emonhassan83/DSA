#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    vector<vector<int>> adj(n);

    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {2};

    cout << "Graph represented using adjacency list\n";
    for (int i = 0; i < n; i++) {
        cout << i << " -> ";
        for (int v : adj[i]) cout << v << " ";
        cout << "\n";
    }

    return 0;
}
