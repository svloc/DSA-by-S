#include<bits/stdc++.h>
using namespace std;

void ProductOfArrayExceptItself(int arr[],int n){
long long int p;
for(int i=0;i<n;i++){
    p=p*arr[i];
}
for(int i=0;i<n;i++){
    arr[i]=p/arr[i];
}

}

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elelmnts: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    ProductOfArrayExceptItself(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}