class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int player = 1;
        char a[3][3], ch = 'a';
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                a[i][j] = ch;
                ch++;
            }
        }
        for(auto x: moves) {
            if(player) a[x[0]][x[1]] = 'X';
            else a[x[0]][x[1]] = 'O';
            player ^= 1;
        }
        if(a[0][0] == a[0][1] && a[0][1] == a[0][2]) {
            if(a[0][0] == 'X') return "A";
            else return "B";
        }
        else if(a[1][0] == a[1][1] && a[1][1] == a[1][2]) {
            if(a[1][0] == 'X') return "A";
            else return "B";
        }
        else if(a[2][0] == a[2][1] && a[2][1] == a[2][2]) {
            if(a[2][0] == 'X') return "A";
            else return "B";
        }
        else if(a[0][0] == a[1][0] && a[1][0] == a[2][0]) {
            if(a[0][0] == 'X') return "A";
            else return "B";
        }
        else if(a[0][1] == a[1][1] && a[1][1] == a[2][1]) {
            if(a[0][1] == 'X') return "A";
            else return "B";
        }
        else if(a[0][2] == a[1][2] && a[1][2] == a[2][2]) {
            if(a[0][2] == 'X') return "A";
            else return "B";
        }
        else if(a[0][0] == a[1][1] && a[1][1] == a[2][2]) {
            if(a[0][0] == 'X') return "A";
            else return "B";
        }
        else if(a[2][0] == a[1][1] && a[1][1] == a[0][2]) {
            if(a[2][0] == 'X') return "A";
            else return "B";
        }
        else {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (a[i][j] >= 'a' && a[i][j] <= 'i') return "Pending";
                }
            }
            return "Draw";
        }
    }
};