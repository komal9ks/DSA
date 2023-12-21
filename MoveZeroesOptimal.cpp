//Ques: Move all the zeroes to the end of the array

// Here i and j are two pointers
// j is the location of first zero and i is j+1 means next number after 0
#include<bits/stdc++.h>
using namespace std;

moveZeroes(int arr[], int n){
    int j = -1;

for(int k = 0; k<n; k++){
    if(arr[k] == 0){
        j = k;
        break;
    }
}
if(arr[j] == 0){ // in case the array doesnt contain 0
for(int i = j+1; i<n; i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
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

moveZeroes(arr,n);
    cout<<"Now the array is: ";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
    
}