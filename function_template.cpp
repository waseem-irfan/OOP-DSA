#include<iostream>
using namespace std;
template <typename T, typename U>
T getMax(T a, U b){
    return (a>b?a:b);
}
int main(){
    cout<<getMax<float,int>(3.8,4)<<endl;
    cout<<getMax<double,double>(3.9,5.600005)<<endl;
    return 0;
}