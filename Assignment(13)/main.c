/*
���ϸ�: assignment13.c
���� : PA13.�� ���� �迭 ���Ҹ� ���� ��ȯ�ϴ� swap_array �Լ�
�ۼ��� : ������
��¥ : 2025.09.23
���� : v1.0
*/

#include <stdio.h>

// �� �迭�� ���Ҹ� ���� ��ȯ�ϴ� �Լ�

void swap_array(int a[], int b[], int size) {
		for (int i = 0; i < size; i++) {
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
		}
}

int main(void) {
	int a[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int b[10] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18 };
	int size = 10;

	printf("a: ");
	for (int i = 0; i < size; i++) printf("%d ", a[i]);
	printf("\n");

	printf("b: ");
	for (int i = 0; i < size; i++) printf("%d ", b[i]);
	printf("\n");

	// swap ����
	swap_array(a, b, size);

	printf("<< swap_array ���� �� >>\n");

	printf("a: ");
	for (int i = 0; i < size; i++) printf("%d ", a[i]);
	printf("\n");

	printf("b: ");
	for (int i = 0; i < size; i++) printf("d ", b[i]);
	printf("\n");

	return 0;


}