class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 0;

        for(auto i : nums) {
            if(i < 0) {
                neg++;
            }
            if(i == 0) {
                return 0;
            }
        }

        return (neg % 2 == 0) ? 1 : -1;
    }
};