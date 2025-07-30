class MyStack {
public:

queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        for(int i=1;i<q.size();i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int ele = q.front();
        q.pop();
        return ele;
    }
    
    int top() {
        int ele = q.front();
        return ele;
    }
    
    bool empty() {
        if(q.size()==0) return true;
        else return false;
    }
};
