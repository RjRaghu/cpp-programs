#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isPossible(vector<long long int> trees, long long int m, long long int sol, long long int k)
{
    long long int wood_collected = 0;
    for (int i = 0; i < trees.size(); i++)
    {
        if (trees[i] >= sol)
        {
            wood_collected += trees[i] - sol;
        }
    }
    if (wood_collected >= k)
    {
        return true;
    }
    else
        return false;
}

long long int maxSlawbladeHeight(vector<long long int> trees, long long int m, long long int k)
{
    long long int start = 0, end, ans = -1;
    end = *max_element(trees.begin(), trees.end());
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        if (isPossible(trees, m, mid, k))
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return ans;
}

int main()
{
    // m=number of trees and k=amount of wood needed

    long long int m, k;
    cin >> m >> k;
    long long int height;
    vector<long long int> trees;
    while (m--)
    {
        cin >> height;
        trees.push_back(height);
    }
    cout << maxSlawbladeHeight(trees, m, k);
    return 0;
}