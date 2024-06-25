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
        int ans[2];
        ans[0]=0;
        ans[1]=n-1;
        while(ans[0]<ans[1]){
            int sum = a[ans[0]]+a[ans[1]];
            if(sum==k){break;}
            else if(sum>k){ans[1]--;}
            else{ans[0]++;}
        }
        ans[0]++;ans[1]++;
        
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }

}