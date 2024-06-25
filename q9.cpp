#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<set>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        string s;
        cin>>s;
        
        unordered_map< char, int > m;
        m.clear();
        int n=s.size();
        int i=0,j=0;
        int count=0;
        m[s[0]]=1;
        while(i<n && j<n){
            
            if(m.size()<k){
                j++;m[s[j]]++;
            }
            else if(m.size()==k){
                count++;
                j++;m[s[j]]++;
            }
            else{
                if(m[s[i]]==1){m.erase(s[i]);i++;}
                else{m[s[i]]--;i++;}
            }
        }
        cout<<count<<endl;
    }

}