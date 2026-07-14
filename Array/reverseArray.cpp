#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {5, 6, 7, 2, 1};

    int i = 0;
    int j = arr.size() - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "Reversed Array:";

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}