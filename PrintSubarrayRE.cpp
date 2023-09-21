#include <iostream>
#include <vector>
using namespace std;
void printSubarray_util(vector<int> arr, int i, int j)
{

    if (j == arr.size())
    {
        return;
    }
    for (int k = i; k <= j; k++)
    {
        cout << arr[k];
    }

    cout << endl;
    printSubarray_util(arr, i, j + 1);
}
void printSubarray(vector<int> arr)
{
    for (int start = 0; start < arr.size(); start++)
    {
        int end = start;
        printSubarray_util(arr, start, end);
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int i = 0;
    printSubarray(arr);
    return 0;
}