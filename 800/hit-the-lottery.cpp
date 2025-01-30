#include <bits/stdc++.h>

#pragma optimize("O3, unroll-loops")
#pragma target("avx2, bmi, bmi2, lzcnt, popcnt")

using namespace std; 

void solve(int n){
    int bills[] = {100, 20, 10, 5, 1};
    int count = 0;

    for (int bill : bills) {   
        count += n / bill;
        n %= bill;
    }

    cout << count << endl; 
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie(0);
    
    int n;
    cin >> n;

    solve(n);

    return 0;

}