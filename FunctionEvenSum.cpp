#include <iostream>
using namespace std;
getEvenSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int N;
    cout << "Enter the number of terms\n";
    cin >> N;
    int Sum = getEvenSum(N);
    cout << Sum;
}