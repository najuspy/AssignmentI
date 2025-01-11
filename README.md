# DSA First Lab - Code Solutions

This repository contains the solutions to fundamental Data Structures and Algorithms (DSA) programs implemented in C++. These programs demonstrate key operations on arrays, stacks, and queues, which are foundational concepts in DSA.

## Table of Contents
1. [Insertion in an Array](#insertion-in-an-array)
2. [Deletion in an Array](#deletion-in-an-array)
3. [Stack: Push and Pop Operations](#stack-push-and-pop-operations)
4. [Queue: Enqueue and Dequeue Operations](#queue-enqueue-and-dequeue-operations)

---

### Insertion in an Array
**Description:**
This program demonstrates how to insert an element into an array at a specific position. The process includes:
1. Shifting elements to make space for the new element.
2. Inserting the desired element at the specified index.

**Key Features:**
- Handles dynamic insertion by shifting elements.
- Supports inserting at any valid index within the array bounds.

---

### Deletion in an Array
**Description:**
This program shows how to delete an element from an array by:
1. Locating the element's index.
2. Shifting subsequent elements to fill the gap left by the deleted element.

**Key Features:**
- Ensures the array remains contiguous after deletion.
- Handles boundary cases, such as deleting the first or last element.

---

### Stack: Push and Pop Operations
**Description:**
The stack is a Last In, First Out (LIFO) data structure. This program demonstrates:
1. **Push Operation**: Adding an element to the top of the stack.
2. **Pop Operation**: Removing the top element from the stack.

**Key Features:**
- Handles stack overflow and underflow conditions.
- Includes a display function to show the current stack contents.

---

### Queue: Enqueue and Dequeue Operations
**Description:**
The queue is a First In, First Out (FIFO) data structure. This program implements:
1. **Enqueue Operation**: Adding an element to the rear of the queue.
2. **Dequeue Operation**: Removing an element from the front of the queue.

**Key Features:**
- Handles queue overflow and underflow conditions.
- Implements both circular and linear queue operations.

---

### How to Run the Programs
1. Clone this repository to your local machine.
2. Navigate to the folder containing the C++ files.
3. Compile the desired program using a C++ compiler (e.g., `g++ insertion.cpp -o insertion`).
4. Run the compiled executable (e.g., `./insertion`).

---

### License
This repository is provided for educational purposes and is open-source. Feel free to use, modify, or share the code with proper attribution.
