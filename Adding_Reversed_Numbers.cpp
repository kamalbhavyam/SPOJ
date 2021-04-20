#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    int temp=0;
    while(n>0){
        temp*=10;
        temp+=n%10;
        n/=10;
    }
    return temp;
}

int main(){
    int t;
    cin>>t;
    
    int l,m;
    while(t--){
        cin>>l>>m;
        cout<<reverse(reverse(l)+reverse(m))<<'\n';
    }
}