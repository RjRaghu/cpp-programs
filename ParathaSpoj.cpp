#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(int np, int nc, vector<int> R, int sol)
{
    int cookedPR = 0;
    for (int i = 0; i < R.size(); i++)
    {
        int CR = R[i], j = 1;
        int time_taken = 0;
        while (true)
        {
            if (time_taken + (j * CR) <= sol)
            {
                ++cookedPR;
                time_taken += j * CR;
                ++j;
            }
            else
                break;
        }
   
    }
     if(cookedPR>=np){
        return true;
    }
return false;
}
int minTimeToCook(int np, int nc, vector<int> R)
{
    int start = 0, mid;
    int highestElement = *max_element(R.begin(), R.end());
    int end = highestElement * (np * (np + 1)) / 2;
    int ans = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (isPossible(np, nc, R, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int nP, nC;
        cin >> nP>> nC;
        vector<int> R;
        for (int i = 0; i < nC; i++)
        {
            int n;
            cin >> n;
            R.push_back(n);
        }
        cout << minTimeToCook(nP, nC, R)<<endl;
        return 0;
    }
}