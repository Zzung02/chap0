/*
���ϸ�: assignment10.c
����: PA10. 3x3 ����� ���� ���ϴ� ���α׷� (add_matrix �Լ� ���)
�ۼ���: ������
��¥: 2025.07.17
����: v1.0
*/

#include <stdio.h>


// �� ����� ���� ���ϴ� �Լ�
void add_matrix(int x[][3], int y[][3], int result[][3], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			result[i][j] = x[i][j] + y[i][j];

		}
	}
}

// ����� ����ϴ� �Լ�
void printf_matrix(int arr[][3], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
}

int main(void) {
	// x ���
	int x[3][3] = {
		{10, 20, 30},
		{40, 50, 60},
		{70, 80, 90} 
	};

	// y ���
	int y[3][3] = {
		{9, 8, 7},
		{6, 5, 4},
		{3, 2, 1}
	};
	