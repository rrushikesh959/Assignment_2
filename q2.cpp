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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    int j=0;
    int count=0;
    int ans=0;
    
    vector< int > vec;
    vec.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){vec.push_back(a[i]);}
    }
    // cout<<"vec.size(): "<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++){
        while(j<vec.size()){
            if(vec[j]-vec[i]<n){count++;}
            else{break;}
            j++;
        }
        // cout<<"i: "<<i<<" count: "<<count<<endl;
        ans=max(ans, count);
        count--;
    }
    cout<<ans<<endl;
    
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
    int t;
    cin>>t;
    int tot=t;
    int i=0;
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
