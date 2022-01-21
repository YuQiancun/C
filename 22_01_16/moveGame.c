#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int isWin(char board[ROW][COL], int row, int col) {
	char line[] = { ' ' };
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			line[j] = board[i][j];
		}
	}

	return 1;
}

void computedMove(char board[ROW][COL], int row, int col) {
	int x, y;
	do {
		x = rand() % COL;
		y = rand() % ROW;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			DiaplayBoard(board, ROW, COL);
			printf("电脑走: %d %d\n", x + 1, y + 1);
			break;
		}
	} while (1);
}

void DiaplayBoard(char board[ROW][COL], int row, int col) {
	system("cls");
	for (size_t i = 0; i < row; i++) {
		for (size_t j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if(j < (col - 1)) printf("|");
		}
		if (i < (row - 1)) {
			printf("\n");
			for (size_t k = 0; k < col; k++) {
				if (k < (col - 1)) {
					printf("---|");
				} else {
					printf("---\n");
				}
			}
		} else {
			printf("\n");
		}
	}
}

void InitBoard(char board[ROW][COL], int row, int col) {
	for (size_t i = 0; i < row; i++){
		for (size_t j = 0; j < col; j++){
			board[i][j] = ' ';
		}
	}
}

void startGame() {

reStart:;

	int step = 0;
	int win = 0;
	int x, y;
	// 清空屏幕
	system("cls");
	// 初始化二维数组
	char board[ROW][COL];
	// 初始化棋盘
	InitBoard(board, ROW, COL);
	// 打印棋盘
	DiaplayBoard(board, ROW, COL);
	// 开始走棋
	do{
		flag:
		printf("玩家走：");
		int empty = scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
			}
			else {
				printf("坐标已经被占用！\n");
				goto flag;
			}
		}else {
			printf("输入错标错误，请重新输入\n");
			goto flag;
		}
		DiaplayBoard(board, ROW, COL);
		computedMove(board, ROW, COL);
		printf("\n");
		if(isWin(board, ROW, COL)) break;
	} while (1);
	printf("是否重新开始游戏！ 1.是 0.否\n");
	int re;
	scanf("%d", &re);
	if (re == 1) {
		goto reStart;
	}
}

void menu() {
	printf("******************************\n");
	printf("********1.Play开始游戏********\n");
	printf("********0.Exit结束游戏********\n");
	printf("******************************\n");
}

void threeGame() {
	int game = 0;
	menu();
	do {
		scanf("%d", &game);
		switch (game) {
		case 0:
			printf("Exit退出游戏！\n");
			break;
		case 1:
			printf("Play游戏开始！\n");
			startGame();
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (game);
}