class MyStack {
public:
    MyStack() = default;
    
    void push(int x) {
        q1.push(x);
        for (int i = q1.size() - 1; i > 0; i--) {
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
        int elem = q1.front();
        q1.pop();
        return elem;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }

private:
    std::queue<int> q1;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

 // 1  
 // 1 2 1