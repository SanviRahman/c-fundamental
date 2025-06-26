#include<bits/stdc++.h>
using namespace std;
int biSearch(int n,int arr[],int search_value)
{

    int left=0;
    int right=n-1;
    int mid;

    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==search_value)
        {
            return mid;

        }
        else if(arr[mid]<search_value)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
}
int main()
{
    cout<<"Enter the array size:";
    int n;
    cin>>n;

    cout<<"Enter the number of array:";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter the search value:";
    int search_value;
    cin>>search_value;


    int result=biSearch(n,arr,search_value);

    if(result!=-1){
        cout<<"Search value index is:"<<result<<endl;
    }
    else{
         cout<<"Search value is not found"<<endl;
    }


    return 0;
}
