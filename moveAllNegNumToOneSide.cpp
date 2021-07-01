#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    //sort(arr,arr+n);
    int i=0,j=n-1;
    while(i<j){
        while(arr[i]<0 && i<j){
            i++;
        }
        while(arr[j]>=0 && j>i){
            j--;
        }
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}