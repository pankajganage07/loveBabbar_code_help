//find power of number using recurssion

#include <iostream>
using namespace std;

int power(int a, int b){
    //base conditions
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }

    //recurssive call
    int ans = power(a,b/2);

    //if power is even
    if(b%2== 0){
        return ans*ans;
    }
    else{
        //for odd conditions
        return a*ans*ans;
    }
}

int main () {

    int a,b;
    cin>>a>>b;
    cout<<endl<<power(a,b);


    return 0;
}
