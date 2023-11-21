#include <bits/stdc++.h>

using namespace std;

int collatz(int a, int sum){
    if (a == 1){
        return sum;
    } else {
        if (a % 2 == 0){
            return collatz(a / 2, sum + 1);
        } else {
            return collatz(a * 3 + 1, sum + 1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    int skaicius;
    cin >> skaicius;

    cout << collatz(skaicius, 0);
    return 0;
}
