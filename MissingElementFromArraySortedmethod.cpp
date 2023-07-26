// Sorted method
#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 3, 4, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    sort(arr.begin(), arr.end() );

    for (int i = 0; i < n; i++)
    {
        int index=arr[i];
        if (arr[i] != i + 1)
        {
            cout << i+1 << " ";
        }
    }
    return 0;
}