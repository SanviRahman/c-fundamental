#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n],b[n];
    int ab[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
     for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

     for(int i=0; i<n; i++)
    {
        ab[i]=a[i]+b[i];
        cout<<ab[i]<<endl;
    }
}
