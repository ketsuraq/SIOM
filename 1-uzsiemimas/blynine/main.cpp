#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;
    string operacija;
    string zodis;
    stack<string> S;
    vector<string> V;
    for (long long i = 0; i < N; i++){
        cin >> operacija;
        if (operacija == "bum"){
            cin >> zodis;
            S.push(zodis);
        } else {
            if (S.empty()) {
                V.push_back(":(");
            } else {
                V.push_back(S.top());
                S.pop();
            }
        }
    }
    for (long long i = 0; i < V.size(); i++){
        cout << V[i] << endl;
    }
}
