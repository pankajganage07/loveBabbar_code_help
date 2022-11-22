#include <iostream>
using namespace std;

//function for first occurence
int first_occur(int arr[], int size, int key){
    int start = 0, end = size -1, ans = -1;
    int mid = start + (end -start)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if (key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end -start)/2;
    }
    return ans;
    
}

//function for last occurence
int last_occur(int arr[], int size, int key){
    int start = 0, end = size -1, ans = -1;
    int mid = start + (end -start)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }
        else if (key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end -start)/2;
    }
    return ans;
    
}

int main () {
  
    int evenArray[] = {1,2,2,3,3,3,3,7,9};
    int first_index = first_occur(evenArray, 9, 3);
    int last_index = last_occur(evenArray, 9, 3);
    cout<<"first occurence of 3 is at index: "<<first_index<<"\n";
    cout<<"last occurence of 3 is at index: "<<last_index<<endl;
    cout<<"total number of occurence: "<<last_index - first_index + 1;
    return 0;
}