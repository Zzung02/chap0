/*
파일명: assignment09.c
내용: PA09. 5x5 2차원 배열의 모든 원소를 특정 값으로 채우는 프로그램
작성자: 김정민
날짜: 2025.07.17
버전: v1.0
*/


#include <stdio.h>

void fill_2d_array(int arr[][5], int rows, int cols, int value) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			*(*(arr + i) + j) = value; // 포인터 연산
		}
	}
}

int main(void) {
	int arr[5][5];
	int value;

	printf("배열의 원소에 저장할 값? ");
	scanf_s("%d", &value);

	//배열을 입력값으로 채움
	fill_2d_array(arr, 5, 5, value);


	// 배열 출력
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
	return 0;
}

