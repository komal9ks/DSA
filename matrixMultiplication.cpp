#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,q;
    cout<<"Enter the number of row and columns";
    cin>>n>>m;
    cin>>q;
    int a[m][n];
    int b[n][q];
    cout<<"Enter row and columns of first matrix";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter row and columns of second matrix";
    for(int i=0; i<n; i++){
        for(int j=0; j<q; j++){
            cin>>b[i][j];
        }
    }
    cout<<"Multiplication of matrices is:";
    int c[m][q];
    for(int i=0; i<m; i++){
    cout<<"\n";
    for(int j=0; j<q; j++)
    {
        c[i][j]=0;
        cout<<"\t";
    for(int k=0; k<n; k++)
    {
        c[i][j] = c[i][j]+a[i][k]*b[k][j];
        }
    cout<<c[i][j];
    }
    }

}