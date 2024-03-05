#include<iostream>
using namespace std;

int main(){
    int numerator,denominator,result=0;
    cout<<"Enter Numerator and Denominator: "<<endl;
    cin>>numerator>>denominator;
    try{
        if(denominator==0){
            throw(denominator);
        }
    result = numerator/denominator;

    }
    catch(int a){
        cout<<"It is Not Valid!......"<<endl;
    }
    cout<<"Division is: "<<result<<endl;

    return 0;
}