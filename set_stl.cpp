#include<bits/stdc++.h>
using namespace std;

//All the element should be unique

int main(){

    set<int> s;

    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(6);
    s.insert(6);
    s.insert(9);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    s.insert(7);
    s.insert(7);
    s.insert(3);

    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = s.begin();

    s.erase(it);
    cout<<"After Deletion: "<<endl;
    for(int i:s){
      cout<<i<<" ";
    }cout<<endl;

    cout<<"7 is present or not? "<<s.count(7)<<endl;

    set<int>::iterator itr = s.find(2);

    cout<<"Location of 2 is: "<<endl;
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

}