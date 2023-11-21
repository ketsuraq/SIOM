#include <bits/stdc++.h>

using namespace std;

string laipsnis(int a){
    if (a == 2){
        return "TAIP";
    } else {
        if (a % 2 == 0){
            return laipsnis(a / 2);
        } else {
            return "NE";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    int skaicius;
    cin >> skaicius;
    cout << laipsnis(skaicius);
    return 0;
}
