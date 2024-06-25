#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int b[n][m];
        int b_clone[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>b[i][j];
                b_clone[i][j]=b[i][j];
            }
        }
        if(n==1 || m==1){cout<<"YES"<<endl;continue;}
        for(int i=0;i<n;i++){
            sort(b_clone[i],b_clone[i]+m);
        }
        int l=-1;
        for(int i=0;i<n;i++){
            int curr_row_a[m];
            int curr_row_b[m];
            for(int j=0;j<m;j++){
                curr_row_a[j]=a[i][j];
            }
            sort(curr_row_a,curr_row_a+m);
            l=-1;
            for(int j=0;j<n;j++){
                if(curr_row_a[0]==b_clone[j][0]){l=j;break;}
            }
            if(l==-1){break;}
            else{
                for(int j=0;j<m;j++){
                    if(curr_row_a[j]!=b_clone[l][j]){l=-1;break;}
                }
                if(l==-1){break;}
            }
            

        }
        if(l==-1){cout<<"NO"<<endl;}
        else{
            int b_clawn[m][n];
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    b_clawn[i][j]=b[j][i];
                }
            }
            for(int i=0;i<m;i++){
                sort(b_clawn[i], b_clawn[i]+n);
            }
            for(int i=0;i<m;i++){
                int curr_column_a[n];
                for(int j=0;j<n;j++){
                    curr_column_a[j]=a[j][i];
                }
                sort(curr_column_a,curr_column_a+n);
                l=-1;
                for(int j=0;j<m;j++){
                    if(curr_column_a[0]==b_clawn[j][0]){l=j;break;}
                }
                if(l==-1){break;}
                else{
                    for(int j=0;j<n;j++){
                        if(curr_column_a[j]!=b_clawn[l][j]){l=-1;break;}
                    }
                    if(l==-1){break;}
                }
                if(l==-1){break;}
                
            }
            if(l==-1){cout<<"NO"<<endl;}
            else{cout<<"YES"<<endl;}
        }
    }
}
