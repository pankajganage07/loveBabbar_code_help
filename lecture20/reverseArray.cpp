#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {

  int a[] = {12,13,14,15,16};
  int n = sizeof(a)/sizeof(a[1]);
  int s = 0;
  int e = n-1;
  while(s<=e){
    swap(a[s],a[e]);
    s++;
    e--;
  }
  for(int i = 0; i<n; i++){
    cout<<a[i]<<" ";
  }



    return 0;
}