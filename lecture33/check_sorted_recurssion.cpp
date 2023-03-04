//checking if an array is sorted using recurssion

#include <iostream>
using namespace std;

bool issorted(int arr[], int size);

int main () {

    int arr[] = {10,30,30,40};
    bool ans = issorted(arr,4);
    if(ans){
        cout<<endl;
        cout<<"array is sorted "<<endl;
    }
    else{
        cout<<endl;
        cout<<"array is not sorted "<<endl;
    }

    return 0;
}

bool issorted(int arr[],int size){
    //base condition 
    if(size == 0 || size == 1){
        return true;
    }

    //recurssive condition
    if(arr[0] > arr[1])
        return false;
    else{
        bool rempart = issorted(arr+1, size-1);
        return rempart;
    }
}