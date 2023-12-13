/*
 ============================================================================
 Name        : chg_test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "color_hitting_game.h"

int main(void) {
	puts("エンターキーでゲームを開始します。");
	while (getchar() != '\n') {
	}
	chg_select_operation();
	return EXIT_SUCCESS;
}
