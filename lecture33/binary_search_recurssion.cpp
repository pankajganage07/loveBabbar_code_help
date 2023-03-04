//applying binary search in array using recurssion

#include<iostream>
using namespace std;

int binary_search(int arr[], int s, int e, int key){
    if(s<=e){
        int mid = (s+e)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            //search in right part
            return binary_search(arr,mid+1,e,key);
        }
        else{
            return binary_search(arr,s,mid-1,key);
        }
    }
    return -1;
}

int main (){

    int arr[] = {10,20,30,35,40,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"element is present at index: "<<binary_search(arr,0,size-1,45);

    return 0;
}