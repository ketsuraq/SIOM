#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    unordered_map<long long, long long> M;
    long long x;
    for (long long i = 0; i < N; i++){
        cin >> x;
        M[x]++;
    }
    long long Q;
    long long a;
    cin >> Q;
    vector<long long> V;
    for (long long i = 0; i < Q; i++){
        cin >> a;
        if (M[a]){
            V.push_back(M[a]);
        } else {
            V.push_back(0);
        }
    }
    for (long long i = 0; i < V.size(); i++){
        cout << V[i] << endl;
    }
}
