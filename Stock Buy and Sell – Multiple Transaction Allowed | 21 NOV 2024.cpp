    int maximumProfit(vector<int> &prices) {
        // code here
        vector<vector<int>> dp(prices.size() + 1, vector<int> (2, 0));
        for (int ind = prices.size() - 1; ind >= 0; ind--) {
            for (int can = 0; can < 2; can++) {
                int take = 0, not_take = 0;
                if (can) 
                    take = -prices[ind] + dp[ind + 1][0];
                else 
                    take = prices[ind] + dp[ind + 1][1];
                not_take = dp[ind + 1][can];
                dp[ind][can] = max(take, not_take);
            }
        }
        
        return dp[0][1];
    }

