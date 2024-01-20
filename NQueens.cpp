#include <iostream>
#include <vector>
using namespace std;
void printBoard(vector<vector<char>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }

        cout << endl;
    }
}
bool isSafe(vector<vector<char>> &board, int col, int row, int n)
{
    int i = row;
    int j = col;
    while (j >= 0)
    { // checking for row if it's safe
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
    }
    i = row;
    j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
        i--;
    }
    i = row;
    j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
        i++;
    }
    return true;
}
void solve(vector<vector<char>> &board, int col, int n)
{
    if (col >= n)
    {
        printBoard(board, n);
        cout << endl;
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (isSafe(board, col, row, n))
        {
            board[row][col] = 'Q';
            solve(board, col + 1, n);
            board[row][col] = '-';
        }
    }
}
int main()
{
    int n = 4; // No of rows and columns
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    solve(board, col, n);
}
