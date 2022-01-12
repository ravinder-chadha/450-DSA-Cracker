//problem link: https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int l = nums.size();
        int flag = 0;
        int point = -1;
        for (int i = 0; i < l - 1; i++)
        {
            if (nums[i] < nums[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            for (int i = l - 1; i >= 0; i--)
            {
                for (int j = l-1; j >= i; j--)
                {
                    if (nums[i] < nums[j])
                    {
                        int temp = nums[j];
                        nums[j] = nums[i];
                        nums[i] = temp;
                        point = i;
                        goto out;
                    }
                }
            }
        out:
            sort(nums.begin() + point + 1, nums.end());
        }
    }
};