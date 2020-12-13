#include <stdio.h>
#include <math.h>
void main()
{  
    int e,i;
    float q,k;
    float h[151];
    int a=1;
    e=0;
    printf("rate? y1/n2");
    scanf("%d",a);
    while (a==1){
       printf("?/5");
       scanf("%f",k);
       q=(q/2)+k;
       e++;
       h[e]=k;
       if (e==151){
           q=q-(h[0]/(pow(2,150)));
           for (i=0;i<151;i++){
              h[i]=h[i+1];
              e=150;
           }
       }
       printf("rate? y/n");
       scanf("%d",a);
    }
}
