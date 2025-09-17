
/*
파일명:assignment01.c
내용: PA01. 크기가 3인 double형 배열의 모든 원소 주소를 출력하는 프로그램 단, &연산자 사용 금지
작성자: 김정민
날짜:2025.07.17
버전:v1.0
*/



#include <stdio.h>

void assignment1(void) {
	double x[3] = { 0.0, 0.0, 0.0 };
	double *p = x; // 배열 이름이 첫 원소의 주소

	printf("[과제1] double[3] 원소 주소 (주소연산자 미사용)\n");
	for (int i = 0; i < 3; i++) {
		printf("x[%d] = %p\n", i, (void*)(p + i));

	}
	puts("");
}
		int main(void){
			assignment1();
			return 0;
		}
