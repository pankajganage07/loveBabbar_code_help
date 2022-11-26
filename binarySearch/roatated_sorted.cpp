#include <iostream>
using namespace std;

//finding pivot element

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

//applying binary search

int binarySearch(int arr[],int start, int end, int key){
    int mid = start + (end - start)/2;

    while (start<=end)
    {
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
          mid = start + (end - start)/2;
    }
    return -1;
}

int main () {

    int arr[] = {7,9,10,1,3,4,5};
    int pivot = pivot_element(arr, 7);
    cout<<"enter no to find in array: "<<endl;
    int k;
    cin>>k;
    
    if(k>=arr[pivot] && k<=arr[7-1]){
        //binary search on 2nd line
        cout<<"element found at index: "<<binarySearch(arr, pivot, 7, k);
    }else
    {
        //binary search on 1st line
        cout<<"element found at index: "<<binarySearch(arr,0, pivot-1, k);
    }

    return 0;
}
