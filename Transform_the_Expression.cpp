#include <bits/stdc++.h>
using namespace std;

int precedence(char symbol){
    if(symbol == '^'){
        return 3;
    }
    else if(symbol == '/' || symbol == '*'){
        return 2;
    }
    else if(symbol == '+' || symbol == '-'){
        return 1;
    }
    else{
        return 0;
    }
}

string postfix(string s){
    string ret;
    stack<char> util;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='('){
            
        }
    }
}

int main(){
    int t;
    cin>>t;

    string s;
    while(t--){
        cin>>s;
        cout<<postfix(s)<<"\n";
    }
}