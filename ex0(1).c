#include <stdio.h>
void main()
{   
    int s=1;
    const int *p = &s;
    printf("%d\n",*p);
    printf("%d",*p+1);
}
