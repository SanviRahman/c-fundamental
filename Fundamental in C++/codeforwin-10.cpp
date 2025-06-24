#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Input character:";
    cin>>ch;

    if(ch>='A' and ch<='Z'){
        cout<<ch<<" "<<"is uppercase alphabet"<<endl;
    }
    else{
        cout<<ch<<" "<<"is lower alphabet"<<endl;
    }
}
