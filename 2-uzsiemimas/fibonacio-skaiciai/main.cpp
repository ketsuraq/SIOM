#include <bits/stdc++.h>

using namespace std;

int fibonaci(int a){
    if (a == 1){
        return 1;
    } else if (a == 2){
        return 1;
    } else {
        return fibonaci(a - 1) + fibonaci(a - 2);
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    int eilesNumeris;
    cin >> eilesNumeris;
    cout << fibonaci(eilesNumeris);

    return 0;
}
