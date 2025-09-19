/*
파일명: assignment08.c
내용: PA08. 정수 배열의 모든 원소를 특정 값으로 채우는 프로그램
작성자: 김정민
날짜: 2025.07.17
버전: v1.0
*/



#include <stdio.h>

void fill_array(int arr[], int size, int value) {
	for (int i = 0; i < size; i++) {
		*(arr + i) = value; // 포인터 연산 사용
	}
}


int main(void) {
	int arr[20];
	int value;

	printf("배열에 저장할 값?");
	scanf_s("%d", &value);

	fill_array(arr, 20, value);

	printf("배열: ");
	for (int i = 0; i < 20; i++) {
		printf("%d ", arr[i]); //값 출력
	}
	printf("\n");// 줄바꿈
	
	
	return 0;
}