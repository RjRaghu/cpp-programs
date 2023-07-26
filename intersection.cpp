#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 6, 2};
    int arr1[] = {4, 8, 9, 9};
    vector<int> ans;
    int n = 0;
    int sizea = 5;
    int sizeb = 4;
    for (int i = 0; i < sizea; i++)
    {
        for (int j = 0; j < sizeb; j++)
        {
            if (arr[i] == arr1[j])
            {
                ans.push_back(arr[i]);
                n++;
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}