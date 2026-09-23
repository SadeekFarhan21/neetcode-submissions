class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                st.push(c);
            }
            else if(c == ')'){
                if(!st.empty() && st.top() == '('){
                    st.pop();
                }
                else {
                    st.push(c);
                }
            }
            else if(c == ']'){
                if(!st.empty() && st.top() == '['){
                    st.pop();
                }
                else {
                    st.push(c);
                }
            }
            else {
                if(!st.empty() && st.top() == '{'){
                    st.pop();
                }
                else {
                    st.push(c);
                }
            }
        }
        return st.empty();
    }
};