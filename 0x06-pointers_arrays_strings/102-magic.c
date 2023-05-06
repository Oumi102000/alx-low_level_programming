#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 int n;
 int a[5];
 int *p;
 a[2] = 1024;
 p = (int*) malloc(sizeof(int));
 p = &n;
*(p + 2) = 98;
printf("a[2] = %d\n", a[2]);
free(p);
return (0);
}
