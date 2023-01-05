#include <iostream>
using namespace std;

int main () {

    //declaring a null pointer
    int *p = 0;
    //it is pointing to no memory location
    //cout<<"what is stored in p: "<<p<<end;
    //therefore above statement will give error
    
    //two pointers pointign to same data
    int num = 5;
    int *a = &num;
    int *b = &num;
    cout<<"value at a is: "<<a<<endl;
    cout<<"value at b is: "<<b<<endl;
    cout<<"a poits to : "<<*a<<endl;
    cout<<"b poits to : "<<*b<<endl;

    //coping pointers
    cout<<"copying pointers: "<<endl;
    int *c = a;
    cout<<"value at c is: "<<a<<endl;
    cout<<"c poits to : "<<*c<<endl;




    return 0;
}