#include <bits/stdc++.h>

#pragma optimize("O3,unroll-loops");
#pragma target("avx2,bmi,bmi2,lzcnt,popcnt");

using namespace std;

vector<char> move_one(vector<char> queue, int n) {
    for (int i = 0; i < n - 1; i++) { 
        if (queue[i] == 'B' && queue[i + 1] == 'G') {
            swap(queue[i], queue[i + 1]);
            i++;
        }
    }
    return queue;
}

void solve(int n, int t, string s){
    vector<char> queue;

    for (char i : s) {
        queue.push_back(i);
    }

    while(t--) {
        queue = move_one(queue, n);
    }

    string final_queue(queue.begin(), queue.end());

    cout << final_queue << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n,t;
    string s;

    cin >> n >> t;
    cin >> s;

    solve(n,t,s);

    return 0;
}