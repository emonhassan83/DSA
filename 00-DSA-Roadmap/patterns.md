# DSA প্যাটার্ন

DSA-তে সমস্যা সমাধানের জন্য অনেক ধরনের pattern থাকে।

## ১) Frequency Counting
এ প্যাটার্নে কিছু element-এর frequency বা count বের করতে হয়।

### ব্যবহার
- anagram
- duplicate check
- character counting
- most frequent element

### ডাটা স্ট্রাকচার
- array
- hash map
- hash set

## ২) Two Pointers
দুইটি pointer ব্যবহার করে array বা string-এ সমাধান করা হয়।

### ব্যবহার
- sorted array
- palindrome
- merge two arrays
- remove duplicates

### সুবিধা
- O(n) সময়ে সমাধান করা যায়
- extra space কম লাগে

## ৩) Sliding Window
একটি window ধীরে ধীরে move করে answer বের করা হয়।

### ব্যবহার
- maximum sum subarray
- longest substring without repetition
- minimum window substring

### 핵 নীতি
- window expand
- window shrink
- condition check

## ৪) Prefix Sum
প্রতিটি index-এ cumulative sum রাখা হয়।

### ব্যবহার
- range sum query
- subarray sum
- average calculation

### সুবিধা
- query করতে fast
- O(1) update/query

## ৫) Binary Search
স sorted array-এ middle element দেখে search করা হয়।

### ব্যবহার
- find element
- first/last occurrence
- search on answer
- rotated array

### complexities
- time: O(log n)
- space: O(1)

## ৬) DFS / BFS
Tree বা graph-এ traversal করার জন্য ব্যবহার করা হয়।

### DFS
- stack / recursion
- depth-wise traverse

### BFS
- queue
- level-wise traverse

## ৭) Greedy
প্রতিটি step-এ সবচেয়ে ভালো choice নেওয়া হয় বলে মনে করা হয়।

### ব্যবহার
- activity selection
- interval problems
- coin change greedy

## ৮) Dynamic Programming
কাজের ফলাফল সাব problems-এ সংরক্ষণ করে reuse করা হয়।

### সাধারণ ধরন
- 1D DP
- 2D DP
- Knapsack
- LIS/LCS
- subsequence

### মূল ধারণা
- overlapping subproblems
- optimal substructure

## ৯) Backtracking
সম্ভব সব solution খোঁজা হয়, কিন্তু ভুল path-এ ফিরে আসে।

### ব্যবহার
- permutations
- combinations
- N-Queens
- maze path

## ১০) Graph Algorithms
### সাধারণ topic
- BFS
- DFS
- shortest path
- union-find
- topological sort

## ১১) Monotonic Stack / Queue
stacks বা queues-এ monotonic property বজায় রাখা হয়।

### ব্যবহার
- next greater element
- stock span
- histogram problems

## ১২) Divide and Conquer
একটি problem কে ছোট ছোট অংশে ভাগ করে সমাধান করা হয়।

### উদাহরণ
- merge sort
- quick sort
- binary search

## কীভাবে pattern চিনবো?
- input দেখে array/string/graph বোঝা
- constraints দেখা
- complexity estimate
- candidate approach বাছাই
- তারপর code solution

> DSA-তে pattern চিনতে পারলেই problem solve করা অনেক সহজ হয়ে যায়।
