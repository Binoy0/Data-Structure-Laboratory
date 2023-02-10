#include<iostream>
using namespace std;
void insertValue(int a[],int n,int c,int d)
{
    for(int i=n;i>c;i--)
    {
        a[i]=a[i-1];
    }
    a[c]=d;
    for(int i=0;i<=n;i++)cout<<a[i]<<" ";
    cout<<endl;
}
void deleteValue(int a[],int n,int y)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==y)
        {
            int j=i;
            while(j<n-1)
            {
                a[j]=a[j+1];
                j++;
            }
            i--;
            n--;
        }
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int n,x;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Input a number (0=insert 1=delete) ";
    cin>>x;
    switch(x)
    {
        case 0:
        {
            int c,d;
            cin>>c>>d;
            insertValue(a,n,c,d);
            break;
        }
        case 1:
        {
            int y;
            cin>>y;
            deleteValue(a,n,y);
            break;
        }
        default:
        {
            cout<<"unvalid"<<endl;
        }
    }
    return 0;
}


