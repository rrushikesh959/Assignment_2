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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int min_a = a[0];
        for(int i=0;i<n;i++){
            if(min_a>a[i]){min_a=a[i];break;}
        }
        cout<<min_a<<endl;
    }
}