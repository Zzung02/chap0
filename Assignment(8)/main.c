/*
���ϸ�: assignment08.c
����: PA08. ���� �迭�� ��� ���Ҹ� Ư�� ������ ä��� ���α׷�
�ۼ���: ������
��¥: 2025.07.17
����: v1.0
*/



#include <stdio.h>

void fill_array(int arr[], int size, int value) {
	for (int i = 0; i < size; i++) {
		*(arr + i) = value; // ������ ���� ���
	}
}


int main(void) {
	int arr[20];
	int value;

	printf("�迭�� ������ ��?");
	scanf_s("%d", &value);

	fill_array(arr, 20, value);

	printf("�迭: ");
	for (int i = 0; i < 20; i++) {
		printf("%d ", arr[i]); //�� ���
	}
	printf("\n");// �ٹٲ�
	
	
	return 0;
}