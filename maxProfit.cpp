#include<bits/stdc++.h>
using namespace std;

int maxProfit(int arr[],int n){
int mx=0,curr=arr[0];

for(int i=0;i<n;i++){
 if(arr[i]<curr)
 curr=arr[i];
 else if(arr[i]-curr>mx)
 mx=arr[i]-curr;
}
return mx;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];
    cout<<"enter n element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxProfit(arr,n);
    return 0;
}