#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
int data ;
Node *next;
};
Node *head;
void printlist (Node *current)
{
    while (current != NULL)
    {
        cout <<current->data<<" ";
        current =  current ->next;
    }
}
void create_node (int N)
{
    int first_value,n_val;
    Node *tmp,*n_node;
    cin>>first_value;
    head->data = first_value;
    head->next =  NULL ;
    tmp=head;
    for(int i=2;i<=N;i++)
    {
        n_node =(Node *)malloc(sizeof(Node));
        cin>>n_val;
        n_node->data = n_val;
        n_node->next = NULL;
        tmp->next = n_node;
        tmp= tmp->next;
    }
    printlist(head);
}

void del_begin ()
{
    head=head->next;
}
 void delete_end()
 {
     Node *tmp,*prev;
     tmp=head;
     while(tmp->next!=NULL)
     {
         prev=tmp;
         tmp=tmp->next;
     }
     prev->next=NULL;
     cout<<endl;
     printlist(head);
 }
 void delete_by_value(int val)
 {
     Node *tmp,*prev;
     tmp=head;
     while(tmp->next!=NULL)
     {
         if(tmp->next->data==val)
         {
             prev=tmp; //->next
             prev->next=tmp->next->next;
         }
         else{
            tmp=tmp->next;
         }
         //prev=tmp;

     }
     //prev->next=NULL;
     cout<<endl;
     printlist(head);
 }

  int main()
{
    head = (Node *)malloc(sizeof(Node));
    int n;
    cin>>n;
    create_node(n);
    cout<<endl;


    del_begin();
    cout<<endl;

    cout<<"deletion begin :"<<endl;
    printlist(head);
    cout<<"\n\ndel end: "<<endl;
    delete_end();
    cout<<"\n\ndel any position: "<<endl;
    delete_by_value(30);

}
