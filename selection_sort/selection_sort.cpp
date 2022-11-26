#include <bits/stdc++.h>
using namespace std;

int selection_sort(int arr[],int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
        //this swap is with reference to value coz the swap function is defined in bits/stdc++.h
    }

}

void print_array(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main () {

    int arr[] =  {8,6, 10,3,1,2};
    selection_sort(arr,6);
    print_array(arr, 6);

    return 0;
}