#include<bits/stdc++.h>
using namespace std;

int binarySearch(int size, int arr[], int key){
    int s = 0; //starting point
    int e = size; //ending point
    while(s<=e){
    int mid = (s+e)/2;
    if(arr[mid] == key){
        return mid;
    }

    else if(arr[mid]>key){
        e = mid-1;
    }

    else{
        s = mid+1;
    }    
    }
    return -1;
    }


int main(){
    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binarySearch(size,arr,key)<<endl;
}