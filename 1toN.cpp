#include<bits/stdc++.h>
using namespace std;

void print(int x, int i)
{
    cout<<i<<" ";
    i++;
    if(i>x) return;

   print(x,i);

}

int main(){

    int n;
    cin>>n;
    print(n,1);

}