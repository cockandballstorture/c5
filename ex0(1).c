#include <stdio.h>
void main()
{   
    int s=1;
    const int *p = &s;
    printf("%d\n",*p);
    printf("%d\n",*p+1);
    printf("%d,%d",*(p++),*(p--));
}
