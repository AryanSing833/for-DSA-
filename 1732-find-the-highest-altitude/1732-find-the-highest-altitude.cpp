class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_ele=0;
        int val=0;
        for(int i=0; i<gain.size(); i++){
            val=gain[i]+val;
            max_ele=max(val,max_ele);
        }
        return max_ele;
    }
};