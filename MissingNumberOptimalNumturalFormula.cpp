#include<bits/stdc++.h>
using namespace std;

int missing(int arr[], int n){

        int sum1 = (n*(n+1))/2;
        int sum2 = 0;

        for(int i=0; i<n-1; i++){
            sum2 += arr[i];
        }

        return sum1-sum2;
    }


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Missing number is: "<<missing(arr,n);
}
