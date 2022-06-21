#include<bits/stdc++.h>
using namespace std;
void nextPermutation(int arr[],int n){
    next_permutation(arr,arr+n);
}
 int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N element: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    nextPermutation(arr,n);
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
 }