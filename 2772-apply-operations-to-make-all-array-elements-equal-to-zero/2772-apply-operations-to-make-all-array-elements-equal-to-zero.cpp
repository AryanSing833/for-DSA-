class Solution {
public:
    bool checkArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> diff(n + 1, 0);
        long long effect = 0;
        for (int i = 0; i < n; i++) {
            effect += diff[i];
            int curr = nums[i] + effect;
            if (curr < 0) return false;
            if (curr > 0) {
                if (i + k > n) return false;
                effect -= curr;
                diff[i + k] += curr;
            }
        }

        return true;
    }
};