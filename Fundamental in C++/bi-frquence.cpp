#include<bits/stdc++.h>
using namespace std;

int result1=0,result2=0;
int frq=0;
int firstSearch(int n,int arr[],int search_value){
    int left=0;
    int right=n-1;
    int mid;


    while(left<=right){
        mid=(left+right)/2;

        if(arr[mid]==search_value){
            result1= mid;
            right=mid-1;
        }
        else if(arr[mid]<=search_value){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return result1;
}
int lastSearch(int n,int arr[],int search_value){
    int left=0;
    int right=n-1;
    int mid;

    while(left<=right){
        mid=(left+right)/2;

        if(arr[mid]==search_value){
            result2= mid;
            left=mid+1;
        }
        else if(arr[mid]<=search_value){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return result2;
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


    result1=firstSearch(n,arr,search_value);
    result2=lastSearch(n,arr,search_value);


    frq=result2-result1;
    if(frq!=){
        cout<<"Number of Frequency is:"<<frq<<endl;
    }
    else{
        cout<<"Invalid search value."<<endl;
    }

    return 0;
}
