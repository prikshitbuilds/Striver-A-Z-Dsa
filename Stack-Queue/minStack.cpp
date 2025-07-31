class MinStack {
private:
std::stack<long long>st;
long long mini=INT_MAX;
public:

    MinStack() {
        
    }
    
void push(int val) {
        long long value = val;
        if(st.empty()){
            mini=value;
            st.push(value);
        }
       else if(value>mini){
            st.push(value);
        }
        else{
            st.push(2*value- mini);
            mini=value;
        }
    }
    
    void pop() {
        if(st.empty()) return ;
             
             long long x = st.top();
             st.pop();

             if(mini>x){
                mini = 2* mini-x;
             }

    }
    
    int top() {
        if(st.empty()) return -1;
       long long x=st.top();
        if(x>mini){
            return x;
        }
        else{
            return mini;
        }
    }
    
    int getMin() {
        return mini;
    }
};
