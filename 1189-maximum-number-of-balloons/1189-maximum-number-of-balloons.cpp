class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> arr(26, 0);

        for(char ch : text) {
            arr[ch - 'a']++;
        }

        return min({arr[1], arr[0], arr[11]/2, arr[14]/2, arr[13]});
    }
};