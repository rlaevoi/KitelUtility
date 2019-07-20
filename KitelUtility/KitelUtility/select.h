void show_main();
int select_main();
void show_general();
int select_general();
void show_engineer();
int select_engineer();

void show_engineer_one();
void show_engineer_two();

void show_general_one();
void show_general_two();

/* 키텔 유틸리티 프로그램 메인*/

#define MAIN_GENERAL 1
#define MAIN_ENGINEER 2
#define MAIN_END 0

/* 일반 계산기 계산기 */

#define GENERAL_ONE 1 // 한자리 수 일반계산기
#define GENERAL_TWO 2 // 두자리 수 일반 계산기
#define GENERAL_STRING 3 // 문자열 일반 계산기

#define GENERAL_ONE_SPART 1 // 제곱근
#define GENERAL_ONE_X1 2 // 분수

#define GENERAL_TWO_SUB 1 // 뺄셈
#define GENERAL_TWO_SUM 2 // 덧셈
#define GENERAL_TWO_DIV 3 // 나눗셈
#define GENERAL_TWO_MUL 4 // 곱셈

/* 공학용 계산기 */

#define ENGINEER_ONE 1 // 한자리 수 계산
#define ENGINEER_TWO 2 // 두자리 수 계산
#define ENGINEER_HEX 3 // 16진수
#define ENGINEER_OCT 4 // 8진수

#define ENGINEER_ONE_TAN 1 // tan
#define ENGINEER_ONE_SIN 2 // sin
#define ENGINEER_ONE_COS 3 // cos
#define ENGINEER_ONE_FANS 4 // 절대값
#define ENGINEER_ONE_G1 5 //지수값
#define ENGINEER_ONE_FACT 6 //n!
#define ENGINEER_ONE_LN 7 //ln
#define ENGINEER_ONE_LOG 8 //log
#define ENGINEER_ONE_PI 9 //PI
#define ENGINEER_ONE_SQUARE2 10 //a^2
#define ENGINEER_ONE_SQUARE3 11 //a^3
#define ENGINEER_ONE_INT 12 // INT
#define ENGINEER_ONE_HEX 13 // Hex
#define ENGINEER_ONE_OCT 14 // Oct
#define ENGINEER_ONE_BINARY 15 //Binary
#define ENGINEER_ONE_DUMP 16 //Dump
#define ENGINEER_ONE_ACSIN 17 //AcSin
#define ENGINEER_ONE_ACCOS 18 //AcCos
#define ENGINEER_ONE_ACTAN 19 //AcTan
#define ENGINEER_ONE_HYPERSIN 20 //Hypersin
#define ENGINEER_ONE_HYPERCOS 21 //HyperCos
#define ENGINEER_ONE_HYPERTAN 22 //HyperTan

#define ENGINEER_TWO_SUB 1 //빼기
#define ENGINEER_TWO_SUM 2 //덧셈
#define ENGINEER_TWO_DIV 3 //나눗셈
#define ENGINEER_TWO_MUL 4 //곱셈
#define ENGINEER_TWO_EXP 5 // Exp
#define ENGINEER_TWO_SQUARE 6 //a^b
#define ENGINEER_TWO_AND 7 // And
#define ENGINEER_TWO_MOD 8 // Mod
#define ENGINEER_TWO_OR 9 // Or
#define ENGINEER_TWO_XOR 10 //Xor
#define ENGINEER_TWO_LSHIFT 11 // <<
#define ENGINEER_TWO_PITA 12 //피타고라스

#define SELECT_FALSE -1
#define BACK 0
