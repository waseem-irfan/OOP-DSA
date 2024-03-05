#include <iostream>
using namespace std;
template<typename T>
class getMax{
    private:
    T a;
    T b;
    public:
    T GetMax(T a , T b){
        if(a>b){
            return a;
        }
        else
        return b;
    }
};

int main(){
    getMax <int> obj;
    cout<<obj.GetMax(3,4)<<endl;
    return 0;
}
