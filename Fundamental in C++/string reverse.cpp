#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;

    string s2="";
    int n=s1.length();
    for(int i=n-1; i>=0; i--)
    {
        s2+=s1[i];
    }
    cout<<s2<<endl;
    return 0;
}
