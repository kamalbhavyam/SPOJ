#include <bits/stdc++.h>
using namespace std;

vector<int> fact(int n){
    vector<int> ret(200,0);

    ret[0]=1;
    int temp;
    for(int i=2; i<=n; i++){
        temp=0;
        for(int j=0; j<200; j++){
            ret[j]=(ret[j]*i)+temp;
            temp=ret[j]/10;
            ret[j]=ret[j]%10;
        }
    }
    return ret;
}

int main(){
    int t;
    cin>>t;

    int n;
    while(t--){
        cin>>n;

        vector<int> res = fact(n);
        int i=199;
        while(res[i]==0){
            i--;
        }
        for(; i>=0; i--){
            cout<<fact(n)[i];
        }
        cout<<'\n';
    }
}