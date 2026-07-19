class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        // m = number of valid elements in nums1
        // n = number of valid elements in nums2
        //  k = index of the next position in the sortedArray

        vector<int> sortedArray(m + n);
        int i = 0; // i is the index used to track the current position in nums1
        int j = 0; // j is the index used to track the current position in nums2
        int k = 0; // k is the index used to track the position in the sortedArray

        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
            {
                sortedArray[k] = nums1[i];
                i++;
                k++;
            }
            else
            {
                sortedArray[k] = nums2[j];
                j++;
                k++;
            }
        }
        while (i < m)
        {
            sortedArray[k] = nums1[i];
            i++;
            k++;
        }
        while (j < n)
        {
            sortedArray[k] = nums2[j];
            j++;
            k++;
        }
        // This loop copies the merged result from sortedArray back into nums1
        for (int s = 0; s < (m + n); s++)
        {
            nums1[s] = sortedArray[s];
        }
    }
};