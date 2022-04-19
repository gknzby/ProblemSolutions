/*
* Product Array Except Self from LeetCode
*
*https://leetcode.com/problems/product-of-array-except-self/
*/

class Solution {
public:    
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> ar(n, 0);
        
        int pro = 1;
        int zi = -1;
        
        for(int i = 0; i < n; i++)
        {
            if(nums[i])
                pro *= nums[i];
            else if(zi != -1)
                return ar;
            else
                zi = i;
        }
        
        if(zi != -1) ar[zi] = pro;
        else
        {
            for(int i = 0; i < n; i++)
            {
                ar[i] = pro/nums[i];
            }
        }
        
        return ar;

    }
};
