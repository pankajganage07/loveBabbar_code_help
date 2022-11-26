#include <iostream>
using namespace std;

int find_squrt(int n){

     int start = 0;
     int end = n;
     int mid = (start + end )/2;
     int ans;
    int calc = mid*mid;

    while(start<= end){
        if(calc == n){
            return mid;
        }
        if (calc < n){
            ans = mid;
            start = mid + 1;
        }
        else {
            //go to left part
            end = mid - 1;
        }
        

        mid = (start+end)/2;
    }

  return ans;
}


 long long int sqrtInteger(int n) {
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }



int main (){

  cout<<"enter a number to find its square root: ";
  int n;
  cin>>n;

  cout<<"\n"<<sqrtInteger(n);
  cout<<"\n 2 "<<find_squrt(n);

    return 0;
}