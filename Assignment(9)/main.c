/*
���ϸ�: assignment09.c
����: PA09. 5x5 2���� �迭�� ��� ���Ҹ� Ư�� ������ ä��� ���α׷�
�ۼ���: ������
��¥: 2025.07.17
����: v1.0
*/


#include <stdio.h>

void fill_2d_array(int arr[][5], int rows, int cols, int value) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			*(*(arr + i) + j) = value; // ������ ����
		}
	}
}

int main(void) {
	int arr[5][5];
	int value;

	printf("�迭�� ���ҿ� ������ ��? ");
	scanf_s("%d", &value);

	//�迭�� �Է°����� ä��
	fill_2d_array(arr, 5, 5, value);


	// �迭 ���
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
	return 0;
}

