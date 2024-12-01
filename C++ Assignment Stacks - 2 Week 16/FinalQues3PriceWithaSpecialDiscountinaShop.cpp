class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>res(n,0);
        stack<int>st;
        res[n-1]=0;
        st.push(prices[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()&&st.top()>prices[i]) st.pop();
            if(st.empty()) res[i]=0;
            else res[i]=st.top();
            st.push(prices[i]);
        }
        for(int i=0;i<n;i++){
            prices[i]=prices[i]-res[i];
        }
        return prices;
    }
};