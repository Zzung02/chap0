/*
���ϸ�: assignment15.c
����: PA15. ���� ����(selection sort)�� �̿��Ͽ� ���� �迭�� �����ϴ� ���α׷�
�ۼ���: ������
��¥: 2025.09.23
����: v1.0
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort_array(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_index]) {
				min_index = j;

			}
		}

		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;


	}
}

int main(void) {
	int arr[10];
	int n = 10;

	srand(time(NULL));


	printf("���� ��: ");
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
	}
	printf("\n");

	sort_array(arr, n);

	printf("���� ��: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

