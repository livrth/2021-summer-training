#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;

//https://vjudge.net/contest/449325#rank

void solve() {
    map<string, int>p = {{"C", 0}, {"C#", 1}, {"D", 2}, {"D#", 3}, {"E", 4}, {"F", 5}, {"F#", 6}, {"G", 7}, {"G#", 8}, {"A", 9}, {"A#", 10}, {"B", 11}};
    string n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a = p[n1];
    int b = p[n2];
    int c = p[n3];
    if (b < a) b += 12;
    while (c < b) c += 12;
    if (b - a == 4 && c - b == 3) puts("Major triad");
    else if (b - a == 3 && c - b == 4) puts("Minor triad");
    else puts("Dissonance");
}

int main() {
    int t = 1;
    cin >> t;
    while (t --) solve();
    return 0;
}