#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<set>
#include<vector>
#include<unordered_map>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n%2==1){cout<<"YES"<<endl;}
        else{
            int b[n-1];
            for(int i=0;i<n-1;i++){
                b[i]=a[i+1]-a[i];
            }
            long long int sum=0;
            for(int i=0;i<n-1;i=i+2){
                sum=sum+b[i];
            }
            if(sum>=0){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
    }
}

