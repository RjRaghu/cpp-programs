// Maximum sum of non adjacent elements in an array in which no two elements can be adjacent
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void solve(vector<int> &arr, int sum, int i, int &maxi)
{
    if (i > arr.size())
    {
        maxi = max(sum, maxi);
        return;
    }
    // include
    solve(arr, sum + arr[i], i + 2, maxi);
    // exclude
    solve(arr, sum, i + 1, maxi);
}
int main()
{

    vector<int> arr{2, 1, 11, 9};
    int sum = 0;
    int i = 0;
    int maxi = INT_MIN;
    solve(arr, sum, i, maxi);
    cout << maxi << endl;
}