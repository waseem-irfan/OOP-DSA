/*------------Pointers-----------*/

#include<iostream>
using namespace std;
const int MAX=4;
int main(){
    // int myvar=12;
    // int *foo = &myvar;
    // int *boo = foo;
    // cout<<"Address of myVar: "<<foo<<endl;
    // cout<<"Value of myVar: "<<*foo<<endl;
    // cout<<"Address of myVar is: "<<boo<<endl;
    // cout<<"Address of myVar is: "<<*boo<<endl;

    
// int firstvalue, secondvalue;
// int * mypointer;
// mypointer = &firstvalue;
// *mypointer = 10;
// mypointer = &secondvalue;
// *mypointer = 20;
// cout << "firstvalue is " << firstvalue << '\n';
// cout << "secondvalue is " << secondvalue << '\n';


// int firstvalue = 5, secondvalue = 15;
// int * p1, * p2;
// p1 = &firstvalue; // p1 = address of firstvalue
// p2 = &secondvalue; // p2 = address of secondvalue
// *p1 = 10; // value pointed to by p1 = 10
// *p2 = *p1; // value pointed to by p2 = value pointed to
// // by p1
// p1 = p2; // p1 = p2 (value of pointer is copied)
// *p1 = 20; // value pointed to by p1 = 20
// cout << "firstvalue is " << firstvalue << '\n';
// cout << "secondvalue is " << secondvalue << '\n';


/*------------Incrementing the Pointer------------*/
    // int arr[MAX] = {1,4,7,9};
    // int *ptr = arr;
    // for(int i = 0 ; i<MAX ; i++){
    //     cout<<"Address of ["<<i+1<<"]" <<ptr<<endl;
    //     cout<<"Value of ["<<i+1<<"]" <<*ptr<<endl;
    //     ptr++;
    // }

    const char *names[MAX] = { "Babar Azam", "Muhammad Rizwan", "Asad Rauf", "Shaheen Afridi" };
for (int i = 0; i < MAX; i++) {
cout << "Value of names[" << i << "] = ";
cout << *(names + i) << endl;
}


    return 0;
}