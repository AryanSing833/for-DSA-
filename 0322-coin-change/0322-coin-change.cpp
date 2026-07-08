class Solution {
public:
    int solve(int i, vector<int>& coin, int amount, vector<vector<int>>& dp){
        if(i==0){
            if(amount % coin[0] == 0)
                return amount / coin[0];
            return 1e9;
        }
        if(dp[i][amount] != -1)
            return dp[i][amount];
        int not_pick = solve(i-1, coin, amount, dp);
        int pick = 1e9;
        if(coin[i] <= amount)
            pick = 1 + solve(i, coin, amount - coin[i], dp);
        return dp[i][amount] = min(pick, not_pick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        int ans = solve(n-1, coins, amount, dp);
        if(ans >= 1e9)
            return -1;

        return ans;
    }
};