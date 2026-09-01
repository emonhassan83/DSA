# Graph — মৌলিক ধারণা

## ১) Graph কী?

Graph হলো node (vertex) ও edge-সমৃদ্ধ একটি data structure।

### Example
```text
A -- B
|    |
C -- D
```

Graph-এ nodeগুলোর মধ্যে relation থাকে।

---

## ২) Graph-এর ধরন

### Undirected graph
edge দুই দিকে চলতে পারে

### Directed graph
edge নির্দিষ্ট direction-এ চলে

### Weighted graph
edge-এ weight মান থাকে

### Unweighted graph
edge-এ weight থাকে না

---

## ৩) Graph representation

### Adjacency matrix
2D array ব্যবহার করা হয়

### Adjacency list
vector list ব্যবহার করা হয়

```cpp
vector<int> adj[n];
```

Graph problems-এ adjacency list বেশি common।

---

## ৪) Graph traversal

### BFS
queue ব্যবহার করে level-order traversal

### DFS
stack/recursion ব্যবহার করে depth-first traversal

---

## ৫) BFS example
```cpp
queue<int> q;
q.push(start);
visited[start] = true;

while (!q.empty()) {
    int u = q.front(); q.pop();
    for (int v : adj[u]) {
        if (!visited[v]) {
            visited[v] = true;
            q.push(v);
        }
    }
}
```

---

## ৬) DFS example
```cpp
void dfs(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) dfs(v);
    }
}
```

---

## ৭) Common graph problems

- connected components
- shortest path
- cycle detection
- topological sort
- Dijkstra
- Bellman-Ford
- DFS/BFS tree

---

## ৮) Complexity

- BFS/DFS: O(V + E)
- adjacency list: efficient for sparse graphs

---

## ৯) Interview note

Graph questions often test whether you understand traversal, visited array, and edge handling correctly.

> Graph problems are usually about state tracking and connection analysis.
