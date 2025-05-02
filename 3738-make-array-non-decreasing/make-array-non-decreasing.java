class Solution {
    public int maximumPossibleSize(int[] nums) {
        int c = 0;
        int start = nums[0];
        for(int i = 0;i<nums.length;i++){
            if(nums[i]>=start){
                c++;
                start = nums[i];
            }
        }
        return c;
    }
}