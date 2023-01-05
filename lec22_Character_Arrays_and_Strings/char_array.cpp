#include <iostream>
using namespace std;
#define SIZE 2000

int main () {

    char name[SIZE];  //creating a char array
    cout<<"enter your name: ";
    cin>>name; //taking input to char array
    cout<<"name: "<<name<<endl;  //printing char array

    //note: char array stop exeuction when it encouters space tab or newline

    //solution to that

    cout<<"enter your name full name: ";
    cin.getline(name,SIZE,'$');
    cout<<"full name: "<<name<<endl;

    return 0;
}