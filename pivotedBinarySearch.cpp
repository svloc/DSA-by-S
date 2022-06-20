#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int low,int high,int key){
 if(high<low)
 return -1;
 
 int mid=low+high/2;

 if(arr[mid]==key)
 return mid;

 else if(arr[mid]<key)
 return binarySearch(arr,(mid+1),high,key);
 
 else
 return binarySearch(arr,low,(mid-1),key);
}

int pivotElement(int arr[],int low,int high){
if(high<low)
return -1;

if(low==high)
return low;

int mid=low+high/2;

if(low<high && arr[mid]>arr[mid+1])
return mid;

if(mid>low && arr[mid]<arr[mid-1])
return mid-1;

if(arr[low]>=arr[mid]);
return pivotElement(arr,low,mid-1);

return pivotElement(arr,mid+1,high);

}

int pivotSearch(int arr[],int n,int key){
    int pivot=pivotElement(arr,0,n-1);

    if(pivot==-1)
    return binarySearch(arr,0,n-1,key);

    if(arr[pivot]==key)
    return pivot;

    if(arr[0]<=key)
    return binarySearch(arr,0,pivot-1,key);

  return binarySearch(arr,pivot+1,n-1,key);  
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N Element: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int k;
    cout<<"Enter K: ";
    cin>>k;
    cout<<"Index of elements: "<<pivotSearch(arr,n,k);
    return 0;    
}