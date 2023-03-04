//applying linear search in array using recurssion

#include<iostream>
using namespace std;

void print(int arr[],int size){
    cout<<endl<<"size is: "<<size<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linear_search(int arr[], int size, int key){
    print(arr,size);
    //base condition
    if(size == 0 ){
        return false;
    }

    //recurssive condition
    if(arr[0] == key){
        return true;
    }
    else{
        return linear_search(arr+1, size-1, key);
       
    }

}

int main (){

    int arr[] = {12,11,3,20,35};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 9;

    bool ans = linear_search(arr,size,key);

    if(ans == true){
        cout<<endl;
        cout<<"element present"<<endl;
    }
    else{cout<<endl<<"not present"<<endl;}
        

return 0;
}