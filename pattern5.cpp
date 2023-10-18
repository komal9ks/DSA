#include<bits/stdc++.h>
using namespace std;

void star(int n){
   for(int i=1; i<=n; i++){ 
        for(int j=n; j>=i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void star2(int n){
   for(int i=1; i<=n; i++){ 
       for(int j=1; j<=n-i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }  
}
int main(){
    int n;
    cin>>n;
  star(n);
  cout<<endl;
  star2(n);

 
    return 0;
}
