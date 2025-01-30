#include <bits/stdc++.h>

#pragma optimize("O3,unroll-loops")
#pragma target("avx2,bmi,bmi2,lzcnt,popcnt");

#define ll long long 

using namespace std;

void solve(int k, int l, int m, int n, int d){
    if (k == 1 || l == 1 || m == 1 || n == 1) {
        cout << d << endl;
    } else {
        set<int> suffer;
        vector<int> params = {k, l, m, n};
        
        for (int p : params) {
            for (int i=0; i <= d; i += p) {
                suffer.insert(i);
            }
        }

        cout << suffer.size()-1 << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;

    solve(k,l,m,n,d);

    return 0;
}