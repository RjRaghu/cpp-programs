#include <iostream>
#include <stack>
using namespace std;
void InsertAtBottom(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }
    int temp = s.top();
    s.pop();
    InsertAtBottom(s, target);
    s.push(temp);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << "Before Insertion: " << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int target = s.top();
    s.pop();

    InsertAtBottom(s, target);
    cout << "After Insertion: " << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}