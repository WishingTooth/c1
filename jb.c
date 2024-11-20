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
}	 //循环-九九乘法表

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
}	//循环-斐波那契数列

void xc(int x)
{
	system("color c");
	switch (x%10)
	{
	case(1):
	case(3):
	case(5):
	case(7):
	case(9):printf("%d为奇数\n", x); break;
	case(0):
	case(2):
	case(4):
	case(6):
	case(8):printf("%d为偶数\n", x); break;
	default:printf("Error\n错误\n");
	}
}	//选择-奇偶判断

void xd(float x,float y)
{
	system("color d");
	printf("\n%.2f\n%.2f\n%.2f\n%.2f\n", x + y, x - y, x * y, x / y);
}	//顺序-分别输出两个数的加减乘除(保留两位小数)

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
}	//判断-比较大小

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
}	//顺序-闰年判断

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
	printf("共输入%d个数\n", p);
	for (i = 0; i < p; i++)
	{
		printf("%d", g[i]);
		if (i < p)
		{
			printf(" ");
		}
	}
}	//算法-冒泡排序

int main()
{
	//system("color 9");
	int Test;
	printf("选择你要运行的程序：\n");
	printf("1.循环-九九乘法表\n");
	printf("2.循环-斐波那契数列\n");
	printf("3.选择-奇偶判断\n");
	printf("4.顺序-分别输出两个数的加减乘除(保留两位小数)\n");
	printf("5.判断-比较大小\n");
	printf("6.顺序-闰年判断\n");
	printf("7.算法-冒泡排序\n");
	printf("程序");
	scanf("%d", &Test);
	printf("\n");
	switch (Test)
	{
    case(1):
    {
        system("color a");
        xa();
    }; break;//循环-九九乘法表
    case(2):
    {
        system("color b");
        xb();
    }; break;//循环-斐波那契数列
	case(3):
	{
        system("color c");
        printf("输入一个整数\n");
		int c3;
		scanf("%d", &c3);
		xc(c3);
	}; break;//选择-奇偶判断
	case(4): 
	{
        system("color d");
        printf("输入两个数\n");
		float d1, d2;
		scanf("%f%f", &d1, &d2);
		xd(d1, d2);
	}; break;//顺序-分别输出两个数的加减乘除(保留两位小数)
    case(5):
    {
        system("color e");
		int e1, e2;
		printf("输入两个整数\n");
		scanf("%d%d", &e1, &e2);
		xe(e1,e2);
    }; break;//判断-比较大小
	case(6):
	{
		system("color f");
		int f1;
		printf("输入一个年份\n");
		scanf("%d", &f1);
		if (xf(f1) == 1)
		{
			printf("%d年是闰年。\n", f1);
		}
		else
		{
			printf("%d年不是闰年。\n", f1);
		}
	}; break;//顺序-闰年判断
	case(7):
	{
		system("color 7");
		printf("输入一组数，从小到大排序。当检测到'Enter'时停止输入。\n");
		system("echo 注意：最多可输入100个数");
		xg();
	}; break;//算法 - 冒泡排序
	default:printf("Error!\n");
	}
	printf("\n按任意键结束\n");
}
