#pragma warning(disable:4996)

// 2���� ���� �� ���� ���� �� ���ϱ�
/*
#include <stdio.h>

int min2(int a, int b)
{
	return (a < b) ? a : b;
}

int main(void)
{
	int n1, n2;

	puts("���� 2���� �Է��ϼ���. ");
	printf("���� 1 : "); scanf("%d", &n1);
	printf("���� 2 : "); scanf("%d", &n2);

	printf("���� ���� ���� %d�Դϴ�.\n", min2(n1, n2));

	return 0;
}
*/

// 3���� ���� �� �ּڰ� ���ϱ�
/*
#include <stdio.h>

int min3(int a, int b, int c)
{
	int min = a;

	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}

int main(void)
{
	int a, b, c;

	puts("���� 3���� �Է��ϼ���. ");

	printf("���� 1 : "); scanf("%d", &a);
	printf("���� 1 : "); scanf("%d", &b);
	printf("���� 1 : "); scanf("%d", &c);

	printf("�ּڰ��� %d�Դϴ�.\n", min3(a, b, c));

	return 0;
}
*/

// ������ 3���� �� ���ϱ�
/*
#include <stdio.h>

int cube(int x)
{
	return x * x * x;
}

int main(void)
{
	int n;

	printf("������ : ");
	scanf("%d", &n);

	printf("%d�� 3���� ���� %d�Դϴ�.\n", n, cube(n));

	return 0;
}
*/

// ������ 4���� �� ���ϱ�
/*
#include <stdio.h>

int sqr(int x)
{
	return x * x;
}

int pow4(int x)
{
	return sqr(x) * sqr(x);
}

int main(void)
{
	int n;

	printf("������ : ");
	scanf("%d", &n);

	printf("%d�� 4���� ���� %d�Դϴ�.\n", n, pow4(n));

	return 0;
}
*/

// 1���� n������ �� ���ϱ�
/*
#include <stdio.h>

int sumup(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
		sum += i;
	return sum;
}

int main(void)
{
	int no;

	printf("������ : ");
	scanf("%d", &no);

	printf("1���� %d������ ���� %d�Դϴ�\n", no, sumup(no));

	return 0;
}
*/

// �ݺ��ؼ� ����� �߻�
/*
#include <stdio.h>

void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}

void put_chars_ln(int ch, int n)
{
	put_chars(ch, n);
	putchar('\n');
}

void alert(int n)
{
	put_chars('\a', n);
}

int main(void)
{
	int n;

	put_chars_ln('=', 24);
	printf("������� ���� Ƚ�� : ");
	scanf("%d", &n);
	put_chars_ln('-', 24);

	alert(n);
	putchar('\n');

	put_chars_ln('=', 24);

	return 0;
}
*/

// "�ȳ��ϼ���."�� ���
/*
#include <stdio.h>

void hello(void)
{
	puts("�ȳ��ϼ���.");
}

int main(void)
{
	hello();

	return 0;
}
*/

// 2���� ������ ��� ���ϱ�
/*
#include <stdio.h>

int scan_int(void)
{
	int temp;

	printf("������ : ");
	scanf("%d", &temp);

	return temp;
}

int ave_of(int a, int b)
{
	return (a + b) / 2;
}

int main(void)
{
	int n1 = scan_int();
	int n2 = scan_int();
	int n3 = scan_int();
	int ave;

	if ((ave = ave_of(n1, n2)) == 0)
		printf("n1�� n3�� ��հ��� 0�Դϴ�.\n");
	else if (ave > 0)
		printf("n1�� n3�� ��հ��� �����, %d�Դϴ�.\n", ave);
	else
		printf("n1�� n3�� ��հ��� ������, %d�Դϴ�.\n", ave);

	if ((ave = ave_of(n2, n3)) == 0)
		printf("n2�� n3�� ��հ��� 0�Դϴ�.\n");
	else if (ave > 0)
		printf("n2�� n3�� ��հ��� �����, %d�Դϴ�.\n", ave);
	else
		printf("n2�� n3�� ��հ��� ������, %d�Դϴ�.\n", ave);

	return 0;
}
*/

// ������ �о� �鿩 �հ���(60�� �̻�) ����� ���
/*
#include <stdio.h>

int point[7];

void print_success(void);

int main(void)
{
	int i;
	extern int point[7];
	
	puts("7���� ������ �Է����ּ���.");
	for (i = 0; i < 7; i++) {
		printf("%d : ", i + 1);
		scanf("%d", &point[i]);
	}

	print_success();

	return 0;
}

void print_success(void)
{
	int i;
	extern int point[7];

	puts("�հ��� ���");
	puts("----------");
	for (i = 0; i < 7; i++) {
		if(point[i] >= 60)
		printf("%d�� : %d\n", i + 1, point[i]);
	}
	puts("----------");
}
*/

// ���� ������ ���� ������ ���� ���� ���ϱ�
/*
#include <stdio.h>
#define NUMBER 5

int min_of(const int v[], int n)
{
	int i;
	int min = v[0];

	for (i = 0; i < n; i++)
		if (v[i] < min)
			min = v[i];
	return min;
}

int main(void)
{
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int min_e, min_m;

	printf("%d���� ������ �Է����ּ���.\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("[%d] ���� : ", i + 1); scanf("%d", &eng[i]);
		printf("     ���� : "); scanf("%d", &mat[i]);
	}

	min_e = min_of(eng, NUMBER);
	min_m = min_of(mat, NUMBER);

	printf("���� ���� ���� : %d\n", min_e);
	printf("���� ���� ���� : %d\n", min_m);

	return 0;
}
*/

// �迭�� ��� ��Ҹ� ����
/*
#include <stdio.h>
#define NUMBER 7

void rev_intary(int v[], int n)
{
	int i;

	for (i = 0; i < n / 2; i++) {
		int temp = v[i];
		v[i] = v[n - i - 1];
		v[n - i - 1] = temp;
	}
}

int main(void)
{
	int i;
	int x[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	rev_intary(x, NUMBER);

	puts("�����߽��ϴ�.");
	for (i = 0; i < NUMBER; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
*/

// �迭�� ��� ��Ҹ� ������ �� �ٸ� �迭�� ����
/*
#include <stdio.h>
#define NUMBER 7

void intary_rcpy(int v1[], const int v2[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		v1[i] = v2[n - i - 1];
}

int main(void)
{
	int i;
	int x1[NUMBER], x2[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("x1[%d] : ", i);
		scanf("%d", &x1[i]);
	}

	intary_rcpy(x2, x1, NUMBER);

	puts("�����ϰ� �����߽��ϴ�.");
	for (i = 0; i < NUMBER; i++)
		printf("x2[%d] = %d\n", i, x2[i]);

	return 0;
}
*/

// ���� Ž��(���� Ž��)
/*
#include <stdio.h>
#define NUMBER 5
#define FAILED -1

int searchr(const int v[], int key, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--) {
		if (v[i] == key)
			return i;
	}
	return FAILED;
}

int main(void)
{
	int i, ky, idx;
	int vx[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d] : ", i);
		scanf("%d", &vx[i]);
	}
	printf("ã�� �� : ");
	scanf("%d", &ky);

	if ((idx = searchr(vx, ky, NUMBER)) == FAILED)
		puts("\aŽ���� �����߽��ϴ�.");
	else
		printf("%d��(��) %d��°�� �ֽ��ϴ�.\n", ky, idx + 1);

	return 0;
}
*/

// Ư�� ���� ���� �迭 ���� ��� ����� ÷�� ����
/*
#include <stdio.h>
#define NUMBER 7
#define FAILED -1

int search_idx(const int v[], int idx[], int key, int n)
{
	int i, count = 0;

	for (i = 0; i < n; i++) {
		if (v[i] == key)
			idx[count++] = i;
	}
	return count;
}

int main(void)
{
	int i, ky, num;
	int vx[NUMBER];
	int pt[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d] : ", i);
		scanf("%d", &vx[i]);
	}
	printf("ã�� �� : ");
	scanf("%d", &ky);

	if ((num = search_idx(vx, pt, ky, NUMBER)) == 0)
		puts("\a�迭�� �ش� ���� �����ϴ�.");
	else {
		printf("%d��(��) %d�� �ֽ��ϴ�.\n", ky, num);
		for (i = 0; i < num; i++)
			printf("vx[%d] = %d\n", pt[i], vx[pt[i]]);
	}

	return 0;
}
*/

// ����� �� ���ϱ�
/*
#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
	int i, j, k;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			c[i][j] = 0;
			for (k = 0; k < 3; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
}

int main(void)
{
	int i, j;
	int mx[4][3];
	int my[3][4];
	int mz[4][4];

	printf("4�� 3���� mx�� 3�� 4���� my�� ���� ���մϴ�.\n");

	puts("��� mx");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("mx[%d][%d] : ", i, j);
			scanf("%d", &mx[i][j]);
		}
	}

	puts("��� my");

		for (i = 0; i < 3; i++) {
			for (j = 0; j < 4; j++) {
				printf("my[%d][%d] : ", i, j);
				scanf("%d", &my[i][j]);
			}
		}

	mat_mul(mx, my, mz);

	puts("����� ��");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", mz[i][j]);
		putchar('\n');
	}

	return 0;
}
*/

// �л� 4���� 3���� ���� ���� 2ȸ���� �հ踦 ���Ͽ� ���
/*
#include <stdio.h>

void mat_add(const int a[][3], const int b[][3], int c[][3], int n)
{
	int i, j;

	for (i = 0; i < n; i++)
		for (j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
}

void mat_print(const int m[][3], int n)
{
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}

int main(void)
{
	int i;
	int score[2][4][3] = {
		{ {91, 63, 78}, {67, 72, 46}, {89, 34, 45}, {32, 54, 34} },
		{ {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} }
	};
	int sum[4][3];

	mat_add(&score[0], &score[1], sum, 4);

	for (i = 0; i < 2; i++) {
		printf("%dȸ°�� ����\n", i + 1);
		mat_print(&score[i], 4);
		putchar('\n');
	}

	puts("�հ� ����");
	mat_print(sum, 4);

	return 0;
}
*/

// ���� ��� ������ ���� ��ü�� �Ϲ� �ʱ�ȭ Ȯ��
/*
#include <stdio.h>

double a1[5];

int main(void)
{
	int i;
	static double a2[5];

	for (i = 0; i < 5; i++)
		printf("a1[%d] = %.1f\n", i, a1[i]);

	for (i = 0; i < 5; i++)
		printf("a2[%d] = %.1f\n", i, a2[i]);

	return 0;
}
*/

// ȣ��� Ƚ���� ����ϴ� �Լ�
/*
#include <stdio.h>

void put_count(void)
{
	static int count = 0;
	printf("put_count : %dȸ\n", ++count);
}

int main(void)
{
	int i, n;

	printf("ȣ�� Ƚ�� : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		put_count();

	return 0;
}
*/





// ����, �հ�, ������, ����, �Լ� -> ���� ����, ����