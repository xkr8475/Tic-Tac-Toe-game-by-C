#include <stdio.h>
#include <stdlib.h>
#include "a.h"

int main(void) {
	system("mode con: cols=17 lines=22");
	int board[ROW][COL] = { 0, };

	draw_board(board);


	while (1) {
		printf("**´ç½Å  Âø¼ö**\n");
		computer(board);
		draw_board(board);
		printf("**ÄÄÇ»ÅÍÂø¼ö**\n");

		if (check(board) == 0)
			break;

		human(board);
		draw_board(board);
	}









		return 0;
}