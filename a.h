#pragma once

#define ROW 3
#define COL 3

void draw_board(int(*p)[3]);
void computer(int(*p)[3]);
void human(int(*p)[3]);
int check(int(*p)[3]);