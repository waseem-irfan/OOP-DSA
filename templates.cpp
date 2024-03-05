// Templates 
// #include <iostream>
// using namespace std;

// template <class T>

// T getMax(T a, T b){
//     return ((a<b)? b: a);
// }

// int main(){
//     int i = getMax <int> (5,7);
//     float j = getMax <float> (6.6,3.3);
//     double k = getMax <double> (68.6,3.39);
//     cout<<"Max int: "<<i<<endl;
//     cout<<"Max float: "<<j<<endl;
//     cout<<"Max double: "<<k<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

template <typename T, typename U>
class getArea{
    private:
    T a;
    U b;
    public:
    void setValue(T x, U y){    
        a = x;
        b = y;
    }
    U Area(){
        return a*b;
    }

};

int main(void){
    getArea <int , float> obj;
    int a = 8;
    float b = 9.9;
    obj.setValue(a,b);
    cout<<"Area = "<<obj.Area()<<endl;
    return 0;
}

