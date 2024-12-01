class Solution {
public:
    bool isValid(string s) {
        if(s[0]==')'||s[0]=='}'||s[0]==']') return false;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else {
               if(st.empty())return false;
               if ((s[i] == ')' && st.top() != '(') || 
                    (s[i] == '}' && st.top() != '{') || 
                    (s[i] == ']' && st.top() != '[')) {
                    return false; 
                }
                st.pop();
            }
        }
        return st.empty();
    }
};