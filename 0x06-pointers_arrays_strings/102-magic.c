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
				    *(p + 2) = 98; // modifies n and a[2]
				        printf("a[2] = %d\n", a[2]); // should print 98
					    free(p);
					        return (0);
}
