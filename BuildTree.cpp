#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
};
void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->data;
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
            q.push(temp->right);
    }
}
Node *BuildTree()
{
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "Enter the data for left node of " << data << endl;
    root->left = BuildTree();
    cout << "Enter the data for right node of " << data << endl;
    root->right = BuildTree();
    return root;
}
void Inorder(Node *root) // LNR
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
void Preorder(Node *root) // NLR
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}
void Postorder(Node *root) // LRN
{
    if (root == NULL)
    {
        return;
    }
    Preorder(root->left);
    Preorder(root->right);
    cout << root->data << " ";
}
int main()
{
    Node *root = NULL;
    root = BuildTree();
    levelOrder(root);
}