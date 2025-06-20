class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) 
    {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int a = INT_MIN, b = INT_MIN;
            if(i - k >= 0) a = nums[i - k];
            if(i + k < nums.size()) b = nums[i + k];
            ans += a < nums[i] && b < nums[i] ? nums[i] : 0;
        }    
        return ans;
    }
};