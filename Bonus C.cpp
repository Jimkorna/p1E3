#include <stdio.h>
int main(void)
{
	int a=15;
	int b=40;
	int c=0;
	c=a;
	a=b;
	b=c;
	printf("a= %d\n", a);
	printf("b = %d", b);
	return 0;
}
