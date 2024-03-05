#include <iostream>
using namespace std;

int Sum(int,int);

int main(){
    int  S = 0;
    int (*ptr)(int,int) = &Sum;
     S = (*ptr)(7,8); // OR use ptr(7,8)
    cout<<S<<endl;
    return 0;
}

int Sum(int a , int b){
    return a+b;
}