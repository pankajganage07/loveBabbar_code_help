// Dynamic memory allocation of 2D array
#include <iostream>
using namespace std;

int main (){

    int row, col;
    cin>>row>>col;

    //creation of 2d array using dynamic memory allocation
    int **arr = new int*[row];
    for(int i = 0; i<row; i++){
        arr[i] = new int[col];
    }

    //taking input in 2d array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    //printing 2d array
     for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j]<< " ";
        }
        cout<<endl;
    }


    //free space allocated to array
    for(int i = 0; i<row; i++){
        delete  [] arr[i];
    }
    delete []arr;



    return 0;
}