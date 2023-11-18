#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<string> s;

    s.push("komal");
    s.push("jai");
    s.push("mansi");
    s.push("himanshu");
    s.push("abhishek");

    cout<<"Top/First element of the stack is: "<<s.top()<<endl;

    s.pop();
    cout<<"Top/First element of the stack after pop is: "<<s.top()<<endl;

    cout<<"Size of the stack is: "<<s.size()<<endl;

    cout<<"Is the stack empty? "<<s.empty()<<endl;


}