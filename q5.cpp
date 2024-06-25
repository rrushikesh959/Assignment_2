#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<set>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        unordered_map<int, int> m;
        m.clear();
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]=i+1;
        }
        sort(a,a+n);
        int i=0,j=n-1;
        while(i<j){
            int sum=a[i]+a[j];
            if(sum==k){break;}
            else if(sum>k){j--;}
            else{i++;}
        }
        if(i==j){cout<<-1<<" "<<-1<<endl;}
        else{cout<<m[a[i]]<<" "<<m[a[j]]<<endl;}
    }

    
}