#include <stdio.h>
#include <string.h>
void main()
{   int n,m,p,q,i,e;
    char a[35];
    char r[35];
    scanf("%15s", a);
    n=strlen (a);
    e=8-n;
    if (e>0){
        q=2*e;
        e=(e*2)+n;
    }
    else{
        e=8;
    }
    char y[50]="\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*";
    m=(16-n)*2;
    if(n<15){
       strncat(a, y, m);
    }
    printf("%s\n",r);
    if (n<15){
        strncpy(r, a, e);
        strncat(r, y, e);
        for (i=0;i<n+1;i++){
            r[(q*2)+n+1+i]=r[n-i];
        }
    }
    else{
      strncpy(r, a, 16);
      for (i=9;i<17;i++){
            r[i]=r[17-i];
        }
    }
    printf("%s",r);
}
