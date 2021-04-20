#include <bits/stdc++.h>
using namespace std;

int z(int n){
    if(n<5){
        return 0;
    }
    int count=0, temp;
    for(int i=5; i<=n; i*=5){
        count+=n/i;
    }
    return count;
}

int main(){
    int t;
    cin>>t;

    int n;
    while(t--){
        cin>>n;
        cout<<z(n)<<"\n";
    }
}