class MinStack {
private:
    stack<int> st, min_st;
public:
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        int curr_min = min_st.empty() ? val : min(min_st.top(), val);
        min_st.push(curr_min);
    }
    
    void pop() {
        st.pop();
        min_st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};
