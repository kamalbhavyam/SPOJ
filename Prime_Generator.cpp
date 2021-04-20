#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    int l,m;
    while(t--){
        cin>>l>>m;

        for(int i=l; i<=m; i++){
            if(isPrime(i)){
                cout<<i<<"\n";
            }
        }
        cout<<"\n";
    }
}