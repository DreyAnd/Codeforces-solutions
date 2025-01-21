#include <bits/stdc++.h>

#pragma optimize("O3, unroll-loops");
#pragma target("avx2, bmi, bmi2, lzcnt, popcnt");

using namespace std;

void solve(int k, int n, int w){
    int total_amount = 0;

    for (int i=1; i <= w; i++) {
        total_amount += i * k;
    }

    int borrow = total_amount - n;
    if (borrow > 0) {
        cout << borrow << endl;
    } else {
        cout << "0";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int k,n,w;
    cin >> k >> n >> w;

    solve(k,n,w);
    return 0;
}