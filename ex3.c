#include <stdio.h>
#include <string.h>
void main()
{   int n,m,i;
    char a[35];
    char r[35];
    scanf("%15s", a);
    n=strlen (a);
    char y[50]="****************";
    m=(16-n);
    if(n<16){
       strncat(a, y, m);
    }
    printf("%s\n",a);
    for (i=8;i<16;i++){
       a[i]=a[15-i];
    }
    printf("%s",a);
}
