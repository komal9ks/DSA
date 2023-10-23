#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dn = n;
    int dn2 = n;
    int temp = 0;
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
	while(dn){
		int ld = dn%10;
		dn = dn/10;
		temp = temp + round(pow(ld,count));
	}
    cout<<temp;
	if(temp == dn2){
		cout<<"true";
	}
	cout<<"false";
}