
class Solution
{
public:
    bool isPossible(int n, int k, vector<int> &stalls, int sol)
    {
        int c = 1;
        int pos = stalls[0];
        for (int i = 0; i < n; i++)
        {
            if (stalls[i] - pos >= sol)
            {
                c++;
                pos = stalls[i];
            }
            if (c == k)
            {
                return true;
            }
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls)
    {

        sort(stalls.begin(), stalls.end());
        int ans = -1;
        int start = 0;
        int end = stalls[stalls.size() - 1] - stalls[0];
        int mid = start + (end - start) / 2;
        while (end >= start)
        {
            if (isPossible(n, k, stalls, mid))
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return ans;
    }
};