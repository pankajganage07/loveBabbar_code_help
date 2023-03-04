//bubble sort using recurssion

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubble(int *arr, int n){
    //base case
    if(n == 1 || n == 0){
        return;
    }

    //solve one case: place largest element at its right position ie at the end
    for(int i = 0; i< n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    //recurssive call
    bubble(arr,n-1);
}

int main(int argc, char const *argv[])
{
    int arr[] = {12,21,1,4,5,3,22,64,6};
    bubble(arr,9);

    for(int i = 0; i<9; i++){
        cout<< arr[i] <<" ";
    }

    return 0;
}
