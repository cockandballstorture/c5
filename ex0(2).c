#include <stdio.h>
void main()
{
    float a=1;
    float* const p=&a;
    printf("%f",*p);

}
