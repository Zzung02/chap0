/*
파일명: assignment10.c
내용: PA10. 3x3 행렬의 합을 구하는 프로그램 (add_matrix 함수 사용)
작성자: 김정민
날짜: 2025.07.17
버전: v1.0
*/

#include <stdio.h>


// 두 행렬의 함을 구하는 함수
void add_matrix(int x[][3], int y[][3], int result[][3], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			result[i][j] = x[i][j] + y[i][j];

		}
	}
}

// 행렬을 출력하는 함수
void printf_matrix(int arr[][3], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
}

int main(void) {
	// x 행렬
	int x[3][3] = {
		{10, 20, 30},
		{40, 50, 60},
		{70, 80, 90} 
	};

	// y 행렬
	int y[3][3] = {
		{9, 8, 7},
		{6, 5, 4},
		{3, 2, 1}
	};
	