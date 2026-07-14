class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> RotatedArray(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            RotatedArray[(i + k) % nums.size()] = nums[i];
        }
        nums = RotatedArray;
    }
};