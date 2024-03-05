/********** Inheritence *********/
/*
1. The concept of reusability in C++ is supported using inheritence.
2. We can reuse the properties of an existing class by inheriting from it.
3. The existing class is called a Base class.
4. The new class which is inherited is called as derived class.
*/

// #include<iostream>
// using namespace std;
// class shape{
//     protected:
//     int width;
//     int height;
//     public:
//     void setWidth(int w){
//         width = w;
//     }
//     void setHeight(int h){
//         height = h;
//     }
// };

// class Rectangle: public shape{
//     public:
//     int getArea(void){
//         return height*width;
//     }
// };

// int main(){
//     Rectangle Rect;
//     Rect.setWidth(6);
//     Rect.setHeight(7);
//     cout<<"Area of Rectangle is : "<<Rect.getArea()<<endl;
//     return 0;
// }

/*---------Multiple Inheritence----------*/
// #include<iostream>
// using namespace std;
// class shape{
//     protected:
//     int width;
//     int height;
//     public:
//     void setWidth(int w){
//         width = w;
//     }
//     void setHeight(int h){
//         height = h;
//     }
//     shape(){
//         cout<<"Constructer of shape class is called..!!!"<<endl;
//     }
//     ~shape(){
//         cout<<"Destructor of shape class is called..!!!"<<endl;
//     }
// };
// class paintCost{
//     public:
//     paintCost(){
//         cout<<"Constructor of paintCost class is called..!!!"<<endl;
//     }
//     ~paintCost(){
//         cout<<"Destructor of the paintCost class is called..!!!"<<endl;
//     }
//     int getCost(int area){
//         return area*70;
//     }
// };
// class Rectangle: public paintCost, public shape{
//     public:
//     Rectangle(){
//         cout<<"Constructor of Rectangle class is called..!!!"<<endl;
//     }
//     ~Rectangle(){
//         cout<<"Destructor of Rectangle class is called..!!!"<<endl;
//     }
//     int getArea(){
//         return width*height;
//     }
// };
// int main(){
//     Rectangle Rect;
//     Rect.setHeight(9);
//     Rect.setWidth(4);
//     int area = Rect.getArea();
//     cout<<"Area of Rectangle is : "<<Rect.getArea()<<endl;
//     cout<<"Cost of paint is: "<<Rect.getCost(area)<<endl;
//     return 0;
// }

/*-----------MultiLevel Inheritence---------*/
// #include<iostream>
// using namespace std;
// class shape{
//     public:
//     void setWidth(int w){
//         width = w;
//     }
//     void setHeight(int h){
//         height = h;
//     }
//     protected:
//     int width;
//     int height;
// };
// class Rectangle: public shape{
//     public:
//     int getArea(){
//         return width*height;
//     }
// };
// class Rectangle1: public Rectangle{
//     public:
//     Rectangle1(){
//         cout<<"Rectangle1 constructor is called..!!!"<<endl;
//     }

// };
// int main(){
//     Rectangle1 Rect;
//     Rect.setHeight(4);
//     Rect.setWidth(7);
//     cout<<"Area of Rectangle is:" <<Rect.getArea()<<endl;

//     return 0;
// }

/*------------Friend Function-----------*/
// #include<iostream>
// using namespace std;
// class Distance{
//     private:
//     int meter;
//     public:
//     Distance(){
//         meter = 0;
//     }
//     void displayData(){
//         cout<<"Meters Data: "<<meter<<endl;
//     }
//     // Prototype or signature
//     friend void addValue(Distance &d); // pass by reference
// };

// void addValue(Distance &d){
//     d.meter = d.meter +5;
// }
// int main()
// {
//     Distance d1; //0
//     d1.displayData(); 
//     //friend function call
//     addValue(d1); // pass by reference
//     d1.displayData();

//     return 0;
// }

/*-----------Friend Class-------------*/
// #include<iostream>
// using namespace std;
// class myclass1{
//     friend class myclass2;//myclass2 is friend of this class
//     int x;
//     public:
//     class1(int a){
//         x = a;
//     }

// };
// class myclass2{
//     public:
//     void showdata(myclass1 obj){
//         cout<<"Value of x is: "<<obj.x<<endl;
//     }
// };
// int main(){
//     myclass1 obj1;
//     obj1.class1(5);
//     myclass2 obj2;
//     obj2.showdata(obj1);
// }

/*--------------------- Important Examples -----------------------*/
// #include <iostream>
// using namespace std;
// class Rectangle {
// int width, height;
// public:
// Rectangle() {}
// Rectangle(int x, int y) : width(x),height(y){}
// int area() {return width * height;}
// friend Rectangle duplicate (const Rectangle);
// };
// Rectangle duplicate (const Rectangle param)
// {
// Rectangle res;
// res.width = param.width*2;
// res.height = param.height*2;
// return res;
// }
// int main () {
// Rectangle foo;
// Rectangle bar (2,3);
// foo = duplicate (bar);
// cout << foo.area() << '\n';
// return 0;
// }

#include <iostream>
using namespace std;
class Square {
friend class Rectangle;
private:
int side;
public:
Square (int a) : side(a) {}
};
class Rectangle {
int width, height;
public:
int area ()
{return (width * height);}
void convert (Square a);
};
void Rectangle::convert (Square a) {
width = a.side;
height = a.side;
}
int main () {
Rectangle rect;
Square sqr (4);
rect.convert(sqr);
cout << rect.area();
return 0;
}
