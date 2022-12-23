#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i = 0, j = 0, k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++] = arr1[i++];
            //post increament
        }
        else{
            arr3[k++] = arr2[j++];
         //post increament
        }
    }

    //what if one arrays end then we just need to copy the contents of other array
    while(i<n){
        arr3[k++] = arr1[i++];
    }

    while(j<m){
        arr3[k++] = arr2[j++];
    }
}

int main () {
   
   int arr1[] = {1,3,5,7,9,13};
   int arr2[] = {2,4,6};
   int arr3[9];

   merge(arr1, 6, arr2, 3, arr3);
   print(arr3,9);




    return 0;
}