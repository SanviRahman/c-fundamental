#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the size of n:";
    int n;
    cin>>n;

    cout<<"Enter the array:";
    vector<int>arr(n,0);
    map<int,int>mp;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(auto &it : mp){
        cout<<"Frequency of "<< it.first<<" = "<<it.second<<endl;
    }
    return 0;
}
