# Ups and Downs
CodeChef Difficulty 1198 Problem.


This repository contains a solution to the **"Ups and Downs"** problem, which involves rearranging an array such that it follows a specific alternating inequality pattern.

## Problem Description

You are given a **zero-indexed array `A`**. You need to rearrange its elements such that:

- `A[0] ≤ A[1] ≥ A[2] ≤ A[3] ≥ A[4] ...`

In other words, for even indices `i`, the condition `A[i] ≤ A[i+1]` should be satisfied, and for odd indices `i`, `A[i] ≥ A[i+1]`.

> If there are multiple valid arrangements, you may return any one of them.

---

### Input

- The first line contains a single integer `T`, denoting the number of test cases.
- For each test case:
  - The first line contains an integer `N`, the size of the array.
  - The second line contains `N` space-separated integers, the elements of the array.

### Output

- For each test case, output a single line containing `N` space-separated integers rearranged in the required "Ups and Downs" order.

---
