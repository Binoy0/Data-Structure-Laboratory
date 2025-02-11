#include<bits/stdc++.h>
#define MAX 4

using namespace std;
int Q[MAX],f = -1, r = -1;

void printQueue()
{
    int i=f;
    for(; i!=r; i = (i+1)%MAX)
        cout<<Q[i]<<" ";
        cout<<Q[i];
        cout<<endl;
}

void Enque(int val)
{
    if((r+1)%MAX == f)
    {
        cout<<"Queue is FULL ! "<<endl;
        exit(0);
    }
    else if(f == -1 && r == -1)
    {
        f++;
        r++;
    }
    else
    {
        r = (r+1)%MAX;
    }
    Q[r] = val;
}

void Deque()
{
    int val;
    if(f == -1 && r == 1)
    {
        cout<<" Queue is Empty ! "<<endl;
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
        f = (f+1)%MAX;
    }
    cout<<"Deleted element : "<<val<<endl;
}

int main()
{
       Enque(210);
       Enque(401);
       Enque(20);
       Enque(2207);
       printQueue();
       Deque();
       Deque();
       Enque(6);
       Enque(8);
       Enque(9);
       printQueue();
}

