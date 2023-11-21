#include<bits/stdc++.h>
using namespace std;

int main(){
    // Declaration
    deque<int> d;

    // Insertion of the element from the back
    d.push_back(1);
    d.push_back(2);

    // Inseetion of the element of the front
    d.push_front(3);
    d.push_front(4);
    d.push_back(5);

    cout<<"The elements of deque after insertion are: "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    // Deletion of the element from the back
    d.pop_back();

    // Deletion of the element from the front
    d.pop_front();

    cout<<"The elements of deque after deletion are: "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    // Some Operations
    cout<<"The first element of the deque is: "<<d.front()<<endl;
    cout<<"The last element of the deque is: "<<d.back()<<endl;

    cout<<"The perticular element of the deque is: "<<d.at(2)<<endl;

    cout<<"Is the deque empty? "<<d.empty()<<endl;

    // Erasing elements of the deque
    cout<<"Erasing the elements of the deque"<<endl;
    d.erase(d.begin(), d.begin()+2);
    for(int i:d){
       cout<<i<<" ";
    }cout<<endl;
    
}   