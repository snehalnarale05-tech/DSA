class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int ans = 0;
        // XOR ing all elements
        for (int i = 0; i < nums.size(); i++)
        {
            ans = ans ^ nums[i];
        }
        // XOR [1,N-1]
        for (int i = 1; i < nums.size(); i++)
        {
            ans = ans ^ i;
        }
        return ans;
    }
};

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_set<int> sett;

        for (int i = 0; i < nums.size(); i++)
        {
            if (sett.find(nums[i]) != sett.end())
            {
                return nums[i];
            }
            sett.insert(nums[i]);
        }

        return -1;
    }
};