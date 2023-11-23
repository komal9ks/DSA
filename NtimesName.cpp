#include<bits/stdc++.h>
using namespace std;

void print(int i, int n){

    if(i>n) return;

    cout<<"komal ";
    i += 1;
    print(i,n);

}

int main() {
    int n;
    cin>>n;
    print(1,n);
}