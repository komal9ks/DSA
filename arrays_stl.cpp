#include<bits/stdc++.h>
using namespace std;

int main(){

int basic[2] = {1};
for(int i=0; i<2; i++){
    cout<<basic[i]<<endl;
}
//stl way of declaring an array
//it is static
array<int,4> a = {1,2,3,4};

//a.size() for finding the size of the array
cout<<"Elements of the static array: ";
for(int i=0; i<a.size(); i++){
    cout<<a[i]<<endl;
}

//for first element --> front()
cout<<"Fisrt element of the array: "<<a.front()<<endl;

//for the last element --> back()
cout<<"Last element of the array: "<<a.back()<<endl;

//For approaching a perticular index --> at()
cout<<"Element at index 2 is: "<<a.at(2)<<endl;

//To find if the array empty or not --> empty()
//it returns boolean value
cout<<"Is the array empty? "<<a.empty()<<endl;
}