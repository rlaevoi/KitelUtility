#include "general.h"
#include "select.h"
#include "general_one.h"
void general_run();

void generalCal() {
	printf("일반 계산기를 선택하셨습니다. \n");
	general_run();
}

void general_run() {
	int input = 0;
	while (1)
	{
		input = select_general();
		if (input == BACK) break;
		switch (input)
		{
		case GENERAL_ONE:
			generalOne();
			break;
		case GENERAL_TWO:
			generalTwo();
			break;
		case GENERAL_STRING:
			generalString();
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
			break;
		}
		printf("아무 키나 입력하세요.\n");
		getch();
	}
}

void generalOne() {
	double number;
	int cal;
	printf("[일반용] 한자리 수 계산기를 선택하셨습니다.\n");
	show_general_one();
	printf("숫자를 입력하세요.\n");
	scanf_s("%lf", &number);
	printf("연산을 입력하세요.\n");
	scanf_s("%d", &cal);

	switch(cal) 
	{
	case GENERAL_ONE_SPART:
		sqrt1(number);
		break;
	case GENERAL_ONE_X1:
		x1(number);
		break;
	}
}
void generalTwo() {
	double first, second;
	int cal;
	printf("[일반용] 두자리 수 계산기를 선택하셨습니다.\n");
	show_general_two();
	printf("첫번째 숫자를 입력하세요.\n");
	scanf_s("%lf", &first);
	printf("연산을 입력하세요.\n");
	scanf_s("%d", &cal);
	printf("두번째 숫자를 입력하세요.\n");
	scanf_s("%lf", &second);
}
void generalString() {
	printf("[일반용] 문자열 계산기를 선택하셨습니다.\n");

}