#include<stdlib.h>
#include<time.h>
#include"game.h"
void menu()
{
	printf("********1.开始游戏  0.退出游戏*********\n");
	printf("********1.开始游戏  0.退出游戏*********\n");
	printf("********1.开始游戏  0.退出游戏*********\n");
	printf("********1.开始游戏  0.退出游戏*********\n");
}
void game()
{  //1.建立两个棋盘
	char mineboard[ROWS][COLS] = { 0 };
	char showboard[ROWS][COLS] = { 0 };
	//2.初始化两个棋盘
	initeboard(mineboard,ROWS,COLS,'0');
	initeboard(showboard, ROWS, COLS, '*');//把棋盘初始化为零；
	//displayboard(mineboard, ROW, COL);
	//3.展示一下神秘的棋盘
	displayboard(showboard,ROW,COL);
	//4.埋上几个雷
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
		printf("请输入1.0.选择开始/退出\n");
		scanf_s("%d", &n);
		switch (n)
		{
		case 1:
			printf("开始游戏....\n");
			game();
			break;
		case 0:
			printf("退出游戏....\n");
			break;
		default:
			printf("输入错误，请重新输入！/n");
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