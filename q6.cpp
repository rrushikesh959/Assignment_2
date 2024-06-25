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
    long long int n,d;
    cin>>n>>d;
    long long int p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int i=0;
    int j=n-1;
    int count=0;
    int num=1;
    sort(p,p+n);
    while(i<=j){
        // cout<<"i: "<<i<<" j: "<<j<<" num: "<<num<<endl;
        if((p[j]*num)>d){j--;count++;num=1;}
        else{i++;num=num+1;}
    }
    cout<<count<<endl;
    
    
    return;
}
void myfunction(){
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

}
void fun2(){
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    
    // int tot=t;
    // int i=0;
    while(t--){
        solve();
        // i++;
        // if(tot!=19530){
        //     solve();
        // }
        // else{
        //     if(i==1408){fun2();}
        //     else{myfunction();}
        // }
    }
}
