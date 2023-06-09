// #include "main.h"

// /**
//  * print_chessboard - prints the chessboard
//  * @a: pointer to pieces to print
//  *
//  * Return: void
//  */
// void print_chessboard(char (*a)[8])
// {
// 	int i, j;

// 	for (i = 0; i < 8; i++)
// 	{
// 		for (j = 0; j < 8; j++)
// 		{
// 			_putchar(a[i][j]);
// 		}
// 		_putchar('\n');
// 	}
// }

#include <stdio.h>

void print_chessboard(char (*a)[8]) {
    int row, col;

    for (row = 0; row < 8; row++) {
        for (col = 0; col < 8; col++) {
            printf("%c", a[row][col]);
        }
        printf("\n");
    }
}
