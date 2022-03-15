#pragma warning(disable:4996)

// 2���� �� x�� y�� ���̸� ���ϴ� �Լ� ���� ��ũ��
/*
#include <stdio.h>
#define diff(x, y) (((x) > (y)) ? ((x) - (y)) : ((y) - (x)))

int main(void)
{
	int a, b;

	puts("2���� ������ �Է��ϼ���");
	printf("���� a :"); scanf("%d", &a);
	printf("���� b :"); scanf("%d", &b);
	printf("�̵��� ���̴� %d�Դϴ�.\n", diff(a, b));

	return 0;
}
*/

// 2���� ������ �� ū ���� ���ϴ� �Լ� ���� ��ũ��
/*
#include <stdio.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void)
{
	int a, b, c, d;

	puts("4���� ������ �Է��ϼ���.");
	printf("���� a : "); scanf("%d", &a);
	printf("���� b : "); scanf("%d", &b);
	printf("���� c : "); scanf("%d", &c);
	printf("���� d : "); scanf("%d", &d);
	printf("�ִ��� %d�Դϴ�.\n", max(max(a, b), max(c, d)));
	printf("�ִ��� %d�Դϴ�.\n", max(max(max(a, b), c), d));

	return 0;
}
*/

// ���� �ڷ����� 2�� ���� ��ȯ�ϴ� �Լ� ���� ��ũ��
/*
#include <stdio.h>
#define swap(type, a, b) do { type t = a; a = b; b = t;} while (0)

int main(void)
{
	int x, y;
	double a, b;

	puts("2���� ������ �Է��ϼ���.");
	printf("���� x : "); scanf("%d", &x);
	printf("���� y : "); scanf("%d", &y);
	swap(int, x, y);
	printf("��ȯ�߽��ϴ�.\nx�� %d�̰� y�� %d�Դϴ�.\n", x, y);

	puts("2���� �Ǽ��� �Է��ϼ���.");
	printf("���� a : "); scanf("%lf", &a);
	printf("���� b : "); scanf("%lf", &b);
	swap(double, a, b);
	printf("��ȯ�߽��ϴ�.\na�� %0.3f�̰� b�� %.3f�Դϴ�.\n", a, b);

	return 0;
}
*/

// �л��� Ű�� �о� �鿩 �̸� ����
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

	printf("%d���� Ű�� �Է����ּ���\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d�� : ", i + 1);
		scanf("%d", &height[i]);
	}

	bsort(height, NUMBER);

	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < NUMBER; i++)
		printf("%2d�� : %d\n", i + 1, height[i]);

	return 0;
}
*/

// ���� ��Ÿ���� ����ü�� ������ ��Ÿ���� ����ü
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
			printf("��"); break;

		case June:
		case July:	
		case August:
			printf("����"); break;

		case September:
		case October:
		case November:
			printf("����"); break;

		case December:	
		case January:	
		case February:
			printf("�ܿ�"); break;

		default:
			printf("������ �������� �ʴ� ����"); break;
	}
}

enum month select_month(void)
{
	int tmp;

	do {
		printf("�� ���Դϱ� : ");
		scanf("%d", &tmp);
	} while (tmp < January || tmp > December);
	return tmp;
}

int main(void)
{
	enum month your_month;

	printf("�¾ ���� �Է����ּ���. ");
	your_month = select_month();

	printf("����� ");
	printf_season(your_month);
	printf("�� �¾����.\n");

	return 0;
}
*/

// ��� ���ϱ�
/*
#include <stdio.h>

// �����
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

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);

	printf("%d�� ����� %d�Դϴ�.\n", num, factorial(num));

	return 0;
}

// ���
int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
} 
*/

// ������ ���� ���ϱ�
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

	puts("���� �ٸ� n���� �������� r���� �̾� ���� ������ ������ ���մϴ�.");
	printf("n : "); scanf("%d", &n);
	printf("r : "); scanf("%d", &r);
	printf("������ ������ %d���Դϴ�.\n", combination(n, r));

	return 0;
}
*/

// ��Ŭ���� ȣ������ �̿��� �ִ� ����� ���ϱ�
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

	puts("2�� �������� �ִ� ������� ���մϴ�.");
	printf("������ �Է��ϼ��� : "); scanf("%d", &x);
	printf("������ �Է��ϼ��� : "); scanf("%d", &y);

	printf("�ִ� ������� %d�Դϴ�.\n", gcd(x, y));

	return 0;
}
*/

// ǥ�� �Է¿� �ִ� �� �ٲ��� ���� ���
/*
#include <stdio.h>

int main(void)
{
	int ch;
	int n_count = 0;

	while ((ch = getchar()) != EOF)
		if (ch == '\n')
			n_count++;

	printf("�� �ٲ� : %d\n", n_count);

	return 0;
}
*/

// ǥ�� �Է¿� �ִ� ���ڸ� ���� ���� ����׷����� ���
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

	puts("���� ������ ���� Ƚ��");
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

	puts("���� ������ ���� Ƚ��\n");
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

// EOF�� ���� ū����ǥ�� ���� ���
/*
#include <stdio.h>

int main(void)
{
	printf("EOF�� ���� \"%d\"�Դϴ�.", EOF);

	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	int inum;
	int f = 1;

	puts("�����Է� : ");
	scanf("%d", &inum);

	while (inum > 0) {
		f *= inum--;
		printf("%d ��� %d\n", inum, f);
	}

	return 0;
}
*/
