// insert at begin of Linked list
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *InsertBegin(Node *head, int x) // insert at begin
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
Node *InsertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    Node *curr = head;
    if (head == NULL)
        return temp;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = temp;
    return head;
}
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
int main()
{
    Node *head = NULL;
    head = InsertBegin(head, 30);
    head = InsertBegin(head, 20);
    head = InsertBegin(head, 10);
    head = InsertEnd(head, 40);
    printList(head);
    return 0;
}