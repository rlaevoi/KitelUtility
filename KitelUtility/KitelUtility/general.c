#include "general.h"
#include "select.h"
#include "general_one.h"
#include "general_two.h"
void general_run();

void generalCal() {
	printf("�Ϲ� ���⸦ �����ϼ̽��ϴ�. \n");
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
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			break;
		}
		printf("�ƹ� Ű�� �Է��ϼ���.\n");
		getch();
	}
}

void generalOne() {
	double number;
	int cal;
	printf("[�Ϲݿ�] ���ڸ� �� ���⸦ �����ϼ̽��ϴ�.\n");
	show_general_one();
	printf("���ڸ� �Է��ϼ���.\n");
	scanf_s("%lf", &number);
	printf("������ �Է��ϼ���.\n");
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
	printf("[�Ϲݿ�] ���ڸ� �� ���⸦ �����ϼ̽��ϴ�.\n");
	show_general_two();
	printf("ù��° ���ڸ� �Է��ϼ���.\n");
	scanf_s("%lf", &first);
	printf("������ �Է��ϼ���.\n");
	scanf_s("%d", &cal);
	printf("�ι�° ���ڸ� �Է��ϼ���.\n");
	scanf_s("%lf", &second);

	switch (cal) {
	case 1:
		sub(first, second);
		break;
	case 2:
		add(first, second);
		break;
	case 3:
		div(first, second);
		break;
	case 4:
		mul(first, second);
		break;
	case 5:
		per(first, second);
		break;
	}
}
void generalString() {
	printf("[�Ϲݿ�] ���ڿ� ���⸦ �����ϼ̽��ϴ�.\n");

}