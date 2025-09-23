/*
파일명: assignment04
내용: PA04. 포인터를 이용해서 실수형 배열의 평균을 구하는 프로그램
작성자: 김정민
날짜:2025.09.23
버전:v1.0

*/




#include <stdio.h>

int main(void) {
	double arr[10] = { 1.0, 2.0, 3.40, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	double* p = arr; // 포인터가 배열의 시작을 가리킴
	double sum = 0.0;
	int size = 10;

	// 배열 출력 + 합계 구하기
	printf("배열: ");
	for (int i = 0; i < size; i++) {
		printf("%.2f ", *(p + i)); // 포인터 연산으로 접근
		sum += *(p + i);
	}

	// 평균 계산
	double avg = sum / size;
	printf("\n평균: %.6f\n", avg);

	return 0;

}
