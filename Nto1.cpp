#include<bits/stdc++.h>
using namespace std;

void print(int x)
{    
    if(x==0) return;
    cout<<x<<" ";
    x--;
   print(x);

}

int main(){

    int n;
    cin>>n;
    print(n);

}