
//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void password()//默认密码为123456 
{
	char input[1024] = { 0 };
	int count = 3;
	while (1)
	{
		printf("请输入密码:->\n");
		scanf("%s", &input);
		if (strcmp(input, "123456") == 0)
		{
			printf("密码正确，成功登陆。\n");
				break;
		}
		else
		{
			count--;
			printf("密码输入错误，请重新输入。");
			printf("还有%d次机会,\n",count);
		}
		if (count == 0)
		{
			printf("卡已经被冻结。\n");
			break;
		}
	}
}
void conversion()
{
	char a = 0;
	while (1)
	{
		fflush(stdin);
		printf("请输入字符->\n");
		scanf("%c", &a);
		if (a >= 97 && a <= 122)
		{
			printf("%c\n", a - 32);
			break;
		}
		else if (a <= 90 && a >= 65)
		{
			printf("%c\n", a + 32);
			break;
		}
		else if (a >= 48 && a <= 57)
		{
			printf(" \n");
		}
		else
		{
			printf("输入有误，请重新输入\n");
		}
	}
}
int main()
{
	password();
	conversion();
    system("pause");
    return 0;
}