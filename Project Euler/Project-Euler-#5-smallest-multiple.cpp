/*
MY Logic -
Does not work for input greater than 12;
#include <bits/stdc++.h>

using namespace std;

long smallest_multiple(int n, long num){
    for(int i = 1; i <= n; i++){
        if(num % i != 0){
            while(num % i != 0){
                num++;
                num = smallest_multiple(n, num);
            }
        }
    }
    return num;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long num = 2;
        long int ans = smallest_multiple(n, num);
        cout << ans << endl;
    }
    return 0;
}
*/

// Optimized Solution -

#include <bits/stdc++.h>
using namespace std;

long smallest_multiple(long num, long i){
    if(i){
        return smallest_multiple(i, num % i);
    }
    else{
        return num;
    }
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long num = 1;
        for(int i = 2; i <= n; i++){
            num *= i / smallest_multiple(num, i);
        }
        cout << num << endl;
    }
    return 0;
}
