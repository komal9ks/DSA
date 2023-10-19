#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num;
    int rev=0; 
    while(n){
       rev = rev*10+n%10;
        n = n/10;
    } if(rev>INT_MAX || rev<INT_MIN){
        return 0;
    }
     cout<<rev;
}
