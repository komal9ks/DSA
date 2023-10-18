#include<bits/stdc++.h>
using namespace std;

 void star(int n) {
        for(int i=0; i<n; i++){
            
            for(int k = 0; k<n-i-1; k++){
                cout<<" ";
            }
            for(int l=0; l<2*i+1; l++){
                cout<<"*";
            }
            for(int m=0; m<n-i-1;m++){
                cout<<" ";
            }cout<<endl;
            } 
 }
int main(){
    int n;
    cin>>n;
  star(n);
  cout<<endl;
 
    return 0;
}
