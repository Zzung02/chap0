/*
파일명:assignment02.c
내용: PA02. double 배열(크기 100)을 포인터 연산으로 모든 원소 출력
작성자: 김정민
날짜: 2025.07.17
버전: v1.0
*/



#include <stdio.h>

#define N100 100

void assignment2(void) {
	double arr[N100];
	for (int i = 0; i < N100; i++) arr[i] = (i + 1) * 0.1; // 0.1, 0.2, 0.3 ... 규칙적 초기화

	printf("[과제2] ddouble[100] 원소 출력\n");qqq
	double* p = arr;
	for (int i = 0; i < N100; i++, p++) {
		printf("%.2f%s", *p, (i % 10 == 9) ? "\n" : " ");

	}
	puts("");
}

int main(void) {
	assignment2();
	return 0;
}