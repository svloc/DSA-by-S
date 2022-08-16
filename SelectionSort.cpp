#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
   int minIndex,temp;
   for(int i=0;i<n-1;i++){
    minIndex=i;
    for(int j=i+1;j<n;j++){
        if(arr[minIndex]>arr[j])
        minIndex=j;
    }
    temp=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;

   }
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter N ele: ";
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    selectionSort(arr,n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}