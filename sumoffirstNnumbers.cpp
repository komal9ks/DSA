#include<bits/stdc++.h>
using namespace std;

int print(long long n)
{    
   return n*(n+1)/2;
}

int main(){

    long long n;
    cin>>n;
    cout<<print(n);
}