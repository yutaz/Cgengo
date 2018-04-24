#include<stdio.h>
int main()
{
	int x = 0x00;

	x |= 0x02;
	x |= 0x08;
	printf("0%x\n", x);

	x = (x << 4);
	printf("%x\n", x);

	x &= 0x10;
	printf("%x\n", x);

	x = 0xaf;

	x &= 0x08;
	int y(x >> 3);
	printf("%x\n", y);

	getchar();
	return 0;
}