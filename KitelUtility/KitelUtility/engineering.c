#include "engineering.h"
#include "engineering_one.h"
#include "select.h"
void engineer_run();

void engineeringCal() {
	printf("공학용 계산기를 선택하셨습니다. \n");
	engineer_run();
}

void engineer_run() {
	int input = 0;
	while (1)
	{
		input = select_engineer();
		if (input == BACK) break;
		switch (input)
		{
		case ENGINEER_ONE:
			engineerOne();
			break;
		case ENGINEER_TWO:
			engineerTwo();
			break;
		case ENGINEER_HEX:
			engineerHex();
			break;
		case ENGINEER_OCT:
			engineerOct();
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
			break;
		}
		printf("아무 키나 입력하세요.\n");
		getch();
	}
}


void engineerOne() {
	printf("[공학용] 한자리 수 계산기를 선택하셨습니다.\n");
	show_engineer_one();
}
void engineerTwo() {
	printf("[공학용] 두자리 수 계산기를 선택하셨습니다.\n");
	show_engineer_two();
}
void engineerHex() {
	printf("[공학용] 16진수 계산기를 선택하셨습니다.\n");

}
void engineerOct() {
	printf("[공학용] 8진수 계산기를 선택하셨습니다.\n");

}