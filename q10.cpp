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
    long long int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    long long int count =0;
    // map<int, long long int> mymap;
    // for(int i=0;i<n;i++){
    //     if(a[i]!=2){count = count + mymap[a[i]];mymap[a[i]]++;}
    //     else{count = count + mymap[1];mymap[1]++;}
        
    // }
	// cout << count <<endl;
    map<long long int, long long int> mymap;
    for(int i=0;i<n;i++){
        if(a[i]!=2){mymap[a[i]]++;}
        else{mymap[1]++;}
    }
    for(auto& elem : mymap){
        count = count + (elem.second*(elem.second - 1))/2;
    }
    cout<<count<<endl;
    
  // 
    
    
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
}

