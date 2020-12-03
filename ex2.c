#include <stdio.h>
#include <string.h>
void main()
{   int q,n,y,m;
    char a[128];
    char b[128];
    scanf("%127s", a);
    scanf("%127s", b);
    n=strlen (a);
    y=strlen (b);
    printf("%d\n" ,n);
    printf("%d\n" ,y);
    if(n<y){
        n=n+y;
        y=n-y;
        n=n-y;
    }
    for (q=1;q<n;q++){
        if(m=strncmp(a, b, q)!=0){
            printf("%d",q);
            break;
        }
        else{
        }
    }
}
