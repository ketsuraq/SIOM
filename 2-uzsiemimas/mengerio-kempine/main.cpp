#include <bits/stdc++.h>

using namespace std;

vector<char> createPattern(int length) {
    if (length == 1) {
        return {'#'};
    } else {
        vector<char> subPattern = createPattern(length / 3);
        vector<char> V;

        for (int i = 0; i < length; ++i) {
            for (int j = 0; j < length; ++j) {
                if ((i >= length / 3 && i < 2 * length / 3) && (j >= length / 3 && j < 2 * length / 3)) {
                    V.push_back('.');
                } else {
                    V.push_back(subPattern[(i % (length / 3)) + (j % (length / 3)) * (length / 3)]);
                }
            }
        }

        return V;
    }
}

void printPattern(vector<char> V, int length) {
    for (int i = 0; i < V.size(); i++) {
        cout << V[i];
        if ((i + 1) % length == 0) {
            cout << endl;
        }
    }
}

int main() {
    int number;
    cin >> number;
    int length = pow(3, number);

    vector<char> V = createPattern(length);
    printPattern(V, length);

    return 0;
}
