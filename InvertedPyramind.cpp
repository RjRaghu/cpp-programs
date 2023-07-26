#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "Enter the number of rows\n";
    cin >> row;
    cout << "Enter the number of columns\n";
    cin >> column;
    for (int i = 0; i < row; i++)
    {
        for (int j = row - i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}