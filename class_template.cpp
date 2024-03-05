#include<iostream>
using namespace std;

template <typename T, typename U>
class myArea{
    private:
    T a;
    U b;
    public:
    void setValue(T x, U y){
        a = x;
        b = y;
    }
    T getArea(){
        return a*b;
    }

};

int main(){
    myArea <float,int> area;
    area.setValue(3.9,9);
    cout<<"Area is: "<<area.getArea()<<endl;


    return 0;
}