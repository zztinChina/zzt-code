#include"game.h"
#include<stdio.h>
void initeboard(char board[ROWS][COLS],int row ,int col,char set)
{
	int i= 0;
	for (i=0;i<row;i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}
void displayboard(char board[ROWS][COLS],int row ,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);   
		for (j = 1; j <= col; j++)//这是列
		{   
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

}
void set(char board[ROWS][COLS], int row, int col)
{
	int count = easy_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void find(char mineboard[ROWS][COLS],char showboard[ROWS][COLS],int row, int col)
{
	printf("请输入您想要探查的目标の坐标\n");
	int x = 0;
	int y = 0;
	while (1)
	{   
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mineboard[x][y] == '1')
			{
				printf("呵呵您的运气不好被炸死了哈哈哈啊哈哈哈\n");
				break;
			}
			else
			{
				int h = math(mineboard, x, y) ;
				showboard[x][y] = h+'0';
				displayboard(showboard, row, col);
				
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}
int  math(char board[ROWS][COLS], int x, int y)
{
	return board[x][y + 1] + board[x][y - 1]
		+ board[x - 1][y] + board[x - 1][y + 1]
		+ board[x - 1][y - 1] + board[x - 1][y - 1]
		+ board[x - 1][y + 1]+board[x-1][y] - 8 * '0';
}