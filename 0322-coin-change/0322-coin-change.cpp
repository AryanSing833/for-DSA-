class Solution {
public:
    int solve(int i, vector<int>&coin, int target, vector<vector<int>>&dp){
        if(i==0){
            if(target % coin[0]==0){
                return target/coin[0];
            }
            return 1e9;
        } 
        if(dp[i][target]!=-1){
            return dp[i][target];
        }

        int Not_pick= solve(i-1, coin, target, dp);
        int pick=1e9;
        if(coin[i]<=target){
            pick=1+solve(i,coin,target-coin[i], dp);
        }
        return dp[i][target]= min(pick, Not_pick);

    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n, vector<int>(amount+1, -1));
        int ans=solve(n-1, coins, amount, dp);
        if(ans>=1e9){
            return -1;
        }
        return ans;
    }
};