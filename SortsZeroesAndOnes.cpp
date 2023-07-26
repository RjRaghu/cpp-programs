#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
// void swap(vector<int> arr, vector<int> brr)
// {
//     pr
// }
int main()
{
    vector<int> arr = {0, 1, 1, 0, 0, 1, 0, 1};
    int start = 0, end = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++)
    {
        while (start <= end)
        {
            if (arr[i] == 0)
            {
                swap(arr[start], arr[i]);
                start++;
            }
            else if (arr[i] == 1)
            {
                swap(arr[end], arr[i]);
                end--;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
}