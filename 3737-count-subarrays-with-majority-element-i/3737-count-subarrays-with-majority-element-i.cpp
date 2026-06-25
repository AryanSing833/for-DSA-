class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            int curr_count=0;
            for(int j=i; j<nums.size(); j++){
                if(nums[j]==target){
                    curr_count++;
                }
                if(curr_count>(j-i+1)/2){
                    ans++;
                }
            }
        }
        return ans;
    }
};
/*
1 1 1
6
1 1
3
1 1 1 1
10
1 1 1 1 1
15
1 1 2 2 3 3
sub array then voting 
1 2 2 3
1 3 5 8 // 8 7 5 3 

*/