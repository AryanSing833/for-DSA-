class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int p1=-1;
        int p2=-1;
        int count1=0;
        int count2=0;
        int c1=0,c2=0;
        int req_len=nums.size()/3;
        for(auto& x:nums){
            if(p1==x){
                count1++;
            }else if(p2==x){
                count2++;
            }else if(count1==0){
                p1=x;
                count1=1;
            }else if(count2==0){
                p2=x;
                count2=1;
            }else{
                count1--;
                count2--;
            }
        }
        for(int x:nums){
            if(x==p1){
                c1++;
            }else if(x==p2){
                c2++;
            }
        }
        vector<int>ans;
        
        if(c1>req_len) ans.push_back(p1);
        if(c2>req_len) ans.push_back(p2);
        if(ans.size()>0){
            return ans;
        }
        return ans;
    }
};