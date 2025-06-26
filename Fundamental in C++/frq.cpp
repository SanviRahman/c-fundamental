#include<bits/stdc++.h>
using namespace std;

int first,last;
int result = -1;
int frq=0;
int firstSearch(int n, int arr[], int search_value) {
    int left = 0;
    int right = n - 1;
    int mid;

    while(left <= right) {
        mid = (left + right) / 2;

        if(arr[mid] == search_value) {
            result = mid;
            right = mid - 1;
        }
        else if(arr[mid] < search_value) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return result;
}

int lastSearch(int n, int arr[], int search_value) {
    int left = 0;
    int right = n - 1;
    int mid;

    while(left <= right) {
        mid = (left + right) / 2;
        if(arr[mid] == search_value) {
            result = mid;
            left = mid + 1;
        }
        else if(arr[mid] < search_value) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    cout << "Enter the array size:";
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter the array:";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the search value: ";
    int search_value;
    cin >> search_value;

    first = firstSearch(n, arr, search_value);
    last = lastSearch(n, arr, search_value);


    if(first != -1 && last != -1) {
        frq=(last-first)+1;
        cout << "Number of Frequency:"<<frq<< endl;
    } else {
        cout << "Invalid search value"<< endl;
    }

    return 0;
}
