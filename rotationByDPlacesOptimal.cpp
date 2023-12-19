//Time complexity : O(n)+O(n-d)+O(d) == O(2n) //increased then brute but
//Space Complexity: O(1) 

#include<bits/stdc++.h>
using namespace std;
int rotate(int arr[], int n, int d){

 d = d%n; //For finding the exact numver of places to be rotate "To find out enter the number bigger then n"

reverse(arr,arr+d); // from 0 to d
reverse(arr+d,arr+n); // from d to n
reverse(arr,arr+n); // from 0 to n

}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
cout<<"Enter the number of rotations: ";
int d; //Places of rotation;
cin>>d;

rotate(arr,n,d);
    cout<<"Rotation of the array is: ";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
    
}