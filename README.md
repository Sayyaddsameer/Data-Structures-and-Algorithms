# The DSA Architect's Library

## About This Repository

Welcome. This repository is my curated library of Data Structures and Algorithms, built from the `DSA RoadMap`[cite: 1]. It serves as a living project dedicated to designing, implementing, and documenting the "blueprints" of efficient software.

My goal is to build a comprehensive reference that emphasizes code clarity, algorithmic efficiency, and practical application by solving problems from platforms like LeetCode and GeeksforGeeks.

**Primary Language: C++**

---

## What is a Data Structure?

A **Data Structure** is a specialized format for organizing, processing, retrieving, and storing data. Just as an architect designs different blueprints for a skyscraper versus a house, a programmer chooses different data structures (like `Arrays`, `Linked Lists`, or `Trees`) to build efficient software. The choice of data structure dictates how data is accessed and what operations can be performed on it.

## What is an Algorithm?

An **Algorithm** is a finite sequence of well-defined, computer-implementable instructions, typically to solve a class of problems or to perform a computation. If a data structure is the "blueprint," the algorithm is the "set of instructions" (like `Binary Search` or `Merge Sort`) that explains how to build or use the blueprint to achieve a specific goal.

---

## Data Structures (The Blueprints)

This section contains the fundamental building blocks for organizing and storing data.

### Arrays
* **Explanation:** An array is a collection of items stored at contiguous memory locations. It's the simplest data structure, where each element can be accessed by its index.
* **Key Concepts (from my roadmap):** Prefix Sum, Sliding Window, Kadane’s Algorithm.
* **Advantages:** Fast, constant-time `O(1)` access by index. Simple to implement.
* **Common Complexities:**

| Operation | Average Time | Worst Time | Space |
| :--- | :--- | :--- | :--- |
| Access | O(1) | O(1) | O(n) |
| Search | O(n) | O(n) |
| Insert | O(n) | O(n) |
| Delete | O(n) | O(n) |
* **Implementations:** **[View my Array solutions](./Data-Structures/Arrays/)**

### Strings
* **Explanation:** A string is an immutable sequence of characters, often implemented as an array. Many string problems are extensions of array-based logic.
* **Key Concepts (from my roadmap):** Palindromes, Anagrams, Pattern Matching.
* **Advantages:** Efficient for storing and manipulating text.
* **Common Complexities:** (Varies widely by operation)
| Operation | Average Time | Space |
| :--- | :--- | :--- |
| Access | O(1) | O(n) |
| Search (Substring) | O(n*m) |
| Compare | O(n) |
* **Implementations:** **[View my String solutions](./Data-Structures/Strings/)**

### Stack & Queue
* **Explanation:**
    * **Stack:** A "Last-In, First-Out" (LIFO) structure. The last item added is the first one to be removed.
    * **Queue:** A "First-In, First-Out" (FIFO) structure. The first item added is the first one to be removed.
* **Key Concepts (from my roadmap):** Balanced Parentheses, Next Greater Element, Monotonic Stack.
* **Advantages:** Ideal for managing sequential processes, like function calls (Stack) or task queues (Queue).
* **Common Complexities (for both):**
| Operation | Average Time | Space |
| :--- | :--- | :--- |
| Push / Enqueue | O(1) | O(n) |
| Pop / Dequeue | O(1) |
| Peek / Front | O(1) |
* **Implementations:** **[View my Stack & Queue solutions](./Data-Structures/Stacks-and-Queues/)**

### Linked List
* **Explanation:** A linear data structure where elements (nodes) are not stored contiguously. Each node contains its data and a pointer to the next node in the sequence.
* **Key Concepts (from my roadmap):** Reversal, Merge, Detect Cycle (Floyd's Algorithm).
* **Advantages:** Dynamic size. Efficient insertions and deletions `O(1)` (if the node is known).
* **Common Complexities:**
| Operation | Average Time | Worst Time | Space |
| :--- | :--- | :--- | :--- |
| Access | O(n) | O(n) | O(n) |
| Search | O(n) | O(n) |
| Insert | O(1) | O(1) |
| Delete | O(1) | O(1) |
* **Implementations:** **[View my Linked List solutions](./Data-Structures/Linked-Lists/)**

### Hashing (HashMap / HashSet)
* **Explanation:** Hashing uses a hash function to map keys to indices (buckets) in an array. This allows for extremely fast (near constant-time) lookups. `HashMap` (or `Dictionary` in Python) stores key-value pairs.
* **Key Concepts (from my roadmap):** Count Frequency, Two Sum, Subarray Sum.
* **Advantages:** The fastest data structure for average-case lookup, insertion, and deletion.
* **Common Complexities:**
| Operation | Average Time | Worst Time | Space |
| :--- | :--- | :--- | :--- |
| Access | O(1) | O(n) | O(n) |
| Search | O(1) | O(n) |
| Insert | O(1) | O(n) |
| Delete | O(1) | O(n) |
* **Implementations:** **[View my Hashing solutions](./Data-Structures/Hashing/)**

### Trees (Binary Tree / BST)
* **Explanation:** A hierarchical data structure with a root node and child nodes. A **Binary Search Tree (BST)** is an ordered tree where the left child is smaller and the right child is larger than the parent.
* **Key Concepts (from my roadmap):** Inorder/Preorder/Postorder Traversal, Height, Diameter, Lowest Common Ancestor (LCA).
* **Advantages:** Efficient searching in ordered data `O(log n)` (for BSTs). Good for representing hierarchical data.
* **Common Complexities (Balanced BST):**
| Operation | Average Time | Worst Time | Space |
| :--- | :--- | :--- | :--- |
| Access | O(log n) | O(n) | O(n) |
| Search | O(log n) | O(n) |
| Insert | O(log n) | O(n) |
| Delete | O(log n) | O(n) |
* **Implementations:** **[View my Tree solutions](./Data-Structures/Trees/)**

### Heap / Priority Queue
* **Explanation:** A **Heap** is a special tree-based data structure that satisfies the heap property (e.g., in a Min-Heap, the parent is always smaller than its children). A **Priority Queue** is an abstract data type, often implemented using a heap, that provides efficient access to the max or min element.
* **Key Concepts (from my roadmap):** Min/Max Heap, K Largest/Smallest Elements.
* **Advantages:** The fastest way to find/extract the minimum or maximum element `O(1)` or `O(log n)`.
* **Common Complexities:**
| Operation | Time | Space |
| :--- | :--- | :--- |
| Peek | O(1) | O(n) |
| Insert (Push) | O(log n) |
| Extract (Pop) | O(log n) |
* **Implementations:** **[View my Heap solutions](./Data-Structures/Heaps/)**

### Graphs
* **Explanation:** A non-linear data structure consisting of nodes (vertices) and edges that connect them. Graphs are used to model networks, maps, and other complex relationships.
* **Key Concepts (from my roadmap):** BFS (Breadth-First Search), DFS (Depth-First Search), Connected Components.
* **Advanced Algorithms:** Dijkstra's, Bellman-Ford, Prim’s, Kruskal’s.
* **Advantages:** The most powerful structure for modeling and solving network-based problems.
* **Common Complexities (Adjacency List):**
| Operation | Time | Space |
| :--- | :--- | :--- |
| Storage | O(V + E) | O(V + E) |
| Add Edge | O(1) |
| Check Edge | O(V) |
| BFS / DFS | O(V + E) |
* **Implementations:** **[View my Graph solutions](./Data-Structures/Graphs/)**

---

## Algorithms (The Instructions)

This section focuses on the "recipes"—the procedures for solving common computational problems.

### Sorting & Searching
* **Explanation:**
    * **Sorting:** The process of arranging items in a specific order (e.g., ascending or descending).
    * **Searching:** The process of finding an item's location within a collection.
* **Key Algorithms:** Binary Search, Merge Sort, Quick Sort.
* **Advantages:** Sorting enables much faster searching (like Binary Search) and is often a prerequisite for other algorithms.
* **Common Complexities:**
| Algorithm | Best Time | Average Time | Worst Time | Space |
| :--- | :--- | :--- | :--- | :--- |
| **Binary Search** | O(1) | O(log n) | O(log n) | O(1) |
| **Merge Sort** | O(n log n) | O(n log n) | O(n log n) | O(n) |
| **Quick Sort** | O(n log n) | O(n log n) | O(n²) | O(log n) |
* **Implementations:**
    * **[View my Sorting solutions](./Algorithms/Sorting/)**
    * **[View my Searching solutions](./Algorithms/Searching/)**

### Recursion & Backtracking
* **Explanation:**
    * **Recursion:** A problem-solving technique where a function calls itself to solve smaller, identical subproblems.
    * **Backtracking:** An algorithmic technique for solving problems by trying to build a solution incrementally, and "backtracking" (removing the last choice) as soon as it determines the current path cannot lead to a valid solution.
* **Key Concepts (from my roadmap):** Subsets, Permutations, N-Queens.
* **Advantages:** Can provide extremely simple and elegant solutions to complex problems (like tree traversals or permutations) that would be very difficult to write iteratively.
* **Implementations:** **[View my Recursion & Backtracking solutions](./Algorithms/Recursion/)**

### Dynamic Programming (DP)
* **Explanation:** A powerful technique for solving complex problems by breaking them down into simpler, overlapping subproblems. It stores the results of subproblems (memoization) to avoid re-calculating them, leading to significant performance gains.
* **Key Concepts (from my roadmap):** 0/1 Knapsack, Longest Increasing Subsequence (LIS), Fibonacci, DP on Grids.
* **Approaches:** Memoization (Top-Down) and Tabulation (Bottom-Up).
* **Advantages:** Drastically reduces computational time from exponential to polynomial (e.g., `O(2^n)` to `O(n^2)`) for many problems.
* **Implementations:** **[View my Dynamic Programming solutions](./Algorithms/Dynamic-Programming/)**

### Greedy Algorithms
* **Explanation:** An algorithmic paradigm that builds up a solution piece by piece, always choosing the next piece that offers the most obvious and immediate benefit (the "greedy" choice).
* **Key Concepts (from my roadmap):** Activity Selection, Huffman Encoding.
* **Advantages:** Simple to design and often very fast (e.g., `O(n log n)`). When a greedy choice property holds, it provides an optimal solution.
* **Implementations:** **[View my Greedy solutions](./Algorithms/Greedy/)**

---

## Practice Platforms

This code is practiced on, and often inspired by, problems from the following platforms:

| Platform | Purpose |
| :--- | :--- |
| **LeetCode** | [cite_start]Interview-style DSA problems [cite: 16] |
| **GeeksforGeLinks** | [cite_start]Concepts + practice problems [cite: 16] |
| **CodeStudio** | [cite_start]Structured guided path [cite: 16] |
| **HackerRank** | [cite_start]Easy problems & certifications [cite: 16] |
