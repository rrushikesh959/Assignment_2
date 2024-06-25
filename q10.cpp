#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<set>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<=n-k;i++){
            int max_s=a[i];
            for(int j=i;j<i+k;j++){
                max_s=max(max_s, a[j]);
            }
            cout<<max_s<<" ";
        }
        cout<<endl;
    }




}