//reverse a string using recurssion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// void reverse(string& str, int i, int j){
//     if(i>j){
//         return;
//     }
//     swap(str[i],str[j]);
//     i++;
//     j--;
//     reverse(str,i,j);
// }

//writing a function to reverse a string using recurssion using only one pointer(only  i)
void reverse(string& str, int i){
    if(i>str.length()-1-i){
        return;
    }
    swap(str[i],str[str.length()-1-i]);
    i++;
    reverse(str,i);
}


int main (){

    string str = "abcde";
    reverse(str,0);

    cout<<str<<endl;

    return 0;
}