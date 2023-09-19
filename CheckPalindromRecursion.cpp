#include <iostream>
#include <string>
using namespace std;
bool CheckPalindrome(string s, int j, int i)
{
    if (j <= i)
    {
        return true;
    }
    if (s[j] != s[i])
    {
        return false;
    }
    CheckPalindrome(s, j - 1, i + 1);
}

int main()
{
    string s = "r";
    int j = s.size() - 1;
    int i = 0;
    string str;
    bool ans = CheckPalindrome(s, j, i);
    if (ans)
    {
        cout << "The '" << s << "' is Palindrome";
    }
    else
        cout << "The " << s << " is not a Palindrome";
}