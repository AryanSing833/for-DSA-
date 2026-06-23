class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // int n=nums.size();
        // int x=-1;
        // for(int i=n-2; i>=0; i--){
        //     if(nums[i]<nums[i+1]){
        //          x=i;
        //         break;
        //     }
        // }
        // if(x==-1){
        //     reverse(nums.begin(), nums.end());
        //     return;
        // }
        // for(int i=n-1; i>=0; i--){
        //     if(nums[i]>nums[x]){
        //         swap(nums[i],nums[x]);
        //         break;
        //     }
        // }
        // reverse(nums.begin()+x+1, nums.end());

        int idx=-1;
       int len=nums.size();
       for(int i=len-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            idx=i;
            break;
        }
       }
        if(idx==-1){
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=len-1; i>0; i--){
            if(nums[i]>nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }
            reverse(nums.begin()+idx+1, nums.end());
       
    }
};
/*
123

*/