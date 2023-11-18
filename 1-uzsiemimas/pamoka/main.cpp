#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N, M;
    cin >> N >> M;
    unordered_set<long long> S;
    long long a, b;
    vector<string> V;
    for (long long i = 0; i < N; i++){
        cin >> a;
        S.insert(a);
    }
    for (long long i = 0; i < M; i++){
        cin >> b;
        if (S.find(b) == S.end()){
            V.push_back("NE");
            S.insert(b);
        } else {
            V.push_back("TAIP");
        }
    }
    for (long long i = 0; i < V.size(); i++){
        cout << V[i] << endl;
    }
}
