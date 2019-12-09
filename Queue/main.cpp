#include <iostream>
#include <deque>
using namespace std;

class Queue {
    deque<int> container;
        
public:
    void push(int v) {
        container.push_back(v);
    }
    
    int pop() {
        int x = container.front();
        container.pop_front();
        return x;
    }
    
    int front() {
        return container.front();
    }
    
    int back() {
        return container.back();
    }
    
    bool empty() {
        return container.empty();
    }
    
    int size() {
        return (int) container.size();
    }
};
