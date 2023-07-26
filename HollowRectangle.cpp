#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "Enter the number of rown\n";
    cin >> row;
    cout << "Enter the number of columns\n";
    cin >> column;
    for (int i = 0; i < row; i++)
    {
        if (i == 0 || i == row - 1)
        {
            for (int j = 0; j < column; j++)
            {

                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            cout << "*";
            for (int k = 0; k < column - 2; k++)
            {
                cout << "  ";
            }
            cout << " *";
            cout << endl;
        }
    }
}
