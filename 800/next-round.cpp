#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    int cutoff_score = scores[k - 1];
    int adv = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= cutoff_score && scores[i] > 0) {
            adv++;
        }
    }
    cout << adv << endl;
}

int main() {
    solve();
    return 0;
}
