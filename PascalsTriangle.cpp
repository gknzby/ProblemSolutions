/*
*Pascal's Triangle from LeetCode
*
*https://leetcode.com/problems/pascals-triangle/
*/
class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> base;
        base.resize(numRows);
        
        vector<int> first(1,1);
        base[0] = first;
        
        for(int i = 1; i < numRows; i++)
        {
            vector<int> sub;
            sub.resize(i + 1);
            
            sub[0] = 1;
            sub[i] = 1;
            
            for(int j = 1; j < i; j++)
            {
                sub[j] = base[i-1][j-1] + base[i-1][j];
            }
            
            base[i] = sub;
        }
        
        return base;
    }
};
