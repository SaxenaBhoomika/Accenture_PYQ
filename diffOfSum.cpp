#include<bits/stdc++.h>
using namespace std;
int diffOfSum(int n, int m){
    int s1=0,s2=0,temp;
    for(int i=1;i<=m;i++){
        if(i%n==0){
            s1+=i;
        }
        else{
            s2+=i;
        }
    }
    temp=abs(s1-s2);
    return temp;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    cout<<diffOfSum(n,m);
    return 0;
}
