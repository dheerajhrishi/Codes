#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void push(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();
 
    /* 2. put in the data */
    new_node->data = new_data;
 
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
 
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}
 
void printList(Node*n){
    while (n!= NULL)
    {
       cout<<n->data;
       n=n->next;

       cout<<" ";
    }
    
}
int main()
{
    Node *head = NULL;
    Node *Second = NULL;
    Node *third = NULL;

    head = new Node();
    Second = new Node();
    third = new Node();

    head->data = 1;
    head->next = Second;

    Second->data = 2;
    Second->next = third;

    third->data = 3;
    third->next = NULL;

    push(head,5);


    printList(head);

    return 0;
}