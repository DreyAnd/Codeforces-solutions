#include <bits/stdc++.h>

#pragma optimize("O3, unroll-loops");
#pragma target("avx2, bmi, bmi2, lzcnt, popcnt");

using namespace std;

void solve(int n) {
    int petya, vasya, tonya;
    int solns = 0; 

    while(n--){
        cin >> petya >> vasya >> tonya;
        if (petya + vasya + tonya >= 2) {
            solns++;
        } 
    }

    cout << solns << endl;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; 
    cin >> n;
    
    solve(n);    
    
    return 0;
}
