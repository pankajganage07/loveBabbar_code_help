#include <iostream>
using namespace std;

int main (){

  int i = 5;
  int *ptr1 = &i;
  int **ptr2 = &ptr1;

  cout<<endl;
  cout<<"printing value of i: "<<endl;
  cout<<"i = "<<i<<endl;
  cout<<"*ptr1 = "<<*ptr1<<endl;
  cout<<"**ptr2 = "<<**ptr2<<endl;

  cout<<endl;
  cout<<endl;
  
  cout<<"printing address of i: "<<endl;
  cout<<"&i = "<<&i<<endl;
  cout<<"ptr1 = "<<ptr1<<endl;
  cout<<"*ptr2 = "<<*ptr2<<endl;

  cout<<endl;
  cout<<endl;

  cout<<"printing address of ptr1: "<<endl;
  cout<<"&ptr1 = "<<&ptr1<<endl;
  cout<<"ptr2 = "<<ptr2<<endl;

    return 0;
}