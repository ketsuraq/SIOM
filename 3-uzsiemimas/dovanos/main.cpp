#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    long long K, N;
    cin >> K >> N;

    int arr[K];

    for (int i = 0; i < K; i++){
        int id;
        cin >> id;
        arr[i] = id;
    }
    sort(arr, arr + K);
    cout << arr[K - N];
}
