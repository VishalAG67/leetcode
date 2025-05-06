class Solution {
    public int countOperations(int num1, int num2) {
        if (num2 < num1) return countOperations(num2, num1);  // Ensure num1 <= num2
        
        int ans = 0;
        int t = 0;

        while (num1 != 0 && num2 != 0) {
            ans += num2 / num1;                 // Add the number of subtractions
            t = num2 % num1;                    // Get the remaining part
            num2 = Math.max(num1, t);           // Reassign max and min for next round
            num1 = Math.min(num1, t);
        }

        return ans;
    }
}