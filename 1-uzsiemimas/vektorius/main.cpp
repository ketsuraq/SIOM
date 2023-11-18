#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    string operacija;
    vector<int> V;
    int x;
    for (int i = 0; i < N; i++) {
        cin >> operacija;
        if (operacija == "add") {
            cin >> x;
            V.push_back(x);
        } else if (operacija == "size") {
            cout << V.size() << "\n";
        } else if (operacija == "print") {
            if (V.empty()) {
                cout << "-\n";
            } else {
                for (int j = 0; j < V.size(); j++) {
                    cout << V[j] << " ";
                }
                cout << "\n";
            }
        } else if (operacija == "sorta") {
            sort(V.begin(), V.end());
        } else if (operacija == "sortd") {
            sort(V.begin(), V.end(), greater<int>());
        } else if (operacija == "reverse") {
            reverse(V.begin(), V.end());
        } else if (operacija == "fill") {
            cin >> x;
            fill(V.begin(), V.end(), x);
        }
    }
}
