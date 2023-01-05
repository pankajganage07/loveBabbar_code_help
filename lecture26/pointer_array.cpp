#include <iostream>
using namespace std;

void print_array(int arr[]){
    for(int i = 0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main () {


    int arr[10] = {0};
    //array is initalized to all zeors
    print_array(arr);

    //if u just give some values then rest will be inatilized to zero
    int ar[10] = {10,20,30};
    print_array(ar);

    //if u didnt inatalized the array at all, then it will print all garbage values
    int a[10];
    print_array(a);

    //our moto here is to learn abt pointers, so lets get started with it

    //it will give the same output
    cout<<"address of first location of array is "<<ar<<endl;
    cout<<"address of first location of array is "<<&ar[0]<<endl;
    cout<<"address of first location of array is  : "<<&ar<<endl;

    //elements stored at certain location
    cout<<"element stored at first index is: "<<ar[1]<<endl;
    cout<<"element stored at first index is: "<<*(ar+1)<<endl;
    //chalaki below
    cout<<"element stored at first index is: "<<1[ar]<<endl;
    cout<<"element stored at first index is: "<<*(1+ar)<<endl;




    return 0;
}