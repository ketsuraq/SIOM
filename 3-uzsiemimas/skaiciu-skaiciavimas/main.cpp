#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; ++i){
        int id;
        cin >> id;
        arr[i] = id;
    }
    sort(arr, arr + N);

    long long K;
    cin >> K;

    for (int i = 0; i < K; ++i){
        int a;
        cin >> a;
        auto b = upper_bound(arr, arr + N, a);
        int counter = b - arr;
        cout << counter << endl;
    }
}
