#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter the number you want to check\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
    {
        cout << "The number is not Prime";
    }
    else

        cout << "The number is Prime";
}