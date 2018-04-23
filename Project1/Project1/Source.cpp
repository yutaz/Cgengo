#include<stdio.h>
#include<math.h>

int main()
{
	printf("‰Í“‡—S‘¾\n");
	printf("%d“\n", 100 * 56 / 256);
	printf("%d\n", 100 * 1200 / 2500);
	//100%=1 48%=0.48
	//0.48*15
	int a = 0.48 * 15;
	for (int i = 0; i <a; i++)
	{

		printf(" ™  \n");

	}
	/*
	100%==2500     100=15  48=x
	48%==1200      100:15=48:x
	100%:15=48%:x
	720=100x
	x=720/100
	x=7.2
	*/
	double x = cos(3.14 / 180 * 30);
	double y = sin(3.14 / 180 * 30);
	printf("%f\n", x / y);
	float abc = 0;
	abc = x / y;
	printf("%f\n", 0.5*abc);

	int A = 1;

	printf("%d\n", A << 2);

	int A1 = 8;
	printf("%d", A1 >> 1);

	getchar();
	return 0;

}