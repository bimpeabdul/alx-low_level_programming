#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
*
* Return:always return 0
*/
int main(void)
{ int n;

srand(time));
n = rand() - RAND_MAX /2;
if (n < 0) 
{ printf("%sd is negative\n", n); }
else if (n == 0)
{ printf("%d is zero\n", n); }
else
{ printf("%d is postive\n", n); }
return (0); }
