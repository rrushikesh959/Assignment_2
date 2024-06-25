#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<set>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int u[n];
    map<int, vector< int > > mymap;
    for(int i=0;i<n;i++){
        cin>>u[i];
        mymap[u[i]].push_back(i);
    }
    int a[k];
    int b[k];
    for(int i=0;i<k;i++){
        cin>>a[i]>>b[i];
        int a_s=mymap[a[i]].size();
        int b_s=mymap[b[i]].size();
        if(a_s==0 || b_s==0){cout<<"NO"<<endl;}
        else{
            
            if(mymap[a[i]][0]>mymap[b[i]][b_s-1]){cout<<"NO"<<endl;}
            else{cout<<"YES"<<endl;}
        }
    }
    
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    // long long int a=1999999998;
    // long long int b=1000000000;
    // cout<<"a: "<<a<<endl;
    // cout<<"b: "<<b<<endl;
    // cout<<"a+b: "<<a+b<<endl;
    while(t--){
        solve();
    }
}

