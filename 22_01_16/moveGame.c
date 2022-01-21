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
			printf("������: %d %d\n", x + 1, y + 1);
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
	// �����Ļ
	system("cls");
	// ��ʼ����ά����
	char board[ROW][COL];
	// ��ʼ������
	InitBoard(board, ROW, COL);
	// ��ӡ����
	DiaplayBoard(board, ROW, COL);
	// ��ʼ����
	do{
		flag:
		printf("����ߣ�");
		int empty = scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
			}
			else {
				printf("�����Ѿ���ռ�ã�\n");
				goto flag;
			}
		}else {
			printf("�������������������\n");
			goto flag;
		}
		DiaplayBoard(board, ROW, COL);
		computedMove(board, ROW, COL);
		printf("\n");
		if(isWin(board, ROW, COL)) break;
	} while (1);
	printf("�Ƿ����¿�ʼ��Ϸ�� 1.�� 0.��\n");
	int re;
	scanf("%d", &re);
	if (re == 1) {
		goto reStart;
	}
}

void menu() {
	printf("******************************\n");
	printf("********1.Play��ʼ��Ϸ********\n");
	printf("********0.Exit������Ϸ********\n");
	printf("******************************\n");
}

void threeGame() {
	int game = 0;
	menu();
	do {
		scanf("%d", &game);
		switch (game) {
		case 0:
			printf("Exit�˳���Ϸ��\n");
			break;
		case 1:
			printf("Play��Ϸ��ʼ��\n");
			startGame();
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (game);
}