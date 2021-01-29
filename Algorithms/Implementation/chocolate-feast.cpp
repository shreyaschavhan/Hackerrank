// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int n, c, m;
        cin >> n >> c >> m;
        int chocolate_bought = n/c;
        int total = chocolate_bought;
        while(chocolate_bought > 0){
            cout << "IR: " << total << " " << chocolate_bought << '\n';
            chocolate_bought /= m;
            total += chocolate_bought;
        }
        cout << total << '\n';
    }
    return 0;
}
