// PASSING STRUCTURE VARIABLE AS AN ARGUMENT
#include <stdio.h>
struct point
{
    int x;
    int y;
};
void print(struct point *p){
    printf("x = %d\n",(*p).x);
    printf("y = %d\n",(*p).y);
}
int main(void){
    struct point p1 = {33,77};
    struct point p2 = {55,88};
    print(&p1);
    print(&p2);
    return 0;
}

