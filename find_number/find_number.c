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
	int num = rand() % 100 + 1;
	while (1)
	{
		printf("��һ����");
		scanf("%d", &guess);
		if (guess < num)
		{
			printf("��С��\n");
		}
		else if (guess > num)
		{
			printf("�´���\n");
		}	
		else
		{
			printf("�¶���\n");
			break;
		}
	}

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	munb();
	printf("������");
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("����\n");
			break;
		default:
			printf("1/0\n");
			break;
		}

	} while (input);
	return 0;
}