#include <bits/stdc++.h>
using namespace std;

//function for bubble sort
void bubble_sort(int arr[],int n){
    //n-1 round for n elements
    for(int i = 1; i<n; i++){
        //comparisions
        for(int j = 0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                //swap function is from bits/stdc++.h header file so it is call by reference
            }
        }
    }
}

void print_array(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main (){
   int arr[] = {6,5,3,7,9,2};
   int n = 6;
   bubble_sort(arr,n);
   print_array(arr,n);



    return 0;
}