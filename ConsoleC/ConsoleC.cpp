/*Сѧ��������*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int right = 0, wrong = 0;
int a, b, c, d;

/*�ӷ�����*/
void add()
{

	int i, j;
	for (i = 0; i<5; i++)
	{
		a = rand() % 50;//rand()����һ������������ֲ���Χ��0������������õ�1-49������
		b = rand() % 50;
		printf("��ش�:%d+%d=", a, b);
		scanf("%d", &j);
		if (a + b == j)
		{
			printf("�ش���ȷ\n\n");
			right++;
		}
		else
		{
			printf("�ش����\n\n");
			wrong++;
		}
		continue;
	}

}
/*��������*/
void minu()
{
	int i, j;
	for (i = 0; i<5; i++)
	{
		a = rand() % 50;//rand()����һ������������ֲ���Χ��0������������õ�1-49������
		b = rand() % 50;
		printf("��ش�:%d-%d=", a, b);
		scanf("%d", &j);
		if (a - b == j)
		{
			printf("�ش���ȷ\n\n");
			right++;
		}
		else
		{
			printf("�ش����\n\n");
			wrong++;

		}
		continue;
	}

}
/*�˷�����*/
void mul()
{
	int i, j;
	for (i = 0; i<5; i++)
	{
		a = rand() % 50;//rand()����һ������������ֲ���Χ��0������������õ�1-49������
		b = rand() % 50;
		printf("��ش�:%d*%d=", a, b);
		scanf("%d", &j);
		if (a*b == j)
		{
			printf("�ش���ȷ\n\n");
			right++;
		}
		else
		{
			printf("�ش����\n\n");
			wrong++;
		}
		continue;
	}

}
/*��������*/
void di()
{
	int i, j;
	for (i = 0; i<5; i++)
	{
		a = rand() % 50;//rand()����һ������������ֲ���Χ��0������������õ�1-49������
		b = rand() % 50;
		printf("��ش�:%d/%d=", a, b);
		scanf("%d", &j);
		if (a / b == j)
		{
			printf("�ش���ȷ\n\n");
			right++;
		}
		else
		{
			printf("�ش����\n\n");
			wrong++;
		}
		continue;
	}

}
/*�������*/
void hunhe()
{
	int i, j;
	for (i = 0; i<5; i++)
	{
		a = rand() % 50;//rand()����һ������������ֲ���Χ��0������������õ�1-49������
		b = rand() % 50;
		c = rand() % 50;
		d = rand() % 50;
		printf("��ش�:%d+%d-%d*%d=", a, b, c, d);
		scanf("%d", &j);
		if (a + b == j)
		{
			printf("�ش���ȷ\n\n");
			right++;
		}
		else
		{
			printf("�ش����\n\n");
			wrong++;
		}
		continue;
	}

}
void main()
{
	printf("\n��ӭ����Сѧ��������\n\n");
	while (1)
	{
		int con = 0, choose = 0;
		printf("��ѡ��:\n");
		printf("�ӷ�����������(1)\n");
		printf("��������������(2)\n");
		printf("�˷�����������(3)\n");
		printf("��������������(4)\n");
		printf("�������������(5)\n");
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
		printf("\n����ѡ�������루1��\n");
		printf("\n�˳����㣿�����루2��\n");
		scanf("%d", &con);
		if (con == 1)
			con = 1;
		if (con == 2)
			break;
	}
	printf("���ܹ����%d����\n��ȷ%d��\n����%d��\n", right + wrong, right, wrong);
}