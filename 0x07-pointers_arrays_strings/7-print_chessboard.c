#include "main.h"

/**
 * print_chessboard - prints 2D array of chessboard
 * @a: chessboard array
 * Retrun: void
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; < 8; col++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
