// #include<iostream>
// using namespace std;
// class Box{
//     public:
//     double length;
//     double width;
//     double height;

// };

// int main(){
//     Box box1;
//     Box box2;
//     double volume = 0.0;
//     // Box 1
//     box1.height = 4.4;
//     box1.length = 5.5;
//     box1.width = 9.8;
    
//     volume = box1.height*box1.length*box1.width;
//     cout<<"Volume of Box1 is: "<<volume<<endl;
//     return 0;
// }


// #include<iostream>
// #include<string>

// using namespace std;
// class Box{
//     double length;
//     double width;
//     double height;
//     public:
//     void setLength(double l){
//         length = l;
//     }
//     void setWidth(double w){
//         width =w;
//     }
//     void setHeight(double h){
//         height = h;
//     }
//     double volume();
// };
// double Box:: volume(){
//     return length*width*height;
// }
// int main(){
//     Box box;
//     box.setHeight(7.8);
//     box.setLength(4.4);
//     box.setWidth(7.2);
//     cout<<"Volum of Box is : "<<box.volume()<<endl;
//     return 0;
// }

/*------------------ Class Constructor--------------*/

// #include <iostream>
// using namespace std;
// class Line {
// public:
// void setLength( double len );
// double getLength( void );
// Line(double len); // This is the constructor
// private:
// double length;
// };

// // Member functions definitions including constructor
// Line::Line( double len) {
// cout << "Object is being created, length = " <<len << endl;
// length = len;
// }
// void Line::setLength( double len ) {
// length = len;
// }
// double Line::getLength( void ) {
// return length;
// }
// int main() {
// Line line(10.0);
// // get initially set length.
// cout << "Length of line : " << line.getLength()<<endl;
// // set line length again
// line.setLength(6.0);
// cout << "Length of line : " << line.getLength()<<endl;
// return 0;
// }


/*---------------Constructor Overloading-------------*/

// #include <iostream>
// using namespace std;
// class Rectangle {
// int width, height;
// public:
// Rectangle ();
// Rectangle (int, int);
// int area (void) {return (width*height);}
// };
// Rectangle::Rectangle () {
// width = 5;
// height = 5;
// }
// Rectangle::Rectangle (int a, int b) {
// width = a;
// height = b;
// }
// int main () {
// Rectangle rect (3,4);
// Rectangle rectb;
// cout << "rect area: " << rect.area() << endl;
// cout << "rectb area: " << rectb.area() << endl;
// return 0;
// }

/*-------------- Pointer to a Class---------------*/

#include <iostream>
using namespace std;
class Box {
public:
// Constructor definition
Box(double l = 2.0, double b = 2.0, double h = 2.0) {
cout <<"Constructor called." << endl;
length = l;
breadth = b;
height = h; }
double Volume() {
return length * breadth * height; }
private:
double length; // Length of a box
double breadth; // Breadth of a box
double height; // Height of a box
};
int main(void) {
Box Box1(3.3, 1.2, 1.5); // Declare box1
Box Box2(8.5, 6.0, 2.0); // Declare box2
Box *ptrBox; // Declare pointer to a class.
// Save the address of first object
ptrBox = &Box1;
// Now try to access a member using member access operator
cout << "Volume of Box1: " << ptrBox->Volume() << endl;
// Save the address of second object
ptrBox = &Box2;
// Now try to access a member using member access operator
cout << "Volume of Box2: " << ptrBox->Volume() << endl;
return 0;
}