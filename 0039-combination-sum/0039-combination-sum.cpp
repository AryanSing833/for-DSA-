class Solution {
public:
    void f(int i,vector<int>&a,int t,vector<int>&v,vector<vector<int>>&ans){
        if(i==a.size()){
            if(t==0) ans.push_back(v);
            return;
        }
        if(a[i]<=t){
            v.push_back(a[i]);
            f(i,a,t-a[i],v,ans);
            v.pop_back();
        }
        f(i+1,a,t,v,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates,int target) {
        vector<vector<int>> ans;
        vector<int> v;
        f(0,candidates,target,v,ans);
        return ans;
    }
};