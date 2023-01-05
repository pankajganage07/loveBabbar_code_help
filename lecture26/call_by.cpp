#include <iostream>
using namespace std;
//it is call by value
void update(int *ptr){
    //we are just updating address here ,without changing the original address 
    ptr = ptr+1;
}

void update_value(int *ptr){
    //call by reference , actual value is updated
    *ptr = *ptr+1;
}



int main () {

int value = 5;
int *p = &value;

cout<<"befor: "<<p<<endl;
update(p);
cout<<"after: "<<p<<endl;

cout<<"updation in value (call by reference): "<<endl;
cout<<"befor: "<<*p<<endl;
update_value(p);
cout<<"after: "<<*p<<endl;

    return 0;
}