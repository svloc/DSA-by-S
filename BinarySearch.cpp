#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int n,int k){
int left=0,right=n-1,mid;
while(left<=right){
    mid=left+(right-left)/2;
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]<mid){
        left=mid-1;
    }
    else{
        right=mid+1;
    }
}
return -1;
}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N Element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter Search item: ";
    cin>>k;
    cout<<"Item Found at: "<<BinarySearch(arr,n,k);
    return 0;
}