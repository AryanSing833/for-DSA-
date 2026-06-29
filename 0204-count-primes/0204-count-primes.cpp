class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        if(n<=2) return 0;
        vector<bool>arr(n,true);
        arr[0]=0;
        arr[1]=1;
        for(int i=2; i*i<n; i++){
            if(arr[i]){
                for(int j=i*i; j<n; j+=i){
                    arr[j]=false;
                }
            }
        }
        for(int i=2; i<n; i++){
            if(arr[i]){
                count++;
            }
        }
        return count;
    }
};