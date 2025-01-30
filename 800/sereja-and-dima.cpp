#include <bits/stdc++.h>

#pragma optimize("O3, unroll-loops")
#pragma target("avx2, bmi, bmi2, lzcnt, popcnt")

using namespace std;

void solve(vector<int> cards) {
    int sereja = 0;
    int dima = 0;
    
    int L = 0;
    int R = cards.size() - 1;
    bool sereja_turn = true; 
    
    while (L<=R) {
        int max;

        if (cards[L] < cards[R]) {
            max = cards[R];
            R--;
        } else {
            max = cards[L];
            L++;
        }

        if(sereja_turn) {
            sereja += max;
        } else {
            dima += max;
        }

        sereja_turn = !sereja_turn;
    }

    cout << sereja << " " << dima << endl;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    vector<int> cards = {};
    cin >> n; 

    int i = 0;
    while (i < n) {
        int c;
        cin >> c; 
        cards.push_back(c);
        i++;
    }

    solve(cards);

    return 0;
}