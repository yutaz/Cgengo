#include<stdio.h>
//�ϐ��E�E�E��̒l���L�����郂�m
//�z��E�E�E�����^�̒l�𕡐��L���o���郂�m
//�^�Ɠ����l��v�f���Ɠ����������l�����ł���B
//�z��ƃ|�C���^�̊֌W
//int�@ a�@�@�@�@[3]
//���^�@�����O�@���v�f��
int main(void)
{
	//Q1  �z���錾���A1.0��3.0��4.0���̒l�������o�͂��Ȃ����B

	float x[3];
	x[0] = 1.0f;
	x[1] = 3.0f;
	x[2] = 4.0f;

	for (int i = 0; i < 3; i++)
	{
		printf("%.1lff\n", x[i]);
	}
	//Q2�@�z���錾��2/3���L�����Ȃ����B��2�E3�͐����ł�
	int a[2];
	a[0] = 2;
	a[1] = 3;

	printf("%d/%d\n", a[0], a[1]);
	//Q3 �z��ɋL�����������������ŏo��

	printf("%f\n", (float)a[0] / (float)a[1]);

	//�֐��E�E�E�֐��͈�̎d������������
	//�֐��͈����Ƃ����^����ꂽ�l�����Ɏd��
	//�����{���A�Ԃ�l�Ō��ʂ�Ԃ��B
	/*int sub(int x);
	{
	�����i�d�����e�Fx�����ɏ����j


	return �Ԃ�l;
	}
	*/

	//��
	/*int sub(int x)
	{
	int y=0;
	y=x/x*x/
	y++;
	return y
	}
	void main()
	int x=2;
	int a=0;

	a=sub(x)
	printf("%d",a);
	a=sub(3);
	printf("%d",a);
	}
	*/


	/*float sub(int x, int y)
	{
	int z = 0;
	for (int i = 0; i < y; i++)
	z += x;
	return z;
	}
	void main()
	{
	int a = 0;
	a =sub(2,3)+sub(4, 3);*/

	//Q4 ���͂����l���}�̒��ł����"OK"�����łȂ����"NO"�Əo�͂��Ȃ���



	scanf_s("%d\n", &a);



	getchar();
	return 0;
}