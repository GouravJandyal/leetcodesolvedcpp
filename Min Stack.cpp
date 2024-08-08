class MinStack {
public:
stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> cpy;
        cpy=st;
        int min=INT_MAX;
        while(!cpy.empty())
        {
          if(cpy.top() < min)
            min=cpy.top();
         cpy.pop();
        }
        return min;

    }
};