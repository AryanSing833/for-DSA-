class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        
         int n = nums.size();
        vector<int> pre;
        int m = 0;

        for (int x : nums) {
            m = max(m, x);
            pre.push_back(gcd(x, m));
        }

        sort(pre.begin(), pre.end());

        long long ans = 0;
        int i = 0, j = n - 1;

        while (i < j) {
            ans += gcd(pre[i], pre[j]);
            i++;
            j--;
        }

        return ans;
    }
};
