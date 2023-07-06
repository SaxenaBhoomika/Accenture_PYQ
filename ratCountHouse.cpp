#include<bits/stdc++.h>
using namespace std;
int calc(int r, int unit, int n,int arr[]){
    if(n==0){
        return -1;
    }
    int totalreq=r*unit;
    int sum=0,i=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
        if(sum>=totalreq){
            break;
        }
    }
    if(totalreq>sum){
        return 0;
    }
    else{
        return i+1;
    }
}
int main(){
    int r;
    cin>>r;
    int unit;
    cin>>unit;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
        
    }
    cout<<calc(r,unit,n,arr);
    return 0;
    
}
