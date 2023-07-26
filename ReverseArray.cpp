#include <iostream>
#include <limits.h>
using namespace std;
// void swap(int arr[s], int arr[e])
// {
//     int temp = arr[e];
//     arr[e] = arr[s];
//     arr[s] = temp;
// }
int main()
{
    int arr[4] = {3, 4, 5, 6};
    int size = 4;
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i];
    }
}