#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int> maxi; //default

    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(4);
    maxi.push(7);
    maxi.push(5);
    maxi.push(3);
    maxi.push(6);
    maxi.push(2);

    cout<<"Top element of the maxi queue: "<<maxi.top()<<endl;

    cout<<"Elements of the MAxi priority Queue: ";
    int n = maxi.size();
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";

        maxi.pop();
    } cout<<endl;

cout<<endl;


   mini.push(4);
   mini.push(7);
   mini.push(5);
   mini.push(3);
   mini.push(6);
   mini.push(2);

    cout<<"Top element of the mini queue: "<<mini.top()<<endl;

    cout<<"Elements of the mini priority Queue: ";
    int m = mini.size();
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";

        mini.pop();
    } cout<<endl;
cout<<endl;
    cout<<"Is the queue empty? "<<mini.empty()<<" because we have popped them";

}