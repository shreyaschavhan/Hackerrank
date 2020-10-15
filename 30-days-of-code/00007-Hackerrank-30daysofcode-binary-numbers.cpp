/*
Link - https://www.hackerrank.com/challenges/30-binary-numbers/problem
*/ 

#include <bits/stdc++.h>
using namespace std;



int main()
{

    int n;
    int remainder;
    int max_no_of_1 = 0;
    int count = 0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(n > 0){
        remainder = n % 2;
        if(remainder == 1){
            count++;
            if(count>=max_no_of_1){
                max_no_of_1 = count;
            }
        }
        else{
            count = 0;
        }
        n = n / 2;

    }
    cout << max_no_of_1;
   return 0;
}
