class Solution {
public:
    int numOfStrings(vector<string>& pat, string word) {
        int count = 0;

        for (auto &it : pat) {
            if (word.find(it) != string::npos)
                count++;
        }

        return count;
    }
};