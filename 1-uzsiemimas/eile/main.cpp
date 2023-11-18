#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    int ivykis;
    long long numeris;
    vector<long long> V;
    queue<long long> Q;
    for (long long i = 0; i < N; i++){
        cin >> ivykis;
        if (ivykis == 1){
            cin >> numeris;
            Q.push(numeris);
        } else {
            V.push_back(Q.front());
            Q.pop();
        }
    }
    for (long long i = 0; i < V.size(); i++){
        cout << V[i] << endl;
    }
}
