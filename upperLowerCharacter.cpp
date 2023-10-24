#include<iostream>
using namespace std;

int check(char c){
    if(isupper(c)){
       cout<<1;
    }
    else if(islower(c)){
      cout<<0;
    }
    else{
       cout<<-1;
    }
}

int main() {
    char c;
    cin>>c;

    check(c);

    return 0;
	
}
