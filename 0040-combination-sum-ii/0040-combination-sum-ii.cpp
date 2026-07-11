class Solution {
public:
    void helper(int idx, int sum, vector<int>&nums, vector<int>&ans, vector<vector<int>>&result, int size, int target){
        if(sum==target){
            result.push_back(ans);
            return;
        }
        if(idx==size || sum>target){
            return;
        }
        for(int i=idx; i<size; i++){
            if(i>idx && nums[i]==nums[i-1]){
                continue;
            }
            ans.push_back(nums[i]);
            helper(i+1, sum+nums[i], nums, ans,result,size,target);
            ans.pop_back();
        }


    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        vector<int>ans;
        vector<vector<int>>result;
        helper(0,0,nums,ans,result,size,target);
        return result;
    }
};