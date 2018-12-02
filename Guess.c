#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("************************************\n");
	printf("*******1.继续游戏  2.退出游戏*******\n");
	printf("************************************\n");
}
void Game()
{
	srand(time(0));
	int a = 0;
	int b = rand() % 100+1 ;//rand()%100  产生0-99  加1就变成1-100
	while (1)
	{
		printf("请输入你要猜的数->");
		scanf("%d", &a);
		if (a > b)
		{
			printf("猜大了！！！\n");
		}
		else if (a < b)
		{
			printf("猜小了！！！\n");
		}
		else
		{
			printf("恭喜你,猜对了！！！\n");
			break;
		}
	}
}
int main()
{
	while (1)
	{
		int input = 0;
		menu();
		printf("请输入你的选择:->");
		scanf("%d", &input);
		if (input == 1)
		{
			Game();
		}
		else if (input == 2)
		{
			printf("游戏结束！\n");
			break;
		}
		else
		{
			printf("输入有误，请重新输入。\n");
		}
	}
    system("pause");
    return 0;
}