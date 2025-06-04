class Solution {
   public static boolean isMonotonic(int[] nums) {

		int n = nums.length;
		boolean incresing = true;  
		boolean decreasing = true;  

		for (int i = 0; i < n - 1; i++) {

			if (nums[i] > nums[i + 1]) {
				incresing = false;
			}

			if (nums[i] < nums[i + 1]) {
				decreasing = false;
			}
		}

        // return the true boolean
		return incresing || decreasing;

	}
}