class Solution {
public:
    long long sumAndMultiply(int n) {
        long long temp=0;
        long long sum=0;
        vector<long long >arr;
        while(n>0){
            long long rem=n%10;
            if(rem!=0){
                sum+=rem;
                arr.push_back(rem);
            }
            n/=10;
        }
        for(int i=arr.size()-1; i>=0; i--){
            temp=temp*10+arr[i];
        }
        return sum*temp;
    }
};