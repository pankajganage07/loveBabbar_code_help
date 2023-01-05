#include <iostream>
using namespace std;

int main (){

    int arr[5] = {1,2,3,4,5};
    //you can also declare char arrays as declared below
    //char ch[6] = {'a','b'};

    char ch[6] = "abcde";
    //why 6 blocks coz null char '\0' require one block in case of char arrays
    cout<<arr<<endl;  //this will print address
    cout<<ch<<endl; //this will print value at address
    //coz cout is implemented differently for char and char arrays

    char *c = &ch[0];
    //it will still print value stored in whole aarray
    cout<<c<<endl;
    //coz reason is same , implementation is different

    char temp = 'p';
    char *z = &temp;
    cout<<z<<endl;
    //it will go on printing random values including p at start until it encounter \0

    return 0;
}