#include <iostream>
#include <queue>

using namespace std;
void QueueReverse(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    int temp = q.front();
    q.pop();
    QueueReverse(q);
    q.push(temp);
}

int main()
{
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    cout << "The size of queue is: " << q.size() << endl;
    QueueReverse(q);
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
