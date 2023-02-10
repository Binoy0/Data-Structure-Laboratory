#include<cstdio> //For printf & scanf
#include<iostream> //For input & output
using namespace std;

using namespace std;
int main()
{
    int a[20],n,position, val, j; cin>>n;
        cin>>n;

    for (int i=0;i<n;i++)
        cin>>a[i];

    cin>>position>>val; //scanf("%d %d", &pos, &val);

    for(j=n+1;j>position; j--)
        a[j] = a[j-1];

    a[j] = val;
    n++;

    for (int i=0;i<n;i++)
        cout<<a[i]<<"  ";
}
