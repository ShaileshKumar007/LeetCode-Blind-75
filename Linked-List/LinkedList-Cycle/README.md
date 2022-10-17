# Linked List Cycle
## **Problem Statment:**

Given *head*, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the *next* pointer. Internally, *pos* is used to denote the index of the node that tail's *next* pointer is connected to. **Note that pos is not passed as a parameter.**

Return *true* if there is a cycle in the linked list. Otherwise, return *false*.

![img](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist.png)

Example-1:  

```
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
```

**Link to the question:** https://leetcode.com/problems/linked-list-cycle/