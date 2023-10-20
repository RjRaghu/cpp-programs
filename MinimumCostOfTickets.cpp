#include <iostream>
#include <vector>
using namespace std;
int MinCostTicket(vector<int> &days, vector<int> &costs, int i)
{
    if (i >= days.size())
        return 0;

    int cost1 = costs[0] + MinCostTicket(days, costs, i + 1);
    int j = i;
    int PassEndDay = days[i] + 7 - 1;
    while (j < days.size() && days[j] <= PassEndDay)
    {
        j++;
    }
    int cost7 = costs[1] + MinCostTicket(days, costs, j);
    PassEndDay = days[i] + 30 - 1;
    j = i;
    while (j < days.size() && days[j] <= PassEndDay)
    {
        j++;
    }
    int cost30 = costs[2] + MinCostTicket(days, costs, j);
    return min(cost1, min(cost7, cost30));
}
int main()
{
    vector<int> days = {1, 4, 6, 7, 8, 20};
    vector<int> costs = {2, 7, 15};
    int mincost = MinCostTicket(days, costs, 0);
    cout<<mincost;
}
