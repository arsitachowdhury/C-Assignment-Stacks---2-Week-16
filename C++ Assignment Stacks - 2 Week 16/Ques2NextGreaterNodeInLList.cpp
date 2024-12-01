class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int>st;
        vector<int>num;
        ListNode* temp=head;
        while(temp){
            num.push_back(temp->val);
            temp=temp->next;
        }
        int n=num.size();
        vector<int>res(n,0);
        res[n-1]=0;
        st.push(num[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()&&st.top()<=num[i]) st.pop();
            if(st.empty()) res[i]=0;
            else res[i]=st.top();
            st.push(num[i]);
        }
       return res;
    }
};