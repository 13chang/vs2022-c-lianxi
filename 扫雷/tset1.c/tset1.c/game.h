#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define NUM 10
void TialiZation(char board[ROWS][COLS], int row, int col, char set);
void print(char board[ROWS][COLS], int row, int col);
void Disposition(char board[ROWS][COLS],int row,int col);
void NsooKup(char mine[ROWS][COLS],char shou[ROWS][COLS],int row,int col);