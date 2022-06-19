#include<bits/stdc++.h>
using namespace std;

int maxSubArray(int arr[],int n){
    int currSum=0,mxSum=INT32_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        mxSum=max(currSum,mxSum);
        if(currSum<0)
          currSum=0;

    }
    return mxSum;
   
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
    cout<<"Result: "<<maxSubArray(arr,n);
    return 0;
}