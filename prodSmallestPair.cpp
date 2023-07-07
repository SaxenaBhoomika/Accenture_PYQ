#include<bits/stdc++.h>
using namespace std;
int prodSmallestPair(int n, int arr[], int sum){
    if(n<2){
        return -1;
    }
    sort(arr,arr+n);
    int s=0;
    s=arr[0]+arr[1];
    if(s<=sum){
        return (arr[0]*arr[1]);
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    cout<<prodSmallestPair(n,arr,sum);
    return 0;
}
