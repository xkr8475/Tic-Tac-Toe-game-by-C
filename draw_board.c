#include <stdio.h>

void draw_board(int(*p)[3]) {
	for (int i = 0; i < 3; i++) {
		printf("--------------\n");
		printf("| %d | %d | %d |\n", p[i][0],p[i][1],p[i][2]);
		printf("--------------\n");
	}
}