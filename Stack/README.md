# Stack

LIFO: Last-in First-out

Recursion by default is using system stack. It might require a stack if converted to Iterative process.

## Stack ADT

### Data

- Space to storage elements
- Top pointer

### Operations

- push(x)
- pop()
- top()
- empty()

It can be implemented using `Vector` or `Linked List`.

C++ internally, by default, implement `Stack` using `Deque`. But you can choose to use `Vector`.