#include<bits/stdc++.h>
using namespace std;
void Reverse(int arr[],int n){
    for(int i=n-1;i>=0;i--)
    cout<<arr[i]<<" ";
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N Element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Reverse(arr,n);
    return 0;   
}