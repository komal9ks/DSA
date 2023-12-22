// Two pointers i and j

#include <bits/stdc++.h>

using namespace std;

vector < int > FindIntersection(int a[], int b[], int n, int m) {
  int i = 0, j = 0; // pointers
  vector < int > intersection; 
  while (i < n && j < m) {
    
    if(a[i] < b[j]){
        i++;
    }
    else if(a[i]>b[j]){
        j++;
    }
    else{
        intersection.push_back(a[i]);
        i++;
        j++;
    }
}
return intersection;
}
int main()

{
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12}; 
  vector < int > intersection = FindIntersection(arr1, arr2, n, m);
  cout << "Intersection of arr1 and arr2 is  " << endl;
  for (auto & val: intersection)
    cout << val << " ";
  return 0;
}
