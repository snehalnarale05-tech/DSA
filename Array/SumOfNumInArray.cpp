#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {9, 8, 7, 6, 4};
    int sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    cout << "Sum:" << sum << endl;

    return 0;
}
