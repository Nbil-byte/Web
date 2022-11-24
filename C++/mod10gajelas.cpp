#include <bits/stdc++.h>
using namespace std;

#define YES {cout << "YES\n"; return;}
#define NO {cout << "NO\n"; return;}

void solve() {
    int n, x, mod10, mod20; cin >> n;

    unordered_set<int> ganjil({1, 2, 4, 8, 13, 16, 17, 19});
    unordered_set<int> genap({11, 12, 14, 18, 3, 6, 7, 9});

    unordered_set<int> data;
    bool zeroExist = false;
    bool cond1 = 0, cond2 = 0;
    while (n--) {
        cin >> x;
        mod10 = x % 10;
        mod20 = x % 20;
        
        if (mod10 == 5) {
            x += 5;
            mod10 = 0;
        }
        if (mod10 == 0) {
            zeroExist = true;
            data.insert(x);
            continue;
        }

        if (ganjil.count(mod20))
            cond1 = 1;
        if (genap.count(mod20))
            cond2 = 2;
        data.insert(x);
    }

    // cout << "--------------------\ncond1 = " << cond1 << "; cond2 = " << cond2 << 
    // ";\nzero = " << zeroExist << "; dataS = " << data.size() << ";\n--------------------\n";
    
    if (cond1 && cond2)
        NO
    if (zeroExist && data.size() > 1)
        NO
    YES
}

int main() {
    int t; cin >> t;
    while (t--) solve();

    // for (string &s : deb) cout << s << ' ';
}