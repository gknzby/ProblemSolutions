/*
Two Sum from LeetCode
https://leetcode.com/problems/two-sum/
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> tS;
        
        int min = nums[0];
        int max = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] < min)
            {
                min = nums[i];
            }
            if(max < nums[i])
            {
                max = nums[i];
            }
        }
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] + min <= target && target <= nums[i] + max)
            {
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if (nums[i] + nums[j] == target)
                    {
                        return {i, j};
                    }
                }
            }                
        }
        return tS;
    }
};
