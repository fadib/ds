# Queue

FIFO: First-in First-out

## Queue ADT

### Data

- Space for storing elements
- Front pointer
- End pointer

### Operations

- push(x)
- pop()
- front()
- back()
- empty()
- size()

C++, by default, is using `Deque`, or `List` for `Queue` implementation.

The underlying container shall support following operations:

- empty
- size
- front
- back
- pop_front
- push_back

`Queue` can also use 2 `Stacks`. `Stack-1` for push and `Stack-2` for pop but after moving elements from `Stack-1`