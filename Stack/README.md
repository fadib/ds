# Stack

LIFO: Last-in First-out

Recursion by default is using system stack. It might require a stack if converted to Iterative process.

## Stack ADT

### Data

- Space to storage elements
- Top pointer

### Operations

- Push(x)
- Pop()
- Peek(index)
- StackTop()
- isEmpty()
- isFull()

It can be implemented using `Array` or `Linked List`.

C++ internally, by default, implement `Stack` using `Deque`. But you can choose to use `Vector`.