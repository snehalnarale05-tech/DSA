int firstocc(vector<int> &arr, int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return ans;
}

int lastocc(vector<int> &arr, int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return ans;
}

int count(vector<int> &arr, int n, int x)
{
    int first = firstocc(arr, n, x);

    if (first == -1)
    {
        return 0;
    }

    int last = lastocc(arr, n, x);

    return (last - first + 1);
}