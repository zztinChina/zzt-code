#include<stdlib.h>
#include<time.h>
#include"game.h"
void menu()
{
	printf("********1.��ʼ��Ϸ  0.�˳���Ϸ*********\n");
	printf("********1.��ʼ��Ϸ  0.�˳���Ϸ*********\n");
	printf("********1.��ʼ��Ϸ  0.�˳���Ϸ*********\n");
	printf("********1.��ʼ��Ϸ  0.�˳���Ϸ*********\n");
}
void game()
{  //1.������������
	char mineboard[ROWS][COLS] = { 0 };
	char showboard[ROWS][COLS] = { 0 };
	//2.��ʼ����������
	initeboard(mineboard,ROWS,COLS,'0');
	initeboard(showboard, ROWS, COLS, '*');//�����̳�ʼ��Ϊ�㣻
	//displayboard(mineboard, ROW, COL);
	//3.չʾһ�����ص�����
	displayboard(showboard,ROW,COL);
	//4.���ϼ�����
	set(mineboard, ROW, COL);
	displayboard(mineboard, ROW, COL);
	find(mineboard, showboard, ROW, COL);
}
void text()
{
	srand((unsigned int)time(NULL));
	int n = 0;
	do
	{
		menu();
		printf("������1.0.ѡ��ʼ/�˳�\n");
		scanf_s("%d", &n);
		switch (n)
		{
		case 1:
			printf("��ʼ��Ϸ....\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ....\n");
			break;
		default:
			printf("����������������룡/n");
			break;
		}
	} while (n);
}

#include<stdio.h>
int main()
{
	text();
	return 0;
}