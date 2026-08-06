class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {

        // Step 1: Find total sum of array
        int totalSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            totalSum += nums[i];
        }

        // Step 2: Initialize left sum
        int leftSum = 0;

        // Step 3: Traverse array and check pivot index
        for (int i = 0; i < nums.size(); i++)
        {

            // Calculate right sum
            int rightSum = totalSum - leftSum - nums[i];

            // Check if current index is pivot
            if (leftSum == rightSum)
            {
                return i;
            }

            // Update left sum for next iteration
            leftSum += nums[i];
        }

        // No pivot index found
        return -1;
    }
};