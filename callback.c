// (Application of function pointers) Callback function: In C, a callback function is a function that is passed as an argument to another function. The receiving function can then "call back" or invoke the callback function at some point during its execution.
#include <stdio.h>

void Sum(int a, int b){
    printf("Sum=%d\n",a+b);
}
void Sub(int a, int b){
    printf("Sub=%d\n",a-b);
}
void Display(void (*func_ptr)(int,int)){ // function is passing as an argument
    (*func_ptr)(9,3);
}
int main(void){
    Display(Sum);
    Display(Sub);
    return 0;
}