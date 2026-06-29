class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
        long long cur = 1;
            for (int j = i; j < n; j++) {
                cur = lcm(cur, nums[j]);

                if (cur == k) ans++;

                if (cur > k || k % cur != 0)
                    break;
            }
        }
        return ans;
    }
};