import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

class Solution {
    public int lastStoneWeight(int[] stones) {
        ArrayList<Integer> a = new ArrayList<>();
        for (int stone : stones) {
            a.add(stone);
        }

        while (a.size() > 1) {  
            Collections.sort(a); 
            int n = a.size();

            if (a.get(n - 1).equals(a.get(n - 2))) {
                a.remove(n - 1); 
                a.remove(n - 2); 
            } else {
                a.set(n - 2, a.get(n - 1) - a.get(n - 2)); 
                a.remove(n - 1); 
            }
        }

        return a.isEmpty() ? 0 : a.get(0); 
    }
}