#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define endl "\n"
#define pb push_back
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define sz size()
ll vector_sum(vector<int> v);
ll vector_max(vector<int> v);
typedef vector<ll> vl;
typedef vector<pair<int,int>> vpii;
typedef vector<int> vi;
typedef map<int,int> mi;

vector<int>bit;

 
   void update(int bound,int ind,int val)
   {
    for(;ind<=bound;ind+=(ind&(-ind)))
        bit[ind]+=val;
   }

   int query(int ind)
   {
    int res=0;
    for(;ind>0;ind-=(ind&(-ind)))
        res+=bit[ind];
    return res;
   }






bool cmp(pair<pair<int,int>,int>a,pair<pair<int,int>,int>b)
{
    if(a.first.first==b.first.first)
    {
        return b.first.second < a.first.second;
    }
    return a.first.first < b.first.first;
}

signed main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    ll t;cin>>t;
    while(t--)
    {
      
        int n;cin>>n;
        std::vector<pair<pair<int,int>,int>> v;
        set<int>st;
        for (int i = 0; i < n; ++i)
        {
            int a,b;
            cin>>a>>b;
            a+=1e9;
            b+=1e9;
            v.pb({{a,b},i});
            st.insert(b);
        }

        sort(v.begin(), v.end(),cmp);
        map<int,int>mp;
        int chk=1;
        for(auto it:st)
        {
            mp[it]=chk;
            chk++;
        }
        // cout<<chk<<"a ";
    vector<int>temp(n+1,0);

    bit.clear();
    bit.resize(2e5+2,0);
    
    update(chk, 1, 1);
    update(chk, mp[v[0].first.second] + 1, -1);
    for (int i = 1; i < n; i++) {
        temp[v[i].second] += query(mp[v[i].first.second]);
        update(chk, 1, 1);
        update(chk, mp[v[i].first.second] + 1, -1);
    }
    
    int res=0;
    for (int i = 0; i < n; i++)
        res+=temp[i];
    cout<<res<<endl;

    }       
}
