

class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int n = numbers.length;
        
        for (int i = 0; i < n; i++) {
            int complement = target - numbers[i];
            
            
            int index = Arrays.binarySearch(numbers, i + 1, n, complement);
            
           
            if (index >= 0) {
                return new int[] {i + 1, index + 1}; 
            }
        }

        return new int[] {};  
    }
}