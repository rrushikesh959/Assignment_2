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
    long long int a[2*n];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    sort(a,a+2*n);
    long long int sum=0;
    for(int i=1;i<n;i++){
        sum=sum+abs(a[i]-a[i-1])+abs(a[n+i]-a[n+i-1]);
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<a[n+i]<<endl;
    }


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

