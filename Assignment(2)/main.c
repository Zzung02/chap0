/*
���ϸ�:assignment02.c
����: PA02. double �迭(ũ�� 100)�� ������ �������� ��� ���� ���
�ۼ���: ������
��¥: 2025.07.17
����: v1.0
*/



#include <stdio.h>

#define N100 100

void assignment2(void) {
	double arr[N100];
	for (int i = 0; i < N100; i++) arr[i] = (i + 1) * 0.1; // 0.1, 0.2, 0.3 ... ��Ģ�� �ʱ�ȭ

	printf("[����2] ddouble[100] ���� ���\n");qqq
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