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
        int n;
        cin>>n;
        int x=0;
        for(int i=0;i<=n;i++){
            if((i^n)==(n+i)){x++;}
        
        }
        cout<<x<<endl;
    }

}