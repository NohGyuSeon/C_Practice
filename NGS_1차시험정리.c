#pragma warning(disable:4996)

/* ����, �հ�, ������, ����, �Լ� -> ���� ����, ���� */

// �迭�� �̿��� �������� ������ ������ ���
/*
#include <stdio.h>

int main(void)
{
	int i, j;
	int gugudan[10][10];

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			gugudan[i][j] = i * j;
		}
	}

	printf("�������� ���մϴ�.\n");

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%2dx%2d = %2d ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("���� �����մϴ�.\n");

	for (i = 9; i >= 1; i--) {
		for (j = 1; j <= 9; j++) {
			printf("%2dx%2d = %2d  ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("�¿� �����մϴ�.\n");

	for (i = 1; i <= 9; i++) {
		for (j = 9; j >= 1; j--) {
			printf("%2dx%2d = %2d  ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("�����¿� �����մϴ�.\n");

	for (i = 9; i >= 1; i--) {
		for (j = 9; j >= 1; j--) {
			printf("%2dx%2d = %2d  ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("������ �Ʒ� ���� �밢���� ����մϴ�.\n");
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			if (gugudan[i] == gugudan[j])
				printf("%2dx%2d = %2d ", i, j, gugudan[i][j]);
			else
				printf("            ");
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("���� �� ���� �밢���� ����մϴ�.\n");
	for (i = 9; i >= 1; i--) {
		for (j = 9; j >= 1; j--) {
			if (gugudan[i] == gugudan[j])
				printf("%2dx%2d = %2d ", i, j, gugudan[i][j]);
			else
				printf("            ");
		}
		printf("\n");
	}

	return 0;
}
*/

// �Ϲݽ��� �̿��� �������� ������ ������ ���
/*
#include <stdio.h>
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			printf("%2dx%2d = %2d ", i, j, i * j);
		}
		printf("\n");
	}

	printf("\n\n\n");
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			if (i == 5 || j == 5)
				printf("%2dx%2d = %2d ", i, j, i * j);
			else
				printf("           ");
		}
		printf("\n");
	}

	printf("\n\n\n");
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			if (i == 0 || j == 0 || i == 9 || j == 9)
				printf("%2dx%2d = %2d ", i, j, i * j);
			else
				printf("           ");
		}
		printf("\n");
	}

	return 0;
}
*/

// �Լ��� �̿��� �������� ������ ������ ���
/*
#include <stdio.h>

int func(int a, int b)
{
	int i, j;
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			if (a == i || b == j)
				printf("%2dx%2d = %2d ", i, j, i * j);
			else
				printf("           ");
		}
		printf("\n");
	}
}

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);

	func(x, y);

	return 0;
}
*/

// 1���� 50������ �״��, 51���� 99������ �����ջ�, 100�� ������ ���϶� (���α׷� A)
/*
#include <stdio.h>

int main(void)
{
	int i;
	int sum1 = 0, sum2 = 0, sum3 = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i <= 50)
		{
			sum1 = sum1 + i;
			printf("1���� 50������ ���� : %d\n", i);
		}

		else if (i >= 51 && i <= 99)
		{
			sum2 = sum2 + i;
		}
		else
		{
			sum3 = sum1 + sum2 + 100;
		}
	}
	printf("51���� 99������ ���� �ջ� : %d\n", sum2);
	printf("1���� 100������ ���� �ջ� : %d\n", sum3);

	return 0;
}
*/

// 1���� 50������ �״��, 51���� 99������ �����ջ�, 100�� ������ ���϶� (���α׷� B)
/*
#include <stdio.h>

int main(void)
{
	int i;
	int sum1 = 0, sum2 = 0, sum3 = 0;

	for (i = 100; i >= 1; i--)
	{
		if (i == 100)
		{
			sum3 = sum3 + i;
		}
		else if (i >= 51 && i <= 99)
		{
			sum2 = sum2 + i;
		}
		else
		{
			sum1 = sum1 + i;
			printf("1���� 50������ ���� : %d\n", i);
		}
	}
	sum3 = sum3 + sum2 + sum1;
	printf("51���� 99������ ���� �ջ� : %d\n", sum2);
	printf("1���� 100������ ���� �ջ� : %d\n", sum3);

	return 0;
}
*/

// 1���� a������ �״��, a+1���� b-1������ �����ջ�, b�� ������ ���϶� (���α׷� c)
/*
#include <stdio.h>

int func(int a, int b)
{
	int i;
	int sum1 = 0, sum2 = 0, sum3 = 0;

	for (i = 1; i <= b; i++)
	{
		if (i <= a)
		{
			sum1 = sum1 + i;
			printf("1���� a������ ���� : %d\n", i);
		}
		else if (i >= a + 1 && i <= b - 1)
		{
			sum2 = sum2 + i;
		}
		else
		{
			sum3 = sum3 + i;
		}
	}
	sum3 = sum3 + sum2 + sum1;
	printf("a���� b������ ���� �ջ� : %d\n", sum2);
	printf("1���� b������ ���� �ջ� : %d\n", sum3);
}

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);

	func(x, y);
}
*/

// �ʱ�ȭ�� ������ �����ϴ� ���α׷�
/*
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int num[SIZE] = { 1, 3, 5, 2, 4, 9, 7, 8, 6, 10 };
	int i, j;

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE - 1 - i; j++) {
			if (num[j] > num[j + 1]) {
				int tmp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = tmp;
			}
		}
	}

	printf("�������� ���� : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE - 1 - i; j++) {
			if (num[j] < num[j + 1]) {
				int tmp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = tmp;
			}
		}
	}

	printf("�������� ���� : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");

	return 0;
}
*/

// �Լ��� ȣ���Ͽ� �Է��� ������ �����ϴ� ���α׷�
/*
#include <stdio.h>

int up(int v[], int n)
{
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (v[j] > v[j + 1])
			{
				int tmp = v[j + 1];
				v[j + 1] = v[j];
				v[j] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}

int down(int v[], int n)
{
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (v[j] < v[j + 1])
			{
				int tmp = v[j + 1];
				v[j + 1] = v[j];
				v[j] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}

int main(void)
{
	int i, j, n;
	scanf("%d", &n);
	int array[100];
	printf("%d���� �迭������ �Է��մϴ�.\n", n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("������������ �����մϴ�.\n");
	up(array, n);
	printf("������������ �����մϴ�.\n");
	down(array, n);

	return 0;
}
*/

// ���� ���� ���ϱ�
/*
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void area_calc(double r)
{
	double area = 0.0;

	area = PI * r * r;
	printf("���� ������ %lf�Դϴ�.", area);

	return 0;
}

int main(void)
{
	double r = 0.0, area = 0.0;

	printf("�������� �Է��ϼ��� : ");
	scanf("%lf", &r);

	area_calc(r);

	return 0;
}
*/
