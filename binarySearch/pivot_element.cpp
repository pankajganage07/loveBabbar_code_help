#include <iostream>
using namespace std;

int pivot_element(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = (start + end )/2;

    while (start<end)
    {
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = (start + end)/2;
    }
    return end;
    
}

int main () {

   int arr[] = {7,9,1,2,3};
   cout<<"Pivot element is at index: "<<pivot_element(arr, 5);

    return 0;
}