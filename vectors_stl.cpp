#include<bits/stdc++.h>
using namespace std;

int main(){
    // declaration of vector
    vector<int> v;

    // capacity --> how much it can atomic_store
    // size --> how much is atomic_store
    // If we exceeds the capacity of the vector it doubles its capacity

    cout<<"Capacity of vector v is: "<<v.capacity()<<endl;

    // To insert an element into the vector
    v.push_back(2);
    cout<<"Capacity of vector v is: "<<v.capacity()<<endl;
    cout<<"Size of vector v is: "<<v.size()<<endl;
    v.push_back(4);
    cout<<"Capacity of vector v is: "<<v.capacity()<<endl;
    cout<<"Size of vector v is: "<<v.size()<<endl;
    v.push_back(6);

    // before the capavity was 2 now it is 4... it doubles itself
    cout<<"Capacity of vector v is: "<<v.capacity()<<endl;
    cout<<"Size of vector v is: "<<v.size()<<endl<<endl;

    // Some Operations
    cout<<"First element of vector v is: "<<v.front()<<endl;
    cout<<"Last element of vector v is: "<<v.back()<<endl;
    cout<<"Perticular element of vector v is: "<<v.at(2)<<endl;

    // To delete an element from the vector
    cout<<"Deleting last element of vector: ";
    v.pop_back();
      for(int i:v){
        cout<<i;
    }  cout<<endl;

    // declaration of size in vector
    vector<int> a(5,1);

    for(int i:a){
        cout<<a[i]<<" ";
    }cout<<endl;

    // To clear the whole vector
    v.clear();
    cout<<"After clearing the vector the size is: "<<v.size();


}