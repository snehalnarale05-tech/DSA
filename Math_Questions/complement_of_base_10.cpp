class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int m = n;
        int mask = 0;
        // edge case(complemewnt of 0 is always 1)
        if (m == 0)
        {
            return 1;
        }
        while (m != 0)
        {
            mask = (mask << 1) | 1; // Left Shift
            m = m >> 1;             // Right Shift
        }
        int ans = (~n) & mask;
        return ans;
    }
};