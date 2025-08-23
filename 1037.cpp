#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    long long mn = LLONG_MAX, mx = LLONG_MIN;
    for (int i = 0; i < k; ++i) {
        long long d; 
        cin >> d;
        mn = min(mn, d);
        mx = max(mx, d);
    }

    cout << mn * mx << "\n";
    return 0;
}
