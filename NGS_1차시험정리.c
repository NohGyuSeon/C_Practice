#pragma warning(disable:4996)

/* 면적, 합계, 구구단, 정렬, 함수 -> 변형 조건, 응용 */

// 배열을 이용한 여러가지 형태의 구구단 출력
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

	printf("구구단을 구합니다.\n");

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%2dx%2d = %2d ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("상하 반전합니다.\n");

	for (i = 9; i >= 1; i--) {
		for (j = 1; j <= 9; j++) {
			printf("%2dx%2d = %2d  ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("좌우 반전합니다.\n");

	for (i = 1; i <= 9; i++) {
		for (j = 9; j >= 1; j--) {
			printf("%2dx%2d = %2d  ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("상하좌우 반전합니다.\n");

	for (i = 9; i >= 1; i--) {
		for (j = 9; j >= 1; j--) {
			printf("%2dx%2d = %2d  ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("오른쪽 아래 방향 대각선만 출력합니다.\n");
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
	printf("왼쪽 위 방향 대각선만 출력합니다.\n");
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

// 일반식을 이용한 여러가지 형태의 구구단 출력
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

// 함수를 이용한 여러가지 형태의 구구단 출력
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

// 1부터 50까지는 그대로, 51부터 99까지는 누적합산, 100은 총합을 구하라 (프로그램 A)
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
			printf("1부터 50까지의 숫자 : %d\n", i);
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
	printf("51부터 99까지의 누적 합산 : %d\n", sum2);
	printf("1부터 100까지의 누적 합산 : %d\n", sum3);

	return 0;
}
*/

// 1부터 50까지는 그대로, 51부터 99까지는 누적합산, 100은 총합을 구하라 (프로그램 B)
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
			printf("1부터 50까지의 숫자 : %d\n", i);
		}
	}
	sum3 = sum3 + sum2 + sum1;
	printf("51부터 99까지의 누적 합산 : %d\n", sum2);
	printf("1부터 100까지의 누적 합산 : %d\n", sum3);

	return 0;
}
*/

// 1부터 a까지는 그대로, a+1부터 b-1까지는 누적합산, b는 총합을 구하라 (프로그램 c)
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
			printf("1부터 a까지의 숫자 : %d\n", i);
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
	printf("a부터 b까지의 누적 합산 : %d\n", sum2);
	printf("1부터 b까지의 누적 합산 : %d\n", sum3);
}

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);

	func(x, y);
}
*/

// 초기화된 값들을 정렬하는 프로그램
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

	printf("오름차순 정렬 : ");
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

	printf("내림차순 정렬 : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");

	return 0;
}
*/

// 함수를 호출하여 입력한 값들을 정렬하는 프로그램
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
	printf("%d개의 배열값들을 입력합니다.\n", n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("오름차순으로 정렬합니다.\n");
	up(array, n);
	printf("내림차순으로 정렬합니다.\n");
	down(array, n);

	return 0;
}
*/

// 원의 면적 구하기
/*
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void area_calc(double r)
{
	double area = 0.0;

	area = PI * r * r;
	printf("원의 면적은 %lf입니다.", area);

	return 0;
}

int main(void)
{
	double r = 0.0, area = 0.0;

	printf("반지름을 입력하세요 : ");
	scanf("%lf", &r);

	area_calc(r);

	return 0;
}
*/
