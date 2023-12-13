#include<bits/stdc++.h>
using namespace std;

slargest(int arr[], int n){
int largest = arr[0];
int slargest = -1;
for(int i=0;i<n;i++){
    if(largest<arr[i]) largest = arr[i];
}
for(int i=0; i<n; i++){
    if(slargest<arr[i] && arr[i] != largest) slargest = arr[i];
}
return slargest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"second largest is: "<<slargest(arr,n);
}