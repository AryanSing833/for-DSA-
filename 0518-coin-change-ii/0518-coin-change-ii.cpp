class Solution {
public:
    int solve(int i, vector<int>&coin, int amt, vector<vector<int>>&dp, int n){
        if(i==0){
            if(amt % coin[0]==0){
                return 1;
            }
            return 0;
        }
        if(dp[i][amt]!=-1){
            return dp[i][amt];
        }
        int pick=0;
        if(coin[i]<=amt){
            pick=solve(i, coin, amt-coin[i], dp, n);
        }
        int not_pick=solve(i-1, coin, amt, dp, n);
        return dp[i][amt]=pick+not_pick;
    }
    int change(int amt, vector<int>& coin) {
        int n=coin.size();
        vector<vector<int>>dp(n, vector<int>(amt+1, -1));
        return solve(n-1, coin, amt, dp, n);
    }
};