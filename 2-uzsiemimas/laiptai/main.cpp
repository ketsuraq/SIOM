#include <bits/stdc++.h>

using namespace std;

int ejimai(int a){
    if (a == 1){
        return 1;
    } else if (a == 2){
        return 2;
    }

    return ejimai(a - 1) + ejimai(a - 2);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    int laiptai;
    cin >> laiptai;

    cout << ejimai(laiptai);

    return 0;
}
