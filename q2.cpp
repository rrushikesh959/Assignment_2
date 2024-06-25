#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<set>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    
        string s;
        cin>>s;
        int n=s.size();
        stack< char > p;
        while(!p.empty()){p.pop();}
        int l=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                p.push(s[i]);
            }
            else if(s[i]=='}' || s[i]==']'){
                if(p.empty()){l=1;break;}
                if(s[i]-p.top()!=2){l=1;break;}
                p.pop();
            }
            else{
                if(p.empty()){l=1;break;}
                if(s[i]-p.top()!=1){l=1;break;}
                p.pop();
            }
        }
        if(l==1){cout<<"FALSE"<<endl;}
        else{
            if(p.empty()){cout<<"TRUE"<<endl;}
            else{cout<<"FALSE"<<endl;}
        }
    }



}