#include<bits/stdc++.h>
using namespace std;
int operation(string str,int n){
    if(str==NULL){
        return -1;
    }
    int len=str.length();
    if(len%2==0){
        return -1;
    }
    int res=str[0]-'0';
    for(int i=1;i<len;i+=2){
        char operation=str[i];
        char operand=str[i+1];
        int digit=operand-'0';
        switch(operation){
            case 'A':
                res&=digit;
                break;
            case 'B':
                res|=digit;
                break;
            case 'C':
                res^=digit;
                break
            default:
                return -1;
        }
    }
    return res;
}
int main(){
    string str;
    getline(cin,s);
    int n=str.size();
    cout<<operation(str,n);
    return 0;
}
