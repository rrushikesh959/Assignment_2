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

        int i=0,j=n-1;
        int sum = accumulate(a,a+n,0);
        int min_length=-1;
        
        while(i<=j){
            if(sum>=k){min_length=j-i+1;}
            if(a[i]<=a[j]){sum=sum-a[i];i++;}
            else{sum=sum-a[j];j--;}

        }
        cout<<min_length<<endl;
    }
}