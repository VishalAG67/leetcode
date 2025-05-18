class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
      
       int idx=0;
       int jdx=0;
       int snake=0;
       for (int i=0;i<commands.size();i++){
        if (commands[i]=="RIGHT"){
            jdx++;
        }
        else if (commands[i]=="UP"){
            idx--;
        }
        else if (commands[i]=="DOWN"){
            idx++;
        }
        else{
            jdx--;
        }

       }
       return (idx*n)+jdx;
        
    }
};