#include <bits/stdc++.h>

using namespace std;

void moving(char from, char to){
    cout << from << " -> " << to << endl;
}

void hanoi(int a, char source, char aux, char dest){
    if (a == 1){
        moving(source, dest);
        return;
    } else {
        hanoi(a - 1, source, dest, aux);
        moving(source, dest);
        hanoi(a - 1, aux, source, dest);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int skaicius;
    cin >> skaicius;

    hanoi(skaicius, 'A', 'B', 'C');
    return 0;
}
