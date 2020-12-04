#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    while(d > 0){
        for(int i = 0; i < n; i++){
            if(i != 0 ){
                arr[i-1] = arr[i];
            }
        }
        int temp = arr[n-1];
        arr[n-1] = arr[0];
        arr[0] = temp;
        d--;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
