class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
     int even_count =0 ;
     int odd_count =0 ;

     for(int &p : position){
        if(p % 2 == 0){
             even_count++;
        }
        else{
            odd_count++;    
        }
     }
        return min(even_count , odd_count);
    }
};