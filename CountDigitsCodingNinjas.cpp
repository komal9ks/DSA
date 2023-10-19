#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int temp= n;
    int count=0;
    while(n>0){
    int ld = n%10;
     n = n/10;
    if(ld>0 && temp%ld==0){
        count++;
    } 
}  cout<<count;
}
