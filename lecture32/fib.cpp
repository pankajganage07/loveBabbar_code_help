//fibonacci using recursion

#include <iostream>
using namespace std;

//function for finding nth fibonacci number
int fib(int n){

    //base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    //recurssive relation
    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main () {

int n;
cin>>n;
cout<<fib(n);


    return 0;
}