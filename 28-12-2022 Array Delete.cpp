#include<cstdio> //For printf & scanf
#include<iostream> //For input & output
using namespace std;

 int main()
 {
    int a[201], n, flag, val, j;
        cin>>n;

    for (int i=0;i<n;i++)
        cin>>a[i];

    cin>>val; //scanf("%d%d", &pos, val);
    for (int i=0;i<n;i++)
    {
        if(a[i] = val)
        {
            for(j=i;j<n;j++)

                a[j]=a[j+1];
                flag = 1;
                n--;
        }
    }
    if(flag==0)
        cout<<"Val not found!!"<<endl;
    else
    {
        for(int i=0;i<n;i++)
            cout<<a[i]<<"  ";
    }
 }
