//읽어 들인 정숫값에 10을 사칙연산한 값 출력
/*
#include <stdio.h>

int main(void)
{
	int n;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &n);

	printf("10을 더하면 %d입니다.\n", n + 10);
	printf("10을 뺴면 %d입니다.\n", n - 10);
	printf("10을 곱하면 %d입니다.\n", n * 10);
	printf("10을 나눈 몫은 %d입니다.\n", n / 10);
	printf("10을 나눈 나머지 %d입니다.\n", n % 10);
	return 0;
}
*/

//읽어 들인 정숫값 2개의 비율을 백분율로 출력
/*
#include <stdio.h>

int main(void)
{
	int x, y;

	puts("2개의 정숫값을 입력하세요.");
	printf("정수 x : "); scanf_s("%d", &x);
	printf("정수 y : "); scanf_s("%d", &y);

	printf("x값은 y값의 %d%%입니다.\n", 100 * x / y);

	return 0;
}
*/

// 반지름을 읽어 들여 원의 넓이를 구하고 이를 출력
/*
#include <stdio.h>

int main(void)
{
	double r;

	printf("반지름은 : ");
	scanf_s("%lf", &r);

	printf("원의 넓이는 %f입니다.\n", 3.14 * r * r);

	return 0;
}
*/

/* 읽어들인 정수값 2개의 비율을 백분율(실수)로 출력
#include <stdio.h>

int main(void)
{
	double a, b;

	puts("2개의 정수를 입력하세요 : ");
	printf("정수 a : "); scanf_s("%d", &a);
	printf("정수 b : "); scanf_s("%d", &b);

	printf("a 값은 b의 %f%%입니다.\n", (double)a / b * 64.285714);

	return 0;

}
*/

// 읽어들인 키에 대해 표준 체중을 구해서 출력
/*
#include <stdio.h>

int main(void)
{
	int height;

	printf("키를 입력하세요 : ");
	scanf_s("%d", &height);

	printf("표준체중은 %.1f입니다.\n", (height - 100) * 0.9);

	return 0;
}
*/

// 읽어들인 키와 몸무게로 BMI를 구해서 출력
/*
#include <stdio.h>

int main(void)
{
	double height, weight;

	printf("키를 입력하세요: "); scanf_s("%lf", &height);
	printf("몸무게를 입력하세요: "); scanf_s("%lf", &weight);

	printf("BMI는 %.2f입니다.\n", weight / ((height / 100.0) * (height / 100.0)));

	return 0;

}
*/




