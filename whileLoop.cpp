#include<iostream>
using namespace std;

int main() {
	long n;
	cin>>n;
	int i;
	int even=0;
	int odd=0;

	while(n!=0){
		i=n%10;
		if(i%2==0){
			even = even+i;
		}
		else{
			odd = odd+i;
		}
	n = n/10;	
	}

cout<<even<<" "<<odd;

}

