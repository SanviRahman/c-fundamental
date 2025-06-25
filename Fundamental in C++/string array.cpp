#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);

    int i=0;
    int counter=0;
    while(str[i]!= '\0'){
        counter++;
        i++;
    }
    cout<<counter<<endl;
}
