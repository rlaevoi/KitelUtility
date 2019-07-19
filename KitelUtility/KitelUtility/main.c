#include <stdio.h>
#include <stdlib.h>
#include "general.h"

void show(); // 프로그램 소개
void run(); // 실행
int selectMenu(); //전체 메뉴

void main() {
	run();
}

void show() {
	printf("============키텔 유틸리티 프로그램============\n");
	printf("[1] 일반 계산기\n");
	printf("[2] 공학용 계산기\n");
	printf("[0] 종료\n");
	printf("==============================================\n");
}

void run() {
	int input = 0;
	while (1)
	{
		input = selectMenu();
		if (input == 0) break;
		switch (input)
		{
		case 1:
			generalCal();
			break;
		case 2:
			engineeringCal();
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
			break;
		}
		printf("아무 키나 입력하세요.\n");
		getch();
	}
}

int selectMenu() {
	int input = 0;
	show();
	scanf_s("%d", &input);
	while (input != 0) {
		if (input == 1) {
			return 1;
		}
		else if (input == 2) {
			return 2;
		}
		else {
			return -1;
		}
	}
	return 0;
}