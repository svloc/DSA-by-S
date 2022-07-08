#include<bits/stdc++.h>
using namespace std; 

int repeatedNumber(int arr[],int n){
    unordered_map<int,int>mp;
    sort(arr,arr+n);
    int r=0;
    for(int i=0;i<n;i++){
      mp[arr[i]]++;
      if(mp[arr[i]]==0)
      r=arr[i];
    }
    return r;

    
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
    cout<<repeatedNumber(arr,n);
    return 0;
}