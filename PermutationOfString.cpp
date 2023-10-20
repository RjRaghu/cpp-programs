#include <iostream>
#include <string.h>
using namespace std;
void Permutation(string &s, int i)
{
    if (i >= s.length())
    {
    
        cout << s<<" ";
    
        return;
    }
    for (int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);
        Permutation(s, i+1);
        swap(s[i], s[j]); // BackTracking: Going to the same state as before
    }
}
int main()
{
    string s = "abc";
    int i = 0;
    Permutation(s, i);
    
    return 0;
}