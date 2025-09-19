/*
���ϸ�: assignment06.c
����: PA06. ���� �迭���� �ִ񰪰� �ּڰ��� ã�� ���α׷�
�ۼ���: ������
��¥: 2025.07.17
����: v1.0
*/



#include <stdio.h>


void get_min_max(int arr[], int size, int* min, int* max) {
	*min = arr[0];
	*max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < *min) *min = arr[i];
		if (arr[i] > *max) *max = arr[i];

	}

}


int main(void) {
	int arr[] = { 23, 45, 66, 12, 99, 83, 20, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int min, max;

	get_min_max(arr, size, &min, &max);

	printf("�ִ�: %d\n", max);
	printf("�ּڰ�: %d\n", min);
	return 0;


}