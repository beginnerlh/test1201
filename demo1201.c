
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void password()//Ĭ������Ϊ123456 
{
	char input[1024] = { 0 };
	int count = 3;
	while (1)
	{
		printf("����������:->\n");
		scanf("%s", &input);
		if (strcmp(input, "123456") == 0)
		{
			printf("������ȷ���ɹ���½��\n");
				break;
		}
		else
		{
			count--;
			printf("��������������������롣");
			printf("����%d�λ���,\n",count);
		}
		if (count == 0)
		{
			printf("���Ѿ������ᡣ\n");
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
		printf("�������ַ�->\n");
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
			printf("������������������\n");
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