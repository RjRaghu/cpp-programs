#include <iostream>
#include <vector>
using namespace std;
int FindPivot(vector<int> nums)
{
    int start = 0, end = nums.size() - 1;
    int mid = (start + (end - start)/2) ;
    while (end > start)
    {
        if (nums[mid] > nums[mid + 1])
        {
            return nums[mid];
        }
        else if (nums[mid - 1] > nums[mid])
        {
            return nums[mid - 1];
        }
        else if (nums[mid] < nums[mid + 1])
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
            mid = (start + (end - start)/2) ;
            
    }
    return -1;
}
int main()
{
    int n; // Number of elements to be entered
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> vec;

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num); // Add the entered value to the vector
    }

    int pivot_element = FindPivot(vec);
    if (pivot_element == -1)
    {
        cout << "No pivot element";
    }
  else
    cout << "Pivot Element is: " << pivot_element;
}