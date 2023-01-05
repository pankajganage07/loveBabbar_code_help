#include <iostream>
using namespace std;

void print(int *ptr){
    cout<<*ptr<<endl;
}

int main () {

int value = 5;
int *p = &value;

print(p);

    return 0;
}