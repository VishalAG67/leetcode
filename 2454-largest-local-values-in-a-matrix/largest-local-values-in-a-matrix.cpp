class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& g) {
        int n = g.size();
        vector<vector<int>> rowMax(n);
        for(int i=0;i<n;i++) {
            for(int j=0;j<(n-2);j++) {
                int currMax = max(g[i][j], max(g[i][j+1], g[i][j+2]));
                rowMax[i].push_back(currMax);
            }
        }

        vector<vector<int>> res(n-2, vector<int>(n-2, 0));
        for(int j=0;j<(n-2);j++) {
            for(int i=0;i<(n-2);i++) {
                int currMax = max(rowMax[i][j], max(rowMax[i+1][j], rowMax[i+2][j]));
                res[i][j]=currMax;
            }
        }
        return res;
    }
};