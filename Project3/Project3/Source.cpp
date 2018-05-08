#include<stdio.h>
//変数・・・一つの値を記憶するモノ
//配列・・・同じ型の値を複数記憶出来るモノ
//型と同じ値を要素数と同じ数だけ値を代入できる。
//配列とポインタの関係
//int　 a　　　　[3]
//↑型　↑名前　↑要素数
int main(void)
{
	//Q1  配列を宣言し、1.0ｆ3.0ｆ4.0ｆの値を代入し出力しなさい。

	float x[3];
	x[0] = 1.0f;
	x[1] = 3.0f;
	x[2] = 4.0f;

	for (int i = 0; i < 3; i++)
	{
		printf("%.1lff\n", x[i]);
	}
	//Q2　配列を宣言し2/3を記憶しなさい。※2・3は整数です
	int a[2];
	a[0] = 2;
	a[1] = 3;

	printf("%d/%d\n", a[0], a[1]);
	//Q3 配列に記憶した分数を小数で出力

	printf("%f\n", (float)a[0] / (float)a[1]);

	//関数・・・関数は一つの仕事だけをする
	//関数は引数という与えられた値を元に仕事
	//を実施し、返り値で結果を返す。
	/*int sub(int x);
	{
	処理（仕事内容：xを元に処理）


	return 返り値;
	}
	*/

	//例
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

	//Q4 入力した値が図の中であれば"OK"そうでなければ"NO"と出力しなさい



	scanf_s("%d\n", &a);



	getchar();
	return 0;
}