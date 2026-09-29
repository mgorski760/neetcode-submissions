class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0; //buy day
        int r = 1; //sell day
        int maxP = 0;
        
        while(r < prices.size()){
            if(prices[l] < prices[r]){
                int profit = prices[r] - prices[l];
                maxP = max(maxP, profit);
            } else {
                //If the buying price is greater,
                //set them to the same index
                l = r;
            }
            r++;
        }
        return maxP;
    }
};
