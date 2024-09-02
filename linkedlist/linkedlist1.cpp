
// code to form linked list and insert no at tail and display it

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// to insert the element at the start of the list

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// to insert element at the end of list

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// to display the liked list

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// to search the element
bool search(node *&head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// to delete an element from the list

void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->data == val)
    {
        node *todelete = head;
        head = head->next;
        delete todelete;
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

// to reverse the linked list
node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}

// to reverse the linked list using recurssion
node *reverserecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = reverserecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

//to reverse the list at k nodes
node *reversek(node *&head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reversek(nextptr, k);
    }

    return prevptr;
}

// to make a cyclic linked list
void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *starnode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            starnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = starnode;
}

// to detect the cycle in linked list
bool detectCycle(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

// to delete a cycle in linked list
void deleteCycle(node *&head)
{
    node *fast = head;
    node *slow = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    fast = head;
    while (slow->next == fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

// the calling of function will be done inside main
int main()
{
    node *head = NULL;
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtHead(head, 7);
    display(head);
    display(head);
    cout << detectCycle(head) << endl;
    makeCycle(head, 2);
    cout << detectCycle(head) << endl;
    
}
