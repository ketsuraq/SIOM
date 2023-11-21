#include <iostream>

using namespace std;

string palindromas(string zodis){
    if (zodis.length() == 1){
        return "TAIP";
    } else if (zodis.length() == 2 && zodis[0] == zodis[1]){
        return "TAIP";
    } else {
        if (zodis[0] == zodis[zodis.length() - 1]){
            return palindromas(zodis.substr(1, zodis.length() - 2));
        } else {
            return "NE";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);

    string zodis;
    cin >> zodis;
    cout << palindromas(zodis);
    return 0;
}
