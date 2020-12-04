#include <stdio.h>

int main()
{ 
    int s=1;
    const int *const p = &s;
    printf("%d",*p);
}
