class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
       int n=grid.size();
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if((i==j or i+j==n-1) and grid[i][j]==0) return 0;
               if(i!=j and i+j!=n-1 and grid[i][j]!=0) return 0;
           }
       }
       return 1;
    }
};