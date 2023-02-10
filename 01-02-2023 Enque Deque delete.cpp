#include<bits/stdc++.h>
#define MAX 10
using namespace std;

int Q[MAX],f = -1,r = -1;

void printQueue()
{
    for(int i=f; i<=r; i++)
        cout<<Q[i]<<" ";
    cout<<endl;
}
void Enqueue(int val)
{
    if(r==MAX - 1)
    {
        cout<<"Queue is full!"<<endl;
        exit(0);
    }
    else if(f == -1 && r == -1)
    {
        f++;
        r++;
    }
    else
    {
        r++;
    }
    Q[r] = val;
}

void Dequeue()
{
    int val;
    if(f == -1 && r == 1)
    {
        cout<<"Queue is Empty!"<<endl;
        exit(0);
    }
    else if(f == r)
    {
        val = Q[f];
        f = r = -1;
    }
    else
    {
        val = Q[f];
        f++;
    }
    cout<<"Deleted element: "<<val<<endl;

}
int main()
{
    Enqueue(40);
    //printQueue();
    Enqueue(50);
    //printQueue();
    Enqueue(60);
    printQueue();
    Dequeue();
    Dequeue();
    printQueue();
}
