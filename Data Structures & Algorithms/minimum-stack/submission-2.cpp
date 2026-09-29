class MinStack {
public:

    stack<int> n_stack;
    stack<int> minStk;
    

    MinStack() {
        
    }
    
    void push(int val) {
        n_stack.push(val);
        if(minStk.size() == 0){
            minStk.push(val);
        } else {
            int currMin = minStk.top();
            if(val < currMin){
                currMin = val;
                minStk.push(val);
            } else {
                minStk.push(currMin);
            }
        }
    }
    
    void pop() {
        n_stack.pop();
        minStk.pop();
    }
    
    int top() {
        return n_stack.top();
    }
    
    int getMin() {
        return minStk.top();
    }
};
