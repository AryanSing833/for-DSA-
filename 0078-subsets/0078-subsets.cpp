class Solution {
public:
    void f(int i,vector<int>&nums,vector<int>&v,vector<vector<int>>&ans){
        if(i==nums.size()){
            ans.push_back(v);
            return;
        }

        v.push_back(nums[i]);
        f(i+1,nums,v,ans);
        v.pop_back();

        f(i+1,nums,v,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        f(0,nums,v,ans);
        return ans;
    }
};