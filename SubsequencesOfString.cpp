#include <iostream>
#include <string>
using namespace std;
void printSubsequeces(string str, string output, int i)
{
    // Base Case
    if (i >= str.size())
    {
        cout << output << endl;
        return;
    }
    // Exclude
    printSubsequeces(str, output, i + 1);
    // Include
    output.push_back(str[i]);
    printSubsequeces(str, output, i + 1);
}

int main()
{
    string str = "abc";
    string output = "";
    int i = 0;
    printSubsequeces(str, output, i);
    return 0;
}