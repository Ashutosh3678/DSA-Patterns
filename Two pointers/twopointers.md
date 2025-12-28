# Two Pointers Technique

The **Two Pointers** technique is an algorithmic approach commonly used on **arrays** and **linked lists** to optimize traversal and reduce time complexity.

In this technique, we maintain **two pointers**, usually denoted as `i` and `j`, which traverse the data structure according to specific rules defined by the problem.

---

## Core Idea

Instead of using nested loops, two pointers allow us to **process elements efficiently by reusing information from previous steps**, often reducing the time complexity from **O(n²)** to **O(n)**.

---

## Pointer Movement Patterns

The two pointers can move in different ways:

- **Same direction**
  - Both pointers move forward
  - Often used in filtering, removing elements, or sliding window problems

- **Opposite directions**
  - One pointer starts from the beginning, the other from the end
  - Common in sorted array and palindrome problems

- **Different speeds**
  - One pointer moves faster than the other
  - Frequently used in linked list problems (e.g., cycle detection)

---

## Why Use Two Pointers?

- Improves efficiency by avoiding redundant comparisons
- Enables **in-place processing** with **O(1)** extra space
- Exploits properties like **sorted order**, **symmetry**, or **sequential access**

---

## Common Use Cases

- Finding pairs or subarrays in arrays
- Removing or rearranging elements in-place
- Detecting cycles or finding the middle of a linked list
- Sliding window and partitioning problems

---

## Key Insight

> Two pointers replace brute force with **controlled traversal** based on problem constraints.

Understanding when and how to move the pointers is the core skill behind mastering this technique.
