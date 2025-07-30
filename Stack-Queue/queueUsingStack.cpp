class MyQueue {
public:
stack<int> s1;
stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int ele = s1.top();
        s1.pop();
        return ele;
    }
    
    int peek() {
        int ele = s1.top();
        return ele;
    }
    
    bool empty() {
        if(s1.size()==0) return true;
        else return false;
    }
};
