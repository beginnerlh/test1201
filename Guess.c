#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("************************************\n");
	printf("*******1.������Ϸ  2.�˳���Ϸ*******\n");
	printf("************************************\n");
}
void Game()
{
	srand(time(0));
	int a = 0;
	int b = rand() % 100+1 ;//rand()%100  ����0-99  ��1�ͱ��1-100
	while (1)
	{
		printf("��������Ҫ�µ���->");
		scanf("%d", &a);
		if (a > b)
		{
			printf("�´��ˣ�����\n");
		}
		else if (a < b)
		{
			printf("��С�ˣ�����\n");
		}
		else
		{
			printf("��ϲ��,�¶��ˣ�����\n");
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
		printf("���������ѡ��:->");
		scanf("%d", &input);
		if (input == 1)
		{
			Game();
		}
		else if (input == 2)
		{
			printf("��Ϸ������\n");
			break;
		}
		else
		{
			printf("�����������������롣\n");
		}
	}
    system("pause");
    return 0;
}