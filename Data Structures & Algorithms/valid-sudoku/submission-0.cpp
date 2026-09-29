class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int r = 0;
        int c = 0;
        vector<set<char>> gRows(9);
        vector<set<char>> gCols(9);
        //b -> mini boards
        for(int b = 0; b < 9; b++){
            
            if(c > 7){
                c = 0;
                r += 3;
            }
            set<char> all;
            vector<set<char>> row(9);
            vector<set<char>> col(9);

            for(int cr = r; cr < r+3; cr++){
                for(int cc = c; cc < c+3; cc++){
                    char val = board[cr][cc];
                    if(val != '.'){
                        if(all.count(val) == 1){
                            return false;
                        }
                        if (row[cr].count(val) == 1){
                            return false;
                        }
                        if (col[cc].count(val) == 1){
                            return false;
                        } 
                        if(gRows[cr].count(val) == 1){
                            return false;
                        }
                        if(gCols[cc].count(val) == 1){
                            return false;
                        }
                        all.insert(val);
                        row[cr].insert(val);
                        col[cc].insert(val);
                        
                        gRows[cr].insert(val);
                        gCols[cc].insert(val);
                    }
                }
            }

            c+=3;
        }

        
        return true;
    }
};
