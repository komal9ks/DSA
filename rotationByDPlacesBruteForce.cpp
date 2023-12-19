//Time complexity : O(d)+O(n-d)+O(d) == O(n+d)
//Space Complexity: O(d) To decrease the space complexity we will use optimal solution

#include<bits/stdc++.h>
using namespace std;
int rotate(int arr[], int n, int d){

 d = d%n; //For finding the exact numver of places to be rotate "To find out enter the number bigger then n"

int temp[d];

for(int i=0;i<d;i++){ //Stored the elements to be shifted in temp
    temp[i]=arr[i];
}

for(int i=d;i<n;i++){ //Left Rotation
    arr[i-d] = arr[i];
}

for(int i=n-d;i<n;i++){ // Storing the temporary into the main array
    arr[i] = temp[i-(n-d)];

}
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