#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<set>
#include<vector>
#include<unordered_map>
using namespace std;

void solve(){
    int n;
    cin>>n;
    long long int a[n];
    unordered_map<long long int, long long int > mymap;
    unordered_map<long long int, long long int > mymap2;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        mymap[i]=a[i];
    }
    
    sort(a,a+n);
    long long int curr=a[0];
    long long int j=1;
    for(int i=0;i<n;i++){
        // cout<<"i at start: "<<i<<" j: "<<j<<" curr: "<<curr<<endl;
        if(i>=j){curr=curr+a[i];j++;}
        // cout<<"i at second: "<<i<<" j: "<<j<<" curr: "<<curr<<endl;
        while(j<n){
            // cout<<"j: "<<j<<" a[j]: "<<a[j]<<" curr: "<<curr<<endl;
            if(curr>=a[j]){curr=curr+a[j];}
            else{break;}
            j++;

        }
        // cout<<"i at end: "<<i<<" j: "<<j<<" curr: "<<curr<<endl;
        mymap2[a[i]]=j-1;
    }
    for(int i=0;i<n;i++){
        cout<<mymap2[mymap[i]]<<" ";
    }
    cout<<endl;

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

