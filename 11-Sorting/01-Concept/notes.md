# Sorting — মৌলিক ধারণা

## ১) Sorting কী?

Sorting মানে data elementsকে একটি নির্দিষ্ট order-এ সাজানো, যেমন ascending বা descending।

### Common orders
- ascending
- descending

---

## ২) Why sorting matters?

Sorting problems-এ অনেক algorithm-এর foundation।

- binary search needs sorted array
- duplicate detection easier
- pair/triple solving easier
- many greedy and merge problems rely on sorted data

---

## ৩) Common sorting algorithms

### Bubble Sort
Adjacent swaps করে বড় value right-এ নিয়ে যায়।

### Selection Sort
Minimum value pick করে front-এ বসায়।

### Insertion Sort
One by one insert করে sorted position-এ রাখে।

### Merge Sort
Divide and conquer-based stable sort.

### Quick Sort
Partition technique ব্যবহার করে fast average-case sort.

---

## ৪) Complexity comparison

| Algorithm | Time Complexity | Space |
|---|---:|---:|
| Bubble Sort | O(n^2) | O(1) |
| Selection Sort | O(n^2) | O(1) |
| Insertion Sort | O(n^2) | O(1) |
| Merge Sort | O(n log n) | O(n) |
| Quick Sort | O(n log n) avg | O(log n) |

---

## ৫) Stability

Stable sort মানে equal elements-এর relative order preserved থাকে।

### Example
- merge sort stable
- quick sort usually not stable

---

## ৬) Common interview question

- sort array ascending/descending
- sort custom objects
- sort by frequency
- sorting to enable binary search

---

## ৭) Interview note

If problem involves searching, checking order, or grouping, sorting is often the first optimization idea.

> Sorting helps turn messy data into a structured, searchable form.
