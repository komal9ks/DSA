// Move all the zeroes to the end of the array

#include<bits/stdc++.h>
using namespace std;

moveZeroes(int arr[], int n){
    vector<int> temp;

    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }

    for(int i=0; i<temp.size(); i++){
        arr[i] = temp[i];
    }

    for(int i= temp.size(); i<n; i++){
        arr[i] = 0;
    }

}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

moveZeroes(arr,n);
    cout<<"Now the array is: ";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
    
}