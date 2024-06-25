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
        int count=0;
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=i;j<n;j++){
                temp= temp^a[j];
                if(temp==k){count++;}
                
            }
        }
        cout<<count<<endl;
    }

}




