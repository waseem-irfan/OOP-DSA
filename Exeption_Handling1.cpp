/******* Basic Exception Handling*******/
#include<iostream>
using namespace std;

int main(){
    int a, b;
    double c=0;
    cout<<"Enter a: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter b: ";
    cin>>b;
    cout<<endl;
    try{
        if(b==0){
            throw "Division is NOT Valid...";
        }
    c = a/b;
    }
    catch(const char *e){
        cout<<"Exception occured: "<<e<<endl;
    }
    cout<<"Division is: "<<c<<endl;
    return 0;
}


