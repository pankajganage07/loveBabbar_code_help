#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
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

int main (){
  int even[] = {2,3,8,10,11,15};
  int odd[] = {2,3,8,10,11};
  cout<<lengthof(even);
  int key;
  cout<<"Enter Key: ";
  cin>>key;

  int evenIndex = binarySearch(even, 6, key);
  int oddIndex = binarySearch(odd, 5, key);

  cout<<key<<" found at index "<<evenIndex<<" in even array\n";
  cout<<key<<" found at index "<<oddIndex<<" in odd array\n";


    return 0;
}