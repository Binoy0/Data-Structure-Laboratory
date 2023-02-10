#include<bits/stdc++.h>
using namespace std;

typedef struct Node
{
    int data;
    Node *next;
};

void printList(Node *current)
{
    while(current != NULL)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
}

void createnode(int N,Node *head)
{
    int first_val,n_val;
    Node *tmp,*n_node;
    cin>>first_val;
    head->data = first_val;
    head->next = NULL;
    tmp = head;
    for(int i=2;i<=N;i++)
    {
        n_node = (Node *)malloc(sizeof(Node));
        cin>>n_val;
        n_node->data = n_val;
        n_node->next = NULL;
        tmp->next = n_node;
        tmp = tmp->next;
    }

    printList(head);
}
int main()
{
    Node *head;
    head = (Node *)malloc(sizeof(Node));
    int n;
    cin>>n;
    createnode(n,head);
}
