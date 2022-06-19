#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int mx;
    int mn;
};

Pair minMax(int arr[],int n){
    struct Pair min_max;
    int i;

    if(n==1){
        min_max.mx=arr[0];
        min_max.mn=arr[0];
    }

    if(arr[0]>arr[1]){
        min_max.mx=arr[1];
        min_max.mn=arr[0];
    }
    else{
        min_max.mx=arr[0];
        min_max.mn=arr[1];
    }
    for(int i=2;i<n;i++){
        if(arr[i]<min_max.mn)
          min_max.mn=arr[i];
          else if(arr[i]>min_max.mx)
          min_max.mx=arr[i];
    }
    return min_max;
}

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



int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Result: "<<findMin(arr,n);
    struct Pair result=minMax(arr,n);
    cout<<"Minimum Element: "<<result.mn;
    cout<<"Maximum Element: "<<result.mn;
    return 0;
}