#include<bits/stdc++.h>
using namespace std;
int largeSmallSum(vector<int>&arr){
    int n=arr.size();
    vector<int>eS;
    vector<int>oS;
    if(n<=3){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            eS.push_back(arr[i]);
        }
        else{
            oS.push_back(arr[i]);
        }
    }
    sort(eS.begin(),eS.end());
    sort(oS.begin(),oS.end());
    return eS[1]+oS[1];
}

int main(){
    vector<int> arr={3,2,1,7,5,4,4,5};
    int res=largeSmallSum(arr);
    cout<<res;
    return 0;
    
}
