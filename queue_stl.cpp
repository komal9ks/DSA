#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<string> q;

    q.push("komal");
    q.push("jai");
    q.push("mansi");
    q.push("himanshu");
    q.push("abhishek");

    cout<<"Front/First element of the queue is: "<<q.front()<<endl;

    q.pop();
    cout<<"Front/First element of the queue after pop is: "<<q.front()<<endl;

    cout<<"Size of the queue is: "<<q.size()<<endl;

    cout<<"Is the queue empty? "<<q.empty()<<endl;


}