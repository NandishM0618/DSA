// Implementation of circular linked list and traversal
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *head;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printList1(Node *head)
{
    Node *curr = head;
    do
    {
        cout << curr->data << "-->";
        curr = curr->next;
    } while (curr != head);
    cout << endl;
}
void printList(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << "-->";
    for (Node *p = head->next; p != head; p = p->next)
        cout << p->data << "-->";
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printList1(head);
    return 0;
}