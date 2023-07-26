// Missing Elements from an array with duplicates elements E [1,N]
// visiting approach
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 3, 5, 3};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            cout << i + 1 << " ";
        }
    }
    return 0;
}