#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N, K;
    cin >> N >> K;
    long long a;
    priority_queue<long long> Q;
    for (long long i = 0; i < N; i++){
        cin >> a;
        Q.push(a);
    }
    long long sum = 0;
    for (K; K > 0; K--){
        if (Q.top() == 0){
            break;
        }
        sum += Q.top();
        long long laik = Q.top();
        Q.pop();
        laik /= 2;
        Q.push(laik);
    }
    cout << sum;
}
