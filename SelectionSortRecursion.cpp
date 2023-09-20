#include <iostream>
#include <vector>
using namespace std;
void SelectionSort(vector<int> &nums, int i)
{

    if (i == nums.size() - 1)
    {
        return;
    }
    int j = i + 1;
    int minidx = i;
    while (j < nums.size())
    {
        if (nums[j] < nums[minidx])
        {
            minidx = j;
        }
        j++;
    }
    if (minidx != i)
    {
        swap(nums[minidx], nums[i]);
    }
    SelectionSort(nums, i + 1);
}
int main()
{
    vector<int> nums = {5, 2, 6, 8};
    int i = 0;
    int minidx = 0;
    SelectionSort(nums, i);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
}