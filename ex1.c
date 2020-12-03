#include <stdio.h>
void main()
{
    int a[2][3]={1,2,10,11,12,20};
    int *p;
    int i,j;
    p=&a;
    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            printf("%d", *p);
            p++;
        }
        printf("\n" );
    }
}
