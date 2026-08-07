bool isPossible(vector<int> &arr, int n, int k, long long mid)
{

    int painterCount = 1;
    long long boardSum = 0;

    for (int i = 0; i < n; i++)
    {

        if (boardSum + arr[i] <= mid)
        {
            boardSum += arr[i];
        }
        else
        {
            painterCount++;

            if (painterCount > k || arr[i] > mid)
            {
                return false;
            }

            boardSum = arr[i];
        }
    }

    return true;
}

long long findLargestMinDistance(vector<int> &arr, int k)
{
    int n = arr.size();

    long long s = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    long long e = sum;
    long long ans = -1;

    long long mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}