#include <iostream>
#include <string>
using namespace std;
void lastocc(string s, char x, int i, int &ans)
{

    if (i > s.size())
    {
        return;
    }
    if (s[i] == x)
    {
        ans = i;
    }
    lastocc(s, x, i + 1, ans);
}
int main()
{
    string s = "abcddedg";
    int ans = -1;
    char x='d';
    lastocc(s, x, 0, ans);
    cout << ans;
}