#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    map<int, vector<int>> M;

    int N, D;
    cin >> N >> D;

    for (int i = 1; i <= N; ++i){
        int sub, pnt;
        cin >> sub >> pnt;
        M[sub].push_back(pnt);
    }
    for (int i = 1; i <= N; ++i){
        sort(M[i].begin(), M[i].end());
    }
    return 0;
}
