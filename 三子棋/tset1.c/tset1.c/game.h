#define  _CRT_SECURE_NO_WARNINGS
#pragma once
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
void chessboard(char board[ROW][COL], int row, int col);
void printchessboard(char board [ROW][COL],int row,int col);
void playe(char board[ROW][COL],int row,int col);
void ComPuter(char board[ROW][COL],int row,int col);
char Iswin(char board[ROW][COL], int row, int col);
