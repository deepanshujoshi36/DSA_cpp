#include <iostream>
using namespace std;

// to form doubly linked list
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// insert at head
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head != NULL)
    {
        n->next = head;
        head->prev = n;
    }
    head = n;
}

// to insert at tail
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
//c
// to display the list
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// to delete a head node
void deletionAtHead(node *&head, int key)
{
    node *todelete = head;
    head->next->prev = NULL;
    head = head->next;
    delete todelete;
}

// to delete a node from list
void deletion(node *&head, int key)
{
    if (head->data == key)
    {
        deletionAtHead(head, key);
        return;
    }
    node *temp = head;
    while (temp->data != key)
    {
        temp = temp->next;
    }
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    temp->prev->next = temp->next;
    delete temp;
}

// function calling
int main()
{
    node *head = NULL;
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 5);
    insertAtHead(head, 1);
    display(head);
    deletion(head, 1);
    display(head);
    return 0;
}
