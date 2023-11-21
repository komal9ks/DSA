#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int, string> m;

    m[1] = "komal"; //here 1 is KEY and komal is DATA
    m[7] = "sharma";
    m[3] = "srivastava";

    m.insert({5, "verma"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    } cout<<endl;

    cout<<"After Erase:" <<endl;

    m.erase(1);

     for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    } cout<<endl;

    auto it = m.find(7);
    cout<<"Is there a 7?? ";
    for (auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }


}