
#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void intboard(char board[ROW][COL], int row, int col);
void disboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computemovew(char board[ROW][COL], int row, int col);

//���Ӯ ��*��
//����Ӯ  '#'
//ƽ�� ��C��
//��Ϸ���� ��Q��
char inwin(char board[ROW][COL], int row, int col);