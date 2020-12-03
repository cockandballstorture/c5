#include <stdio.h>
void main()
{   float q,k,l;
    int h=0;
    q=0;
    k=0;
    while  (scanf("%f",&l)==1)
    {
        k++;
        q=q+l;
        printf("%f\n",q/k);
    }
}
