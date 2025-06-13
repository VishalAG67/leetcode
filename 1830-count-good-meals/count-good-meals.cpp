class Solution {
public:
    int countPairs(vector<int>& arr) {
        long M = 1000000007;
        int n = arr.size();
        unordered_map<int,int> powers;
        
        long long ans=0;

        for(int i=0;i<n;i++){
            int itr=1;
            for(int j=0;j<22;j++){
                if(powers.count(itr-arr[i])){
                    ans += powers[itr-arr[i]];
                }
                itr*=2;
            }
            powers[arr[i]]++;
        }

        return ans%M;
    }
};