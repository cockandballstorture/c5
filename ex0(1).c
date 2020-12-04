#include <stdio.h>
int main()
{ 
    int s=1;
    int *p;
    int *q;
    p=&s;
    printf("%d,%d\n",*p,*q);
    printf("%d\n",*p+1);
    printf("%d,%d",*(p--),*(p+2));
}
