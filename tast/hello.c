#include <stdio.h>

void* swapdouble(double* pa, double* pb);
int test_print_array();
int tast_swapDouble();

int main(void) {
	test_print_array();

	return 0;
	



}
int tast_swapDouble()
{
	double a = 3.14;
	double b = 5.12;

	double* presult = (double*)swapdouble(&a, &b);
	if (presult = NULL)
	{
		printf("���� �߸��Ǿ���\n");
	}
	else
	{
		printf("a = %f, b =%f", a, b);
	}
}

void * swapdouble(double* pa, double* pb)
{
	//1. �Է� �� �������� üũ : null�� �ƴϾ�� ��!!
	if (pa ==NULL|| pb == NULL)
	{
		return NULL;


	}
	//2. SWAP TWO VALUSE
	double tmp = *pa;
	*pa = *pb;
	*pb = tmp;

	return pa;

}

void print_array_double(double arr[], int sz);
void print_Array_Double(double* arr, int sz);


int test_print_array()
{
	double da[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

	int size = sizeof(da) / sizeof(da[0]);

	print_array_double(da, size);

	print_Array_Double(&da[0], size);


	return 0;
}

// ���: 1���� �Ǽ� �迭�� �Է� �޾� �ֿܼ� ����Ѵ�.
// �Լ���: print_array_double
// �Է�: double Ÿ�� 1���� �迭 �ּ�
// ���: �͹̳ο� �迭�� ������ ���ڰ� ���
// ��ȯ:����


void print_array_double(double arr[], int sz)
{
	
	for (int i = 0; i < sz; i++, arr++)
	{
		printf("%.lf ", arr[i]);

	}
	printf("\n");
}
void print_Array_Double(double* arr, int sz)
{
	for (int i = 0; i < sz; i++, arr++)
	{
		printf("%lf", *arr);

	}
	printf("\n");

}
