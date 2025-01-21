#include <bits/stdc++.h> 

#pragma optimize("O3, unroll-loops")
#pragma target("avx2, bmi, bmi2, lzcnt, popcnt")

#define ll long long

using namespace std;

void solve(string w){
    string s;
    string e;
    string m;
    string n_w;

    ll len = w.length();
    if(len > 10) {
        s = w.substr(0, 1);
        e = w.substr(len-1, 1);
        m = to_string(len-2);
        n_w = s + m + e;

        cout << n_w << endl;
    } else {
        cout << w << endl; 
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int i = 1; 
    
    int n; 
    string w;
    
    cin >> n;
    while (i <= n) {
        cin >> w;
        solve(w);
        i++;
    }

    return 0;

}