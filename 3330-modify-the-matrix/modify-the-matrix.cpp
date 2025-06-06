class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> answer = matrix;
        vector<int> max(matrix[0].size(),INT_MIN);
        for(int j=0;j<answer[0].size();j++){
            for(int i =0;i<answer.size();i++){
                    if(answer[i][j]>max[j]){
                        max[j] = answer[i][j];
                    }
                }
            }
        for(int i=0;i<answer.size();i++){
            for(int j=0;j<answer[0].size();j++){
                if(answer[i][j]==-1){
                    answer[i][j]=max[j];
                }
            }
        }
        return answer;
    }
};