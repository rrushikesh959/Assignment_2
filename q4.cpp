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
        int i=0;
        int j=n-1;
        int sum = accumulate(a,a+n,0);
        int max_sum=sum;
        
        while(i<=j){
            if(sum>max_sum){max_sum=sum;}
            if(a[i]<=a[j]){sum=sum-a[i];i++;}
            else{sum=sum-a[j];j--;}
        }
        cout<<max_sum<<endl;
        
    }
}