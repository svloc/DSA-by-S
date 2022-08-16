#include<bits/stdc++.h>
using namespace std;

void InserationSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(temp<arr[j])
            arr[j+1]=arr[j];
            else 
            break;
        }
         arr[j+1]=temp;
    }
   
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array element: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    InserationSort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}