#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    Node *head = NULL;

public:
    void addAtIndexFirst(int data)
    {
        // Three steps --. create a new Node , check for head == NULL , insert
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void PrintLinkedList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data <<"->";
            temp = temp->next;
        }
         cout << "NULL" << endl;
    }
};
int main()
{
    LinkedList ll;
    ll.addAtIndexFirst(5);
    ll.addAtIndexFirst(4);
    ll.addAtIndexFirst(3);
    ll.addAtIndexFirst(2);
    ll.addAtIndexFirst(1);
    ll.PrintLinkedList();
}