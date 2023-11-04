#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;
        int arr[n];
       
        arr[0] = 1;
        arr[1] = 1;
         if(arr[n]==1){
                cout<<arr[0];
        }
        else{
        for(int i =2; i<=n; i++){
                arr[i] = arr[i-1]+arr[i-2];

                if (i == n) {
                  cout << arr[i - 1];
                }
        }
        }
}