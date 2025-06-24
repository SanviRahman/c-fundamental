#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the size of n:";
    int n;
    cin>>n;

    cout<<"Enter the array:";
    vector<int>arr(n,0);
    set<int>st;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        st.insert(arr[i]);

    }


    cout << "Unique elements are: ";
    for (auto it : st) {
        cout << it << " ";
    }
    cout << endl;


    return 0;
}
