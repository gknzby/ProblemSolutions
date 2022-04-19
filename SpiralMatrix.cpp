/*
*Spiral Matrix from LeetCode
*
*https://leetcode.com/problems/spiral-matrix/
*/

class Solution {
public:
    
    
    vector<int> spiralOrder(vector<vector<int>>& mat)
    {
        int jb = mat[0].size();
        int ib = mat.size();
        int jk = 0;
        int ik = 0;

        vector<int> ar;

        int i = 0, j = 0;

        while (ib > ik && jb > jk)
        {
            while (j < jb) ar.push_back(mat[i][j++]);
            j--;
            i = ++ik;
            if (ib == ik) break;

            while (i < ib) ar.push_back(mat[i++][j]);
            i--;
            j = --jb - 1;
            if (jb == jk) break;

            while (jk <= j) ar.push_back(mat[i][j--]);
            j++;
            i = --ib - 1;
            if (ib == ik) break;

            while (ik <= i) ar.push_back(mat[i--][j]);
            i++;
            j = ++jk;        
        }

        return ar;
        }
};
