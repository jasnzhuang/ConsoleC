/*小学四则运算*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int right = 0, wrong = 0;
int a, b, c, d;

/*加法运算*/
void add()
{

	int i, j;
	for (i = 0; i<5; i++)
	{
		a = rand() % 50;//rand()产生一个随机函数，分布范围是0到最大整数，得到1-49的整数
		b = rand() % 50;
		printf("请回答:%d+%d=", a, b);
		scanf("%d", &j);
		if (a + b == j)
		{
			printf("回答正确\n\n");
			right++;
		}
		else
		{
			printf("回答错误\n\n");
			wrong++;
		}
		continue;
	}

}
/*减法运算*/
void minu()
{
	int i, j;
	for (i = 0; i<5; i++)
	{
		a = rand() % 50;//rand()产生一个随机函数，分布范围是0到最大整数，得到1-49的整数
		b = rand() % 50;
		printf("请回答:%d-%d=", a, b);
		scanf("%d", &j);
		if (a - b == j)
		{
			printf("回答正确\n\n");
			right++;
		}
		else
		{
			printf("回答错误\n\n");
			wrong++;

		}
		continue;
	}

}
/*乘法运算*/
void mul()
{
	int i, j;
	for (i = 0; i<5; i++)
	{
		a = rand() % 50;//rand()产生一个随机函数，分布范围是0到最大整数，得到1-49的整数
		b = rand() % 50;
		printf("请回答:%d*%d=", a, b);
		scanf("%d", &j);
		if (a*b == j)
		{
			printf("回答正确\n\n");
			right++;
		}
		else
		{
			printf("回答错误\n\n");
			wrong++;
		}
		continue;
	}

}
/*除法运算*/
void di()
{
	int i, j;
	for (i = 0; i<5; i++)
	{
		a = rand() % 50;//rand()产生一个随机函数，分布范围是0到最大整数，得到1-49的整数
		b = rand() % 50;
		printf("请回答:%d/%d=", a, b);
		scanf("%d", &j);
		if (a / b == j)
		{
			printf("回答正确\n\n");
			right++;
		}
		else
		{
			printf("回答错误\n\n");
			wrong++;
		}
		continue;
	}

}
/*混合运算*/
void hunhe()
{
	int i, j;
	for (i = 0; i<5; i++)
	{
		a = rand() % 50;//rand()产生一个随机函数，分布范围是0到最大整数，得到1-49的整数
		b = rand() % 50;
		c = rand() % 50;
		d = rand() % 50;
		printf("请回答:%d+%d-%d*%d=", a, b, c, d);
		scanf("%d", &j);
		if (a + b == j)
		{
			printf("回答正确\n\n");
			right++;
		}
		else
		{
			printf("回答错误\n\n");
			wrong++;
		}
		continue;
	}

}
void main()
{
	printf("\n欢迎进入小学四则运算\n\n");
	while (1)
	{
		int con = 0, choose = 0;
		printf("请选择:\n");
		printf("加法运算请输入(1)\n");
		printf("减法运算请输入(2)\n");
		printf("乘法运算请输入(3)\n");
		printf("除法运算请输入(4)\n");
		printf("混合运算请输入(5)\n");
		if (con == 0)
			scanf("%d", &choose);
		switch (choose)
		{
		case 1:add(); break;
		case 2: minu(); break;
		case 3: mul(); break;
		case 4: di(); break;
		case 5: hunhe(); break;
		}
		printf("\n重新选择？请输入（1）\n");
		printf("\n退出运算？请输入（2）\n");
		scanf("%d", &con);
		if (con == 1)
			con = 1;
		if (con == 2)
			break;
	}
	printf("您总共完成%d道题\n正确%d道\n错误%d道\n", right + wrong, right, wrong);
}