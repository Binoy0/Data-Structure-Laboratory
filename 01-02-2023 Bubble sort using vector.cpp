#include<bits/stdc++.h>

using namespace std;

void bubble_sort(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i] > v[j])
            swap(v[i],v[j]);
        }
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int>V;
    int val,n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>val;
        V.push_back(val);
    }
    bubble_sort(V);
}

