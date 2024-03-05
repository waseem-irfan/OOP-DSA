// #include <iostream>
// using namespace std;

// class Complex{
//     private:
//     int real , imag;
//     public:
//     Complex(){
//         real = 0;
//         imag = 0;
//     }
//     Complex(int r, int i){
//         real = r;
//         imag = i;
//     }
//     void print(){
//         cout<<real<<" + "<<imag<<"i"<<endl;
//     }
//     // Operator Overloading syntax
//     Complex operator +(Complex c){
//         Complex temp;
//         temp.real = real+c.real;
//         temp.imag = imag+c.imag;
//         return temp;
//     }
// };

// int main(){

//     Complex c1(4,9);
//     Complex c2(3,5);
//     Complex c3(1,1);
//     Complex c4;
//     c4 = c1 + c2 +c3;  
//     c4.print()  ;
//     return 0;
// }

/*----------------- Compare two objects using member function-------------*/
// #include<iostream>
// using namespace std;

// class Test {
//     int a;
//     public:
//     void get(){
//         cin>>a;
//     }
//     void compare(Test t2){ // Here t2 is explicit obj of test
//         if(a==t2.a){
//             cout<<"Both objects are Equal"<<endl;
//         }
//         else{
//             cout<<"Both objects are not equal"<<endl;
//         }
//     }
// };

// int main(){
//     Test t1,t2;
//     cout<<"Enter t1 object: ";
//     t1.get();
//     cout<<endl;
//     cout<<"Enter t2 object: ";
//     t2.get();
//     cout<<endl;
//     t1.compare(t2);
//     return 0;
// }

/*-------------Compare two numbers using == operator overloading ------------*/

// #include<iostream>
// using namespace std;

// class Test {
//     int a;
//     public:
//     void get(){
//         cin>>a;
//     }
//     void operator==(Test t2){ // Here t2 is explicit obj of test
//         if(a==t2.a){
//             cout<<"Both objects are Equal"<<endl;
//         }
//         else{
//             cout<<"Both objects are not equal"<<endl;
//         }
//     }
// };

// int main(){
//     Test t1,t2;
//     cout<<"Enter t1 object: ";
//     t1.get();
//     cout<<endl;
//     cout<<"Enter t2 object: ";
//     t2.get();
//     cout<<endl;
//     t1==t2;
//     return 0;
//  }

/*--------------- + Operator Overloading using member function ------------------*/
// #include<iostream>
// #include<string.h>
// using namespace std;
// class Test{
//     char str[100];
//     public:
//     void read(){
//         cout<<"Enter a String: ";
//         cin>>str;
//         cout<<endl;
//     }
//     void show(){
//         cout<<"String : "<<str<<endl;
//     }
//     Test add(Test t2){// t2 is explicit object
//         Test t3;
//         strcpy(t3.str,str);
//         strcat(t3.str, " ");
//         strcat(t3.str, t2.str);
//         return t3;
//     }
// };

// int main(){
//     Test t1,t2,t3;
//     t1.read();
//     t2.read();
//     t3 = t1.add(t2);
//     t3.show();
//     return 0;
// }

/*-------------- + Operator Overloading ------------ */
// #include<iostream>
// #include<string.h>
// using namespace std;
// class Test{
//     char str[100];
//     public:
//     void read(){
//         cout<<"Enter a String: ";
//         cin>>str;
//         cout<<endl;
//     }
//     void show(){
//         cout<<"String : "<<str<<endl;
//     }
//     Test operator +(Test t2){// t2 is explicit object
//         Test t3;
//         strcpy(t3.str,str);
//         strcat(t3.str, " ");
//         strcat(t3.str, t2.str);
//         return t3;
//     }
// };

// int main(){
//     Test t1,t2,t3;
//     t1.read();
//     t2.read();
//     t3 = t1+t2;
//     t3.show();
//     return 0;
// }

/*------------ Unary Operator Overloading--------------*/
#include<iostream>
using namespace std;
class Test{
    int a;
    public:
    Test(){
        a=0;
    }
    void operator++(int){
        a++;
    }
    void operator--(int){
        a--;
    
    }
    void show(){
        cout<<a<<endl;
    }
};
int main(){
    Test t1;
    t1++;
    t1.show();
    t1--;
    t1.show();
    return 0;
}



/*-------------- Practice ----------*/
// #include<iostream>
// using namespace std;
// class Complex{
//     int real , imag;
//     public:
//     Complex(){
//         real = 0;
//         imag = 0;
//     }
//     void get(){
//         cout<<"Enter real and imaginary number respectively. "<<endl;
//         cin>>real;
//         cin >>imag;
//     }
//     Complex operator << (Complex C2){
//         Complex C3;
//         C3.real = this->real + C2.real;
//         C3.imag = this->imag + C2.imag;
//         return C3;
//     }
//     void show(){
//         cout<<"Your Complex Number is: "<<real<<"+"<<imag<<"i"<<endl;
//     }
    
// };
// int main(){
//     Complex C1,C2,C3;
//     C1.get();
//     C2.get();
//     C3 = C1<<C2;
//     C3.show();
//     return 0;
// }