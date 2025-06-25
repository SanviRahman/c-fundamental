#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int even_sum=0,odd_sum=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even_sum+=arr[i];
        }
        else{
            odd_sum+=arr[i];
        }
    }
    cout<<"Even:"<<even_sum<<endl;
    cout<<"Odd:"<<odd_sum<<endl;
}
