// The array will be between [0,size] of the array

#include <iostream>
#include <vector>
using namespace std;
int Qoutient_search( int number, int divisor)
{
    int start = 0, end = number;
    int mid;
    int qoutient = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid * divisor == number)
        {
            qoutient = mid;
            break;
        }
        else if (mid * divisor > number)
        {
            end = mid - 1;
        }
        else{
           qoutient=mid;
            start = mid + 1;
        }
    }
    return qoutient;
}
int main()
{
    int n, d;
    cout << "Enter the dividend: ";
    cin >> n;
    cout << "Enter the divisor: ";
    cin >> d;
   
    int ans = Qoutient_search( n, d);
    cout<<ans;
    return 0;
}