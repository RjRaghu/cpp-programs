#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {4, 5, 2, 7, 3, 6};
    vector<int> ans;
    int n = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == 9)
            {
                cout << "The pair is (" << arr[i] << "," << arr[j] << ") \n";
            }
        }
    }
//     int count = 0;
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << " " << ans[i] << ",";
//         count++;
//         if (count % 2 == 0)
//         {
//             cout << ")";
//         }
//     }
}