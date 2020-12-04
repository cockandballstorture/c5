#include <stdio.h>
int main()
{ 
    int s=1;
    int *p;
    int *q;
    p=&s;
    q=p;
    printf("%d,%d\n",*p,*q);
    printf("%d\n",*p+1);
    *p--;
    *q++;
    printf("%d,%d",*p,*q);
}
