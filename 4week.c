/*202111593 Ȳ����*/
#include <stdio.h>

int main(void)
{
	printf("202111593 Ȳ����\n");
	int x = 10;
	int y = 20;
	printf("x = %d", x);
	printf(" y = %d\n", y);
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
	printf("x = %d", x);
	printf(" y = %d", y);
	
	return 0;
}