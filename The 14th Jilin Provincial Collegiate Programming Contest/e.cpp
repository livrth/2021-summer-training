#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;

const int N = 1e6 + 10;
int a[N];

void solve() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    int n;
    cin >> n;
    int min = 0x3f3f3f3f;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        // cin >> a[i];
        scanf("%d", &a[i]);
        if (a[i] < min) {
            cnt = 1;
            min = a[i];
        }
        else if (a[i] == min) cnt++;
    }

    bool flag1 = false, flag2 = false;

    if (cnt == 1) flag1 = true;

    for (int i = 0; i < n; i++) {
        if (a[i] % min) {
            flag2 = true;
            break;
        }
    }
    int res = 0;
    if (flag1) res  = 1;
    else if (flag2) res = 1;
    else res = (cnt + 1) / 2;
    printf("%d\n", res);
    // cout << "***" << cnt << ' ' << min << endl;
    // cout << res << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t --) solve();
    return 0;
}