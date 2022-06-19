#include<bits/stdc++.h>
using namespace std;
int ChocolateDistribution(int arr[],int n,int m){
  sort(arr,arr+n);
  int mn_diff=INT_MAX;

  for(int i=0;i+m-1<n;i++){
    mn_diff=min(arr[i+m-1]-arr[i],mn_diff);
 }
  return mn_diff;
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
    int m;
    cout<<"Enter M:";
    cin>>m;
    cout<<"Result: "<<ChocolateDistribution(arr,n,m);

    return 0;
}