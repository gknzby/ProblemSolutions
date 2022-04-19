/*
* Valid Sudoku from LeetCode
*
*
*/

//I used int variable for bit flag operations. 
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        int flags[3][9];
        for(int i = 0; i < 9; i++)
        {
            flags[0][i] = 0;
            flags[1][i] = 0;
            flags[2][i] = 0;
        }
        
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j] == '.') continue;
                
                int square = (i/3)*3 + j/3;
                int flag = (1 << (board[i][j] - 49));
                if((flags[0][i]  | flags[1][j]  | flags[2][square]) & flag)
                    return false;
                flags[0][i] = (flags[0][i] | flag);
                flags[1][j] = (flags[1][j] | flag);
                flags[2][square] = (flags[2][square] | flag);
            }
        }
        return true;
        
//         for(int i = 0; i < 9; i++)
//         {
//             for(int j = 0; j < 9; j++)
//             {
//                 if(board[i][j] == '.')
//                 {
                    
//                 }
//                 else
//                 {
//                     for(int col = 0; col < 9; col++)
//                     {
//                         if(col != i && board[col][j] == board[i][j]) return false;
//                     }
//                     for(int row = 0; row < 9; row++)
//                     {
//                         if(row != j && board[i][row] == board[i][j]) return false;
//                     }
                    
//                     int col = i/3, row = j/3;
//                     for(int k = 0; k < 3; k++)
//                     {
//                         for(int l = 0; l < 3; l++)
//                         {
//                             if(board[col*3 + k][row*3 + l] == board[i][j] && !(col*3 + k == i && row*3 + l == j)) return false;
//                         }
//                     }
//                 }
//             }
//         }
//        return true;
    }
};
