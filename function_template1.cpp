/*******Function Template******/
#include<iostream>
using namespace std;
template <typename T, typename U, typename V>
U getMax(T a, U b, V c){
    if(a>=b){
        if(a>=c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
            if(b>=c){
                return b;
            }
            else{
                return c;
            }
        
    }

}
int main(){
    cout<<getMax<int,double,float>(8,8.999,8.9)<<endl;
    cout<<getMax<double,double,float>(8.0009,7.111,6.6)<<endl;
    
    return 0;
}