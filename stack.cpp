#include <iostream>
using namespace std;
class Stack
{
private:
    int *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
      arr = new int[size];
        this->size = size;
        top = -1;
    }
    void push(int data)
    {
        if (size - top <1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        else
        {
            top--;
        }
    }
    int getTop()
    {
        if (top == -1)
        {
            cout << "Stack is empty " << endl;
        }
        else
            return arr[top];
    }
    int CurrSize()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    while (!s.isEmpty())
    {
        cout << s.getTop() << endl;
        s.pop();
    }
}