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
void PrintLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int FindMiddle(Node *&head)
{
    if (head == NULL)
    {
        cout << "No Middle in the LinkedList as the LL is empty " << endl;
        return -1;
    }
    if (head->next == NULL)
    {
        // Only one element
        return head->data;
    }
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
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
    cout << "The Middle element of the LinkedList is: " << FindMiddle(head);
}