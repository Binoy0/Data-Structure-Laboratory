
#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
int data;
Node *next;
};
Node *head;
int top=-1;
void printStack(Node *current)
{
    while(current != NULL)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
}

void create_node(int N)
{
    int first_value,n_val;
    Node *tmp,*n_node;
    cin>>first_value;
    head->data = first_value;
    head->next = NULL;
    tmp = head;
    top = top + 1;
    for(int i=2;i<=N;i++)
    {
        n_node = (Node *)malloc(sizeof(Node));
        cin>>n_val;
        n_node->data = n_val;
        n_node->next = NULL;
        tmp->next = n_node;
        tmp = tmp->next;
        top = top + 1;
    }
    //printList(head);
}

void push(int val)
{
    Node *newNode,*tmp;
    tmp = head;
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    top = top + 1;
    printStack(head);
    cout<<endl;
}

void pop()
{
    Node *tmp,*prev;
    tmp = head;
    while(tmp->next != NULL)
    {
        prev = tmp;
        tmp = tmp->next;
    }

    prev->next = NULL;
    top = top - 1;
    cout<<endl;
    if(top < 0)
        cout<<"Stack empty!"<<endl;
    else
         printStack(head);

}
int main()
{
    head = (Node *)malloc(sizeof(Node));
    int n;
    cin>>n;
    create_node(n);
    push(5);
    push(10);
    push(15);
    //cout<<top<<endl;
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
}
