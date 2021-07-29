#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;

void solve() {
    ll n,m;
    cin >> n >> m;
    ll a = sqrt(n);
    ll b = sqrt(m);
    cout << a * b << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t --) solve();
    return 0;
}