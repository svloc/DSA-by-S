#include<bits/stdc++.h>
using namespace std;

void ProductOfArrayExceptItself(int arr[],int n){
long long int p=1;
for(int i=0;i<n;i++){
    p=p*arr[i];
}
for(int i=0;i<n;i++){
    arr[i]=p/arr[i];
}
}
void ProductOfArrayExceptItself_1(int arr[],int n){
    int left[n],right[n],prod[n];
    left[0]=1;
    right[n-1]=1;
    
    for(int i=1;i<n;i++ ){
     left[i]=arr[i-1]*left[i-1];
    }
    
    for(int i=n-2;i>=0;i--){
        right[i]=arr[i+1]*left[i+1];
    }
   
   for(int i=0;i<n;i++){
    prod[i]=left[i]*right[i];
   }
   for(int i=0;i<n;i++){
    cout<<prod[i]<<" ";
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

    ProductOfArrayExceptItself_1(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}