#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define NUB 10
#define ROWS ROW+2
#define COLS COL+2
void initiali(char board[ROWS][COLS], int rows, int cols, char set);
void Checker(char board[ROWS][COLS], int row, int col);
void Decorate(char board[ROWS][COLS],int row,int col);
void NslooKup(char mine[ROWS][COLS], char shou[ROWS][COLS],int row,int col );