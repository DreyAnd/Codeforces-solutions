#include <bits/stdc++.h>

#pragma optimize("O3, unroll-loops");
#pragma target("avx2, bmi, bmi2, lzcnt, popcnt");

#define ll long long 

using namespace std;
 
void solve(string operation){
    vector<int> ops;

    stringstream ss(operation);
    string temp;
    char del = '+';

    while(getline(ss, temp, del)) {
        ops.push_back(stoi(temp));
    } 

    sort(ops.begin(), ops.end());

    int c = 1;
    int ops_len = ops.size();
    cout << ops[0];

    while(c < ops_len) {
        cout << del + to_string(ops[c]);
        c++;
    }


}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    string operation;
    cin >> operation;

    solve(operation);

    return 0;
}