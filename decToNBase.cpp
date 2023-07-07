#include<bits/stdc++.h>
using namespace std;
string deciToNBase(int n, int num){
    string res="";
    int quo=num/n;
    vector<int>rem;
    
    rem.push_back(num%n);
    while(quo!=0){
        rem.push_back(quo%n);
        quo/=n;
        
        
    }
    for(int i=0;i<rem.size();i++){
        if(rem[i]>9){
            res=(char)(rem[i]-9+64)+res;
            
        }
        else{
            res=to_string(rem[i])+res;
        }
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int num;
    cin>>num;
    cout<<deciToNBase(n,num);
    return 0;
}
