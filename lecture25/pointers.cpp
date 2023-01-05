#include <iostream>
using namespace std;

int main () {

    int num = 5;
    int *ptr = &num;
    //ptr is storing address of num
    //ptr is pointing to integer data type

    cout<<"num is: "<<num<<endl;
    cout<<"ptr stores this thing called address: "<<ptr<<endl;
    cout<<"dereferencig ptr: "<<*ptr<<endl;
    cout<<"size of num is : "<<sizeof(num)<<endl;
    cout<<"size of ptr is: "<<sizeof(ptr)<<endl;

    cout<<"other data type"<<endl;

    double abc = 5.5;
    double *p;
    //p is pointing to random memory location and it is bad coding practice
    p = &abc;
    cout<<"abc is: "<<abc<<endl;
    cout<<"p stores this thing called address: "<<p<<endl;
    cout<<"dereferencig p: "<<*p<<endl;
    cout<<"size of num is : "<<sizeof(abc)<<endl;
    cout<<"size of ptr is: "<<sizeof(p)<<endl;


    return 0;
}