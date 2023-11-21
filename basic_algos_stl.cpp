#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(8);
    v.push_back(9);
    v.push_back(4);
    v.push_back(7);
    v.push_back(2);

    //Binary Search

    cout<<"Searching 9---> "<<binary_search(v.begin(), v.end(), 9)<<endl;

    //Upper bound and Lower bound

    cout<<"Upper Bound--> "<<upper_bound(v.begin(), v.end(), 9) - v.begin()<<endl;
    cout<<"Lower Bound--> "<<lower_bound(v.begin(), v.end(), 9) - v.begin()<<endl;

    //min and max

    int a = 6;
    int b = 9;
    cout<<"Minimum --> "<<min(a,b)<<endl;
    cout<<"Maximum --> "<<max(a,b)<<endl;

    //swapping

    swap(a,b);

    cout<<a<<" "<<b<<endl;

    //reversing

    string str = "komal srivastava";

    reverse(str.begin(), str.end());

    cout<<"Reverse of the string is:  "<<str<<endl;

    //Rotation

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotation:  "<<endl;

    for(int i:v){
        cout<<i<<" ";
    } cout<<endl;

    //Sorting
    cout<<"After Sorting -->"<<endl;
    sort(v.begin(), v.end()); //based on intro sort --> heap sort + quick sort + insertion sort
    for(int i:v){
        cout<<i<<" ";
    } cout<<endl;

}