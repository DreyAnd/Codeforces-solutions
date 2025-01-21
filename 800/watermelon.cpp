#include <bits/stdc++.h> 

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#define ll long long 

using namespace std;

void solve(ll n) {
    if(n % 2 == 0 && n > 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;    
    
    solve(n);
}