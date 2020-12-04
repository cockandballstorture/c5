#include <stdio.h>

int main()
{ 
    int s=1;
    int *p;
    int *q;
    p=&s;
    q=p;
    printf("%d,%d",*p,*q);
}
