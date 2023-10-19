#include<bits/stdc++.h>
using namespace std;

int count1(int n){
    int count =0;
while(n>0){
    int ld = n%10;
    n = n/10;
    count++;
}
cout<<count;
}

int count2(int n){
    int count = (int) (log10(n)+1);
    cout<<count;
}
int main(){

int long n;
cin>>n;
count1(n);
cout<<endl;
count2(n);
} 
