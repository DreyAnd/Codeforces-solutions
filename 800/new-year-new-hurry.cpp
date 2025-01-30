#include <bits/stdc++.h>

#pragma optimize("O3, unroll-loops")
#pragma target("avx2, bmi, bmi2, lzcnt, popcnt")

using namespace std;

void solve(int n, int k) {
    int available_mins = 240 - k;
    int sum = 0;
    int c = 0;

    for (int i=1; i<=n; i++) {
        sum += 5 * i;
        if (sum > available_mins) {
            break;
        }
        c++;             
    }

    cout << c << endl; 

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, k;
    cin >> n >> k;

    solve(n,k);

    return 0;

}   