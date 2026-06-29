class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0],profit=0;
        for(int i=0;i<prices.size();i++){
            int sell =prices[i]-mini;
            profit=max(profit,sell);
            mini=min(prices[i],mini);
        }
        return profit;
        
    }
};