#include<bits/stdc++.h>
using namespace std;
int findIndexOfZero(int arr[],int n){
 int i=0,j=n-1,mid;
 while(i<j){
   mid=i+((j-i)/2);
   if(arr[mid]==0){
    return mid;
   }
   else if(arr[mid]<0){
     i=mid+1;
   }
   else{
    j=mid-1;
   }
 }

}

int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    cout<<"Enter N elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Zero at Position : "<<findIndexOfZero(arr,n);
    return 0;
}