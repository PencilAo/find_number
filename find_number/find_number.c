#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void munb()
{
	printf("***************************\n");
	printf("*******   1. play   *******\n");
	printf("*******   0. exit   *******\n");
	printf("***************************\n");
}
void game()
{
	int guess = 0;
	int num = rand() % 100 + 1;    //设置你要生成的数的范围这里是1~100
	while (1)
	{
		printf("猜一个数");
		scanf("%d", &guess);
		if (guess < num)
		{
			printf("猜小了\n");
		}
		else if (guess > num)
		{
			printf("猜大了\n");
		}	
		else
		{
			printf("猜对了\n");
			break;
		}
	}

}
int main()
{
	srand((unsigned int)time(NULL));   //产生一个随机数
	int input = 0;
	munb();
	printf("请输入");
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("结束\n");
			break;
		default:
			printf("1/0\n");
			break;
		}

	} while (input);
	return 0;
}
