#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[],int n){
sort(arr,arr+n);
return arr[n-1];
}
int findMin(int arr[],int n){
    int min=0;
    if(n==1){
        min=arr[0];
    }
    else{
        for(int i=1;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
    }
    return min;
}

// int findMax_1(int arr[],int n){

// if(n==1){
//     return arr[0];
// }
// else{
// int mid=n/2;
// int mx=arr[mid];
// for(int i=1;i<n;i++){
//     if(arr[i]>mid){
//         mx=arr[i];
//     }
//     else if (arr[i]){

//     }
// }
// }


}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Result: "<<findMin(arr,n);
    

    return 0;
}