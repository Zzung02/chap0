
/*
���ϸ�:assignment01.c
����: PA01. ũ�Ⱑ 3�� double�� �迭�� ��� ���� �ּҸ� ����ϴ� ���α׷� ��, &������ ��� ����
�ۼ���: ������
��¥:2025.07.17
����:v1.0
*/



#include <stdio.h>

void assignment1(void) {
	double x[3] = { 0.0, 0.0, 0.0 };
	double *p = x; // �迭 �̸��� ù ������ �ּ�

	printf("[����1] double[3] ���� �ּ� (�ּҿ����� �̻��)\n");
	for (int i = 0; i < 3; i++) {
		printf("x[%d] = %p\n", i, (void*)(p + i));

	}
	puts("");
}
		int main(void){
			assignment1();
			return 0;
		}
