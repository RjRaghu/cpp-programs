#include <iostream>
#include <vector>
using namespace std;
int Partition(vector<int> &arr, int start, int pivot, int pivotIndex)
{
    int i = start - 1;
    int j = start;
    while (j < pivotIndex)
    {
        if (arr[pivotIndex] > arr[j])
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivotIndex]);
    return i;
}
void QuickSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivotIndex = end;
    int pivot = arr[pivotIndex];
    int p = Partition(arr, start, pivot, pivotIndex);
    QuickSort(arr, start, p-1);
    QuickSort(arr, p + 1, end);
}
int main()
{
    vector<int> arr = {7, 3, 6, 4, 2, 9, 1};
    QuickSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
