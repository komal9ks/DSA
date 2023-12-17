#include<bits/stdc++.h>
using namespace std;

int SecondLargest(int arr[], int n){
int largest = arr[0];
int slargest = -1;

for(int i=0; i<n; i++){
    if(arr[i]>largest){
        largest = arr[i];
        slargest = largest;
    }
    else if(arr[i]<largest && arr[i]>slargest){
        slargest = arr[i];
    }
}
}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Second Largest element in array: "<<SecondLargest(arr,n);
}