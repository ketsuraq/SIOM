#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    set<string> S;
    string vardas;
    for (long long i = 0; i < N; i++){
        cin >> vardas;
        S.insert(vardas);
    }
    cout << S.size() << endl;
    while(!S.empty()){
        cout << *S.begin() << endl;
        S.erase(S.begin());
    }
}
