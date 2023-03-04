#include <iostream>
using namespace std;

void update(int **ptr){
    //ptr = ptr + 1;
    //yaha kuch change hoga ki nahi - NAHI

    //*ptr = *ptr + 1;
    //yaha kuch change hoga ki nahi - YES

    **ptr = **ptr + 1;
    //yaha kuch change hoga ki nahi
}

int main () {

    int num = 5;
    int *p1 = &num;
    int **p2 = &p1;

    cout<<endl<<endl;
    cout<<"hello"<<endl;

    cout<<"before: "<<endl;
    cout<<"num: "<<num<<endl;
    cout<<"p1: "<<p1<<endl;
    cout<<"p2: "<<p2<<endl;
    cout<<endl<<endl;
    update(p2);
    cout<<"after: "<<endl;
    cout<<"num: "<<num<<endl;
    cout<<"p1: "<<p1<<endl;
    cout<<"p2: "<<p2<<endl;


    return 0;
}