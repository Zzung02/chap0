/*
���ϸ�: assignment04
����: PA04. �����͸� �̿��ؼ� �Ǽ��� �迭�� ����� ���ϴ� ���α׷�
�ۼ���: ������
��¥:2025.09.23
����:v1.0

*/




#include <stdio.h>

int main(void) {
	double arr[10] = { 1.0, 2.0, 3.40, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	double* p = arr; // �����Ͱ� �迭�� ������ ����Ŵ
	double sum = 0.0;
	int size = 10;

	// �迭 ��� + �հ� ���ϱ�
	printf("�迭: ");
	for (int i = 0; i < size; i++) {
		printf("%.2f ", *(p + i)); // ������ �������� ����
		sum += *(p + i);
	}

	// ��� ���
	double avg = sum / size;
	printf("\n���: %.6f\n", avg);

	return 0;

}
