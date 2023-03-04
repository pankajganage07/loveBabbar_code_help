//finding sum of all elements of array using recurssion

#include<iostream>
using namespace std;

int getsum(int [], int);

int main (){

    int arr[] = {20};
    cout<<endl;
    cout<<getsum(arr,1);
    cout<<endl;

    return 0;
}

int getsum(int arr[], int size){
    //base condition
    if(size ==  0)
        return 0;

    //recurssive condition
    int total = 0;
    total = arr[0] + getsum(arr+1, size-1);
    return total;
}