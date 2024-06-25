#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define ff first
#define ss second

#define testcase
void solve(){
 	int n;
    cin >> n;
    string s;
    cin >> s;
    for (int len = 1;len <= n / 2;++len) {
        if (n%len == 0) {


            bool yes = 1;
            int ok = 0;
            for (int i = 0; i < len && yes;i++) {
                vector<int> cnt(26,0);
                cnt[s[i] - 'a']++;
                for (int j = 1; j < n / len;++j) {
                    cnt[s[len * j + i] - 'a']++;
                }
                int cnt1 = 0,p1 = 0,p2 = 0;
                for (int i = 0;i<26;++i) {
                    if (cnt[i] > 0) {
                        ++cnt1;
                        if (cnt1 == 1) {
                            p1 = cnt[i];
                        }
                        if (cnt1 == 2) p2 = cnt[i];
                    }

                }
                if (cnt1 > 2 or (p1 > 1 && p2 > 1)) {
                    yes = 0;
                    break;
                }
                if (p2 > 0) ok++;
                if (ok > 1) {
                    yes = 0;
                    break;
                }
            }
            if (yes) {
                cout << len;
                return;
            }

        }
    }

    cout << n;
}



signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tt = 1;
#ifdef testcase
      cin >>tt;
#endif
  while (tt--) {
    solve();
    cout << "\n";
  }
  return 0;
}
