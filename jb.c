#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void xa()
{
	system("color a");
	int x, y;
	for (x = 1; x <= 9; x++)
	{
		for (y = 1; y <= x; y++)
		{
			printf("%d*%d=%d\t", y, x, x * y);
		}
		printf("\n");
	}
}	 //ѭ��-�žų˷���

void xb()
{
	system("color b");
	int a[0x39] = { 1,1 };
	int x, y;
	for (x = 2; x < 0x39; x++)
	{
		a[x] = a[x - 1] + a[x - 2];
	}
	for (y = 0; y < 35; y++)
	{
		printf("%d\t\t%X\n", a[y], a[y]);
	}
}	//ѭ��-쳲���������

void xc(int x)
{
	system("color c");
	switch (x%10)
	{
	case(1):
	case(3):
	case(5):
	case(7):
	case(9):printf("%dΪ����\n", x); break;
	case(0):
	case(2):
	case(4):
	case(6):
	case(8):printf("%dΪż��\n", x); break;
	default:printf("Error\n����\n");
	}
}	//ѡ��-��ż�ж�

void xd(float x,float y)
{
	system("color d");
	printf("\n%.2f\n%.2f\n%.2f\n%.2f\n", x + y, x - y, x * y, x / y);
}	//˳��-�ֱ�����������ļӼ��˳�(������λС��)

void xe(int x,int y)
{
	system("color e");
	if (x < y)
	{
		x = x ^ y;
		y = x ^ y;
		x = x ^ y;
	}
	printf("%d>%d\n", x, y);
}	//�ж�-�Ƚϴ�С

int xf(int a)
{
	int w;
	system("color f");
	for (;;)
	{
		if (a % 400 == 0)
		{
			w = 1;
			break;
		}
		if (a % 100 == 0)
		{
			w = 0;
			break;
		}
		if (a % 4 == 0)
		{
			w = 1;
			break;
		}
		else
		{
			w = 0;
			break;
		}
	}
	return (w);
}	//˳��-�����ж�

void xg()
{
	system("color 7");
	int g[100], i, j, p = 0;
	char d;
	for (i = 0; i < 100; i++)
	{
		scanf("%d%c", &g[i], &d);
		p += 1;
		if (d == '\n')
		{
			break;
		}
	}
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < p - i - 1; j++)
		{
			if (g[j] > g[j + 1])
			{
				g[j] = g[j] ^ g[j + 1];
				g[j + 1] = g[j] ^ g[j + 1];
				g[j] = g[j] ^ g[j + 1];
			}
		}
	}
	printf("������%d����\n", p);
	for (i = 0; i < p; i++)
	{
		printf("%d", g[i]);
		if (i < p)
		{
			printf(" ");
		}
	}
}	//�㷨-ð������

int main()
{
	//system("color 9");
	int Test;
	printf("ѡ����Ҫ���еĳ���\n");
	printf("1.ѭ��-�žų˷���\n");
	printf("2.ѭ��-쳲���������\n");
	printf("3.ѡ��-��ż�ж�\n");
	printf("4.˳��-�ֱ�����������ļӼ��˳�(������λС��)\n");
	printf("5.�ж�-�Ƚϴ�С\n");
	printf("6.˳��-�����ж�\n");
	printf("7.�㷨-ð������\n");
	printf("����");
	scanf("%d", &Test);
	printf("\n");
	switch (Test)
	{
    case(1):
    {
        system("color a");
        xa();
    }; break;//ѭ��-�žų˷���
    case(2):
    {
        system("color b");
        xb();
    }; break;//ѭ��-쳲���������
	case(3):
	{
        system("color c");
        printf("����һ������\n");
		int c3;
		scanf("%d", &c3);
		xc(c3);
	}; break;//ѡ��-��ż�ж�
	case(4): 
	{
        system("color d");
        printf("����������\n");
		float d1, d2;
		scanf("%f%f", &d1, &d2);
		xd(d1, d2);
	}; break;//˳��-�ֱ�����������ļӼ��˳�(������λС��)
    case(5):
    {
        system("color e");
		int e1, e2;
		printf("������������\n");
		scanf("%d%d", &e1, &e2);
		xe(e1,e2);
    }; break;//�ж�-�Ƚϴ�С
	case(6):
	{
		system("color f");
		int f1;
		printf("����һ�����\n");
		scanf("%d", &f1);
		if (xf(f1) == 1)
		{
			printf("%d�������ꡣ\n", f1);
		}
		else
		{
			printf("%d�겻�����ꡣ\n", f1);
		}
	}; break;//˳��-�����ж�
	case(7):
	{
		system("color 7");
		printf("����һ��������С�������򡣵���⵽'Enter'ʱֹͣ���롣\n");
		system("echo ע�⣺��������100����");
		xg();
	}; break;//�㷨 - ð������
	default:printf("Error!\n");
	}
	printf("\n�����������\n");
}
