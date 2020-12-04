#include <stdio.h>

int main()
{ 
    int s=1;
    int *p;
    int *q;
    p=&s;
    q=p;
    printf("%d,%d\n",*p,*q);
    *p--;
    *q++;
    printf("%d,%d",*p,*q);
}
