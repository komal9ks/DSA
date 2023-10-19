#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int rev = 0;
    while(n){  // Example 373
        int ld = n%10; //3
        n = n/10; //37
        rev = (rev*10) + ld; //rev = 0*10 + 3 == 3

    } cout<<rev;
}