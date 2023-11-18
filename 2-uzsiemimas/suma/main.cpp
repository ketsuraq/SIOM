#include <bits/stdc++.h>

using namespace std;

long long suma(long long a, long long b){
    return a + b;
}

int main()
{
    ifstream fin("Sum.in");
    ofstream fout("Sum.out");
    long long a, b;

    fin >> a >> b;
    fout << suma(a, b);

    return 0;
}
