#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> container;
    
public:
    void push(int v) {
        container.push_back(v);
    }
    
    int pop() {
        int x = container.back();
        container.pop_back();
        return x;
    }
    
    int top() {
        return container.back();
    }
    
    bool empty() {
        return container.empty();
    }
    
    int size() {
        return (int) container.size();
    }
};

int main(int argc, const char * argv[]) {
    Stack s;
    s.push(5);
    s.push(10);
    s.push(20);
    s.pop();
    cout << s.size() << endl;
    cout << s.top() << endl;
    return 0;
}
