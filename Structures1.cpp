/*****************  Array of Structures ****************/

// #include <iostream>
// #include <string.h>
// using namespace std;

// struct Book{
//     string book_name;
//     int book_id;
// }Books[2];

// int main(){
//     Books[0].book_name = "Embedded Systems";
//     Books[0].book_id = 88349;
//     Books[1].book_name = "Real Time Operating System";
//     Books[1].book_id = 34384;

//     // Printing Books Info
//     cout<<"Book Name: "<<Books[0].book_name<<endl;
//     cout<<"Book Id: "<<Books[0].book_id<<endl;
//     cout<<"Book Name: "<<Books[1].book_name<<endl;
//     cout<<"Book Id: "<<Books[1].book_id<<endl;
//     return 0;
// }

/****************** Structure members as Arguments **************/
// Just like variables, we can pass structure members as arguments to a function.

// Call by value:

// #include <iostream>
// using namespace std;

// struct student{
//     char name[50];
//     int age;
//     int roll_no ;
//     float marks;
// };

// void print(char name[], int age, int roll_no, float marks){
//      cout<<"Name: "<<name<<" Age: "<<age<<" Roll_Number: "<<roll_no<<" Marks: "<<marks<<endl;
// }

// int main(){
//     student s1 ={"Waseem", 22, 394774, 73.5};
//     print(s1.name,s1.age,s1.roll_no,s1.marks);// passing structure members as arguments
//     return 0;
// }


// Call by Reference:
// Instead of passing the copies of the structure members, we can pass thier addresses(or references).
// #include <iostream>
// using namespace std;

// struct charset{
//     char c;
//     int i;

// };
// void KeyValue(char* c, int* i){
//     cout<<"Enter c Member: ";
//     cin>>*c;
//     cout<<endl;
//     cout<<"Enter i Member: ";
//     cin>>*i;
//     cout<<endl;
// }
// int main(void){
//     charset cs;
//     KeyValue(&cs.c,&cs.i);
//     cout<<cs.c<<" "<<cs.i<<endl;
//     return 0;
// }

/******************** Structure Variable as an Argument *****************/
// Instead of passing structure members individually, it is a good practice to pass a structure varible as an argument. Unlike arrays, name of the structure variables are not pointers(means Its a pass by Value).

// #include <iostream>
// using namespace std;

// struct point{
//     int x;
//     int y;
// };
// void print(struct point p){
//     cout<<p.x<<" "<<p.y<<endl;
// }

// int main(){
//     point p1 = {23 , 54};
//     point p2 = {66 , 26};
//     print(p1); // passing structure variable as argument(Here Copy is passing)
//     print(p2);
//     return 0;
// }

/*************** Passing pointers to structure as an Argument ***********/
// If the size of the structure is very large then passing the copy of the whole structure is not efficient.
// Better choice -->  pass the address of the structure
// Use arrow Operator(->) to access the structure members inside the called function.

// #include <iostream>
// using namespace std;

// struct point{
//     int x;
//     int y;
// };
// void print(struct point *ptr){
//     // cout<<ptr->x<<" "<<ptr->y<<endl; 
//     // OR
//     cout<<(*ptr).x<<" "<<(*ptr).y<<endl;
// }

// int main(){
//     point p1 = {23 , 54};
//     point p2 = {66 , 26};
//     print(&p1); // passing structure variable as argument(Here Copy is passing the reference)
//     print(&p2);
//     return 0;
// }

/********************* Return a structure variable from the function ***************/
// Return astructure variable from a function is similar to returning a variable from a function.

#include <iostream>
using namespace std;
struct point{
    int x;
    int y;
};
struct point editpoint(struct point p){ // Return structure variable from a function.
    (p.x)++;
    p.y = p.y+5;
    return p;
}
void print(struct point p){
    cout<<p.x<<" "<<p.y<<endl;
}
int main(){
    point p1 = {22,44};
    point p2 = {33,66};
    p1 = editpoint(p1);  // passing Copy
    p2 = editpoint(p2); // passing Copy
    print(p1); // passing Copy
    print(p2); // passing Copy

    return 0;
}

/*********************** Returning a pointer to a structure from the function ***************/
// #include <iostream>
// using namespace std;
// struct point{
//     int x;
//     int y;
// };
// struct point* func(int a, int b){
//     point * ptr = new point;
//     ptr->x = a;
//     ptr->y = b + 5;
//     return ptr;
// }

// void print(struct point *ptr){
//     cout<<ptr->x<<" "<<ptr->y<<endl;
// }
// int main(){
//     point *ptr1,*ptr2;
//     ptr1 = func(2,3);
//     ptr2 = func(6,9);
//     print(ptr1);
//     print(ptr2);
//     delete ptr1;
//     delete ptr2;
//     return 0;
// }

/****************** Passing Array of Structures as an Argument ****************/
// #include <iostream>
// using namespace std;
// struct point{
//     int x;
//     int y;
// };
// void print(struct point arr[]){
//     for(int i=0; i<2; i++){
//         cout<<arr[i].x<<" "<<arr[i].y<<endl;
//     }
// }

// int main(){
//     point arr[2] = {{1,2},{3,4}};
//     print(arr);
//     return 0;
// }

/***************** Self Referential Structures **************/
// Self referential structures are thoes structures in which one or more pointers points to the structure of the same type.
// Useful in LinkedList
// #include <iostream>
// using namespace std;
// struct Code{
//     char c;
//     int i;
//     Code *ptr;
// };
// int main(){
//     Code var1;
//     Code var2;

//     var1.c = 'A';
//     var1.i = 65;
//     var1.ptr = NULL;

//     var2.c = 'B';
//     var2.i = 66;
//     var2.ptr = NULL;
//     var1.ptr = &var2;
//     cout<<var1.ptr->i<<" "<<var1.ptr->c<<endl; // With the help of var1 I am trying to access the members of var2

//     return 0;
// }