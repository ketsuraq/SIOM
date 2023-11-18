#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    int operacija;
    char asmuo;
    long long numeris;
    deque<long long> D;
    vector<long long> knyga;
    for (long long i = 0; i < N; i++){
        cin >> operacija;
        if (operacija == 1){
            cin >> asmuo;
            cin >> numeris;
            if (asmuo == 'K'){
                D.push_front(numeris);
            } else {
                D.push_back(numeris);
            }
        } else {
            cin >> asmuo;
            if (asmuo == 'K'){
                knyga.push_back(D.front());
                D.pop_front();
            } else {
                knyga.push_back(D.back());
                D.pop_back();
            }

        }
    }
    for (long long i = 0; i < knyga.size(); i++){
        cout << knyga[i] << endl;
    }
}
