#include <stdio.h>

void human(int(*p)[3]) {
	int row = 0, col = 0;

	printf("��ǥ�� �Է� :");
	scanf("%d %d", &row, &col);

	p[row][col] = 2;

	_getch();
    system("cls");
}