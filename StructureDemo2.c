#include <stdio.h>
struct Demo
{
    int i;
    float f;
    int j;
};
int main()
{
    struct Demo obj;

    obj.i= 11;
    obj.f= 98.4f;
    obj.j= 21;
    
    printf("%d\n" );
    
    return 0;
}