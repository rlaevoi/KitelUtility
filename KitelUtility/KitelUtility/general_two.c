#include "general_two.h"
#include "select.h"

void sub(double a, double b) {
	double result;
	result = a - b;
	printf("결과값은 %lf입니다.\n", result);
}
void add(double a, double b) {
	double result ;
	result = a + b;
	printf("결과값은 %lf입니다.\n", result);
}
void div(double a, double b) {
	double result ;
	result = a / b;
	printf("결과값은 %lf입니다.\n", result);
}
void mul(double a, double b) {
	double result ;
	result = a * b;
	printf("결과값은 %lf입니다.\n", result);
}
void per(double a, double b) {
	double result ;
	double Mul;
	Mul = a*b;
	result = (double)Mul/100;
	printf("결과값은 %lf입니다.\n", result);
}