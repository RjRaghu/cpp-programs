#include <iostream>
using namespace std;
class Node
{
private:
    /* data */
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void InsertHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}
void InsertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        head = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}
void InsertAtPosition(int data, int pos, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        int i = 1;
        Node *prevnode = head;
        while (i < pos)
        {
            prevnode = prevnode->next;
            i++;
        }
        Node *currNode = prevnode->next;
        Node *newnode = new Node(data);
        newnode->next = currNode;
        prevnode->next = newnode;
    }
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";

        temp = temp->next;
    }
}
int main()
{
    Node *tail = NULL;
    Node *first = NULL;
    InsertHead(first, tail, 20);
    InsertHead(first, tail, 30);
    InsertHead(first, tail, 40);
    InsertHead(first, tail, 50);
    InsertHead(first, tail, 60);
    InsertAtTail(first, tail, 10);

    printLL(first);
    InsertAtPosition(55, 2, first, tail);
    cout << endl;
    printLL(first);
}