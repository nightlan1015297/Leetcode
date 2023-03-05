#include "vector"
using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false};
        bool columns[9][9] = {false};
        bool squares[9][9] = {false};

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if (board[i][j] != '.'){
                    if (rows[i][board[i][j]-'1']){
                        return false;
                    }
                    rows[i][board[i][j]-'1'] = true;
                    if (columns[j][board[i][j]-'1']){
                        return false;
                    }
                    columns[j][board[i][j]-'1'] = true;
                    int square_index = (j/3)+(i/3+1)*3;
                    if(squares[square_index][board[i][j]-'1']){
                        return false;
                    }
                    squares[square_index][board[i][j]-'1'] = true;
                }
            }
        }
        return true;
    }

};

//
// Created by dim on 2/25/23.
//
