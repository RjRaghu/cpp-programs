#include <iostream>
using namespace std;
class Node
{
private:
    /* data */
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int findLen(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
void PrintLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *ReverseKNode(Node *&head, int k)
{
    if (head == NULL)
    {
        cout << "The LL is empty" << endl;
        return NULL;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    int count = 0;
    Node *temp = curr;
    for (int i = 0; i < k; ++i)
    {
        if (temp == NULL)
        {
            return head; // Not enough nodes, no reversal needed
        }
        temp = temp->next;
    }
    while (k > count && curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if (forward != NULL)
    {
        head->next = ReverseKNode(forward, k);
    }
    return prev;
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    PrintLL(head);
    head = ReverseKNode(head, 4);
    PrintLL(head);
}