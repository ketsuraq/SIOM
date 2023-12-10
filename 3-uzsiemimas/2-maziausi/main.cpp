#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    long long N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++){
        int id;
        cin >> id;
        arr[i] = id;
    }
    int min1 = min(arr[0], arr[1]), min2 = max(arr[0], arr[1]);
    for (int i = 2; i < N; i++){
        int laik = arr[i];
        if (laik < min2){
            min2 = laik;
            if (min2 < min1){
                swap(min1, min2);
            }
        }
    }
    cout << min1 << " " << min2;
}
