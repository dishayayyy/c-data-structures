# C Data Structures Library

A small, from-scratch C library that implements core data structures using
manual memory management and clean, defensive APIs.  
The goal of this project is to demonstrate understanding of low-level program
behavior rather than relying on built-in libraries.

---

## Implemented Data Structures

- **Stack**  
  Array-based implementation with overflow and underflow checks.

- **Queue**  
  Circular array-based implementation with proper handling of full and empty
  states.

- **Singly Linked List**  
  Dynamic node allocation with insertion, deletion, traversal, and cleanup.

---

## Key Concepts Demonstrated

- Dynamic memory management using `malloc` and `free`
- Ownership and lifetime of heap-allocated memory
- Defensive programming with explicit error handling
- Separation of interface (`.h`) and implementation (`.c`)
- Clean, reusable C APIs
- Basic build process using GCC and a Makefile

---

## Project Structure

c-data-structures/
├── include/ # Public header files (APIs)
│ ├── stack.h
│ ├── queue.h
│ └── linked_list.h
├── src/ # Implementations
│ ├── stack.c
│ ├── queue.c
│ └── linked_list.c
├── tests/ # Simple test driver
│ └── main.c
├── Makefile
└── README.md


---

## Build and Run

### Using GCC (Windows / Linux)

```bash
gcc -Wall -Wextra -Iinclude src/*.c tests/main.c -o ds_test
./ds_test

Using Make
make
./ds_test

To clean the build:
make clean

Sample Output
Stack pop: 20
Queue dequeue: 1
5 -> 10 -> NULL
