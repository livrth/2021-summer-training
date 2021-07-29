#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;

const int N = 5010, mod = 1e9 + 7;
ll dp[N][N];

void solve() {
    string a, b;
    while (cin >> a >> b) {
        int n = a.length(), m = b.length();
        for (int i = 0; i <= n; i++)dp[0][i] = 1;
        for (int j = 1; j <= m; j++)
            for (int i = 1; i <= n; i++)
                dp[j][i] = 0;
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++) {
                dp[i][j] = dp[i][j - 1];
                if (b[i - 1] == a[j - 1])
                    dp[i][j] += dp[i - 1][j - 1];
                dp[i][j] %= mod;
            }
        cout << dp[m][n] << endl;
    }
}

int main() {
    int t = 1;
    // cin >> t;
    while (t --) solve();
    return 0;
}