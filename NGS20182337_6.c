#pragma warning(disable:4996)

// 2개의 값 x와 y의 차이를 구하는 함수 형식 매크로
/*
#include <stdio.h>
#define diff(x, y) (((x) > (y)) ? ((x) - (y)) : ((y) - (x)))

int main(void)
{
	int a, b;

	puts("2개의 정수를 입력하세요");
	printf("정수 a :"); scanf("%d", &a);
	printf("정수 b :"); scanf("%d", &b);
	printf("이들의 차이는 %d입니다.\n", diff(a, b));

	return 0;
}
*/

// 2개의 정숫값 중 큰 값을 구하는 함수 형식 매크로
/*
#include <stdio.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void)
{
	int a, b, c, d;

	puts("4개의 정수를 입력하세요.");
	printf("정수 a : "); scanf("%d", &a);
	printf("정수 b : "); scanf("%d", &b);
	printf("정수 c : "); scanf("%d", &c);
	printf("정수 d : "); scanf("%d", &d);
	printf("최댓값은 %d입니다.\n", max(max(a, b), max(c, d)));
	printf("최댓값은 %d입니다.\n", max(max(max(a, b), c), d));

	return 0;
}
*/

// 같은 자료형인 2개 값을 교환하는 함수 형식 매크로
/*
#include <stdio.h>
#define swap(type, a, b) do { type t = a; a = b; b = t;} while (0)

int main(void)
{
	int x, y;
	double a, b;

	puts("2개의 정수를 입력하세요.");
	printf("정수 x : "); scanf("%d", &x);
	printf("정수 y : "); scanf("%d", &y);
	swap(int, x, y);
	printf("교환했습니다.\nx는 %d이고 y는 %d입니다.\n", x, y);

	puts("2개의 실수를 입력하세요.");
	printf("정수 a : "); scanf("%lf", &a);
	printf("정수 b : "); scanf("%lf", &b);
	swap(double, a, b);
	printf("교환했습니다.\na는 %0.3f이고 b는 %.3f입니다.\n", a, b);

	return 0;
}
*/

// 학생의 키를 읽어 들여 이를 정렬
/*
#include <stdio.h>
#define NUMBER 5

void bsort(int a[], int n)
{
	int i, j;

	for (i = n; i > 0; i--) {
		for (j = 1; j < i; j++) {
			if (a[j - 1] > a[j]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}

int main(void)
{
	int i;
	int height[NUMBER];

	printf("%d명의 키를 입력해주세요\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d번 : ", i + 1);
		scanf("%d", &height[i]);
	}

	bsort(height, NUMBER);

	puts("오름차순으로 정렬했습니다.");
	for (i = 0; i < NUMBER; i++)
		printf("%2d번 : %d\n", i + 1, height[i]);

	return 0;
}
*/

// 월을 나타내는 열거체와 계절을 나타내는 열거체
/*
#include <stdio.h>

enum month {
	January = 1, February, March, April, May, June,
	July, August, September, October, November, December
};

void printf_season(enum month month)
{
	switch (month)
	{
		case March:
		case April:
		case May:
			printf("봄"); break;

		case June:
		case July:	
		case August:
			printf("여름"); break;

		case September:
		case October:
		case November:
			printf("가을"); break;

		case December:	
		case January:	
		case February:
			printf("겨울"); break;

		default:
			printf("지구에 존재하지 않는 계절"); break;
	}
}

enum month select_month(void)
{
	int tmp;

	do {
		printf("몇 월입니까 : ");
		scanf("%d", &tmp);
	} while (tmp < January || tmp > December);
	return tmp;
}

int main(void)
{
	enum month your_month;

	printf("태어난 월을 입력해주세요. ");
	your_month = select_month();

	printf("당신은 ");
	printf_season(your_month);
	printf("에 태어났군요.\n");

	return 0;
}
*/

// 계승 구하기
/*
#include <stdio.h>

// 비재귀
//	int factorial(int n)
//	{
//		int f = 1;
//
//		while (n > 0)
//			f *= n--;
//		return f;
//	}

int main(void)
{
	int num;

	printf("정수를 입력하세요 : ");
	scanf("%d", &num);

	printf("%d의 계승은 %d입니다.\n", num, factorial(num));

	return 0;
}

// 재귀
int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
} 
*/

// 조합의 개수 구하기
/*
#include <stdio.h>

int combination(int n, int r)
{
	if (r == 0 || r == n)
		return 1;
	else if (r == 1)
		return n;
	return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void)
{
	int n, r;

	puts("서로 다른 n개의 정수에서 r개를 뽑아 만든 조합의 개수를 구합니다.");
	printf("n : "); scanf("%d", &n);
	printf("r : "); scanf("%d", &r);
	printf("조합의 개수는 %d개입니다.\n", combination(n, r));

	return 0;
}
*/

// 유클리드 호제법을 이용한 최대 공약수 구하기
/*
#include <stdio.h>

int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main(void)
{
	int x, y;

	puts("2개 정숫값의 최대 공약수를 구합니다.");
	printf("정수를 입력하세요 : "); scanf("%d", &x);
	printf("정수를 입력하세요 : "); scanf("%d", &y);

	printf("최대 공약수는 %d입니다.\n", gcd(x, y));

	return 0;
}
*/

// 표준 입력에 있는 줄 바꿈의 개수 출력
/*
#include <stdio.h>

int main(void)
{
	int ch;
	int n_count = 0;

	while ((ch = getchar()) != EOF)
		if (ch == '\n')
			n_count++;

	printf("줄 바꿈 : %d\n", n_count);

	return 0;
}
*/

// 표준 입력에 있는 숫자를 세어 가로 막대그래프로 출력
/*
#include <stdio.h>

int main(void)
{
	int i, j, ch;
	int cnt[10] = { 0 };
	int cnt_max = 0;

	while ((ch = getchar()) != EOF)
		if (ch >= '0' && ch <= '9')
			cnt[ch - '0']++;

	puts("숫자 문자의 등장 횟수");
	for (i = 0; i < 10; i++) {
		printf("'%d' : ", i);
		for (j = 0; j < cnt[i]; j++)
			putchar('*');
		putchar('\n');
	}

	printf("\n\n\n");

	for (i = 0; i < 10; i++)
		if (cnt[i] > cnt_max)
			cnt_max = cnt[i];

	puts("숫자 문자의 등장 횟수\n");
	for (i = cnt_max; i >= 1; i--) {
		for (j = 0; j < 10; j++)
			if (cnt[j] >= i)
				printf(" * ");
			else
				printf("   ");
		putchar('\n');
	}

	for (j = 0; j < 10; j++)
		printf(" %d ", j);

	return 0;
}
*/

// EOF의 값을 큰따옴표로 감싸 출력
/*
#include <stdio.h>

int main(void)
{
	printf("EOF의 값은 \"%d\"입니다.", EOF);

	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	int inum;
	int f = 1;

	puts("정수입력 : ");
	scanf("%d", &inum);

	while (inum > 0) {
		f *= inum--;
		printf("%d 계승 %d\n", inum, f);
	}

	return 0;
}
*/
