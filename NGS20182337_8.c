#pragma warning(disable:4996)

// �о���� ������ 0~100�� �ǵ��� ����
/*
#include <stdio.h>

int adjust_point(int* n)
{
	if (*n < 0)	*n - 0;
	if (*n > 100) *n = 100;
}

int main(void)
{
	int point;

	printf("���� ���� : ");
	scanf("%d", &point);

	adjust_point(&point);

	printf("������ %d���Դϴ�.\n", point);

	return 0;
}
*/

// ��¥�� ���� �Ǵ� �������� ����
/*
#include <stdio.h>

int is_leap(int y)
{
	return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

int days_of_month(int y, int m)
{
	int mdays[][12] = {
		{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
		{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	};

	return mdays[is_leap(y)][m - 1];
}

void decrement_date(int* y, int* m, int* d)
{
	if (*d > 1)
		--*d;
	else {
		if (-- * m < 1) {
			--* y;
			*m = 12;
		}
		*d = days_of_month(*y, *m);
	}
}

void increment_date(int* y, int* m, int* d)
{
	if (*d < days_of_month(*y, *m))
		++*d;
	else {
		if (++*m > 12) {
			++y;
			*m = 1;
		}
		*d = 1;
	}
}

int main(void)
{
	int i, n;
	int y, m, d;

	puts("��¥�� �Է����ּ���.");
	printf("�� : "); scanf("%d", &y);
	printf("�� : "); scanf("%d", &m);
	printf("�� : "); scanf("%d", &d);

	printf("��ĥ �ڷ� �ұ�� : "); scanf("%d", &n);
	for (i = 0; i < n; i++)
		decrement_date(&y, &m, &d);

	printf("%d�� %d�� %d���� �Ǿ����ϴ�.\n", y, m, d);

	printf("��ĥ ������ �ұ�� : "); scanf("%d", &n);
	for (i = 0; i < n; i++)
		increment_date(&y, &m, &d);
	
	printf("%d�� %d�� %d���� �Ǿ����ϴ�.\n", y, m, d);

	return 0;
}
*/

// ���� 3���� ������������ ����
/*
#include <stdio.h>

void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

void sort3(int* n1, int* n2, int* n3)
{
	if (*n1 > *n2) swap(n1, n2);
	if (*n1 > *n2) swap(n1, n2);
	if (*n1 > *n2) swap(n1, n2);
}

int main(void)
{
	int na, nb, nc;

	puts("3���� ������ �Է����ּ���.");
	printf("���� A : "); scanf("%d", &na);
	printf("���� B : "); scanf("%d", &nb);
	printf("���� C : "); scanf("%d", &nc);

	sort3(&na, &nb, &nc);

	puts("������������ �����߽��ϴ�.");
	printf("���� A�� %d�Դϴ�.\n", na);
	printf("���� B�� %d�Դϴ�.\n", nb);
	printf("���� C�� %d�Դϴ�.\n", nc);

	return 0;
}
*/

// �迭 �ְ�ޱ�
/*
#include <stdio.h>

void set_idx(int* v, int n)
{
	int i;

	for (i = 0; i < n; i++)
		v[i] = i;
}

int main(void)
{
	int i;
	int a[5];

	set_idx(a, 5);

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}
*/

// �迭 �ְ�ޱ�
/*
#include <stdio.h>

void ary_set(int v[], int n, int val)
{
	int i;

	for (i=0; i<n; i++)
		v[i] = val;
}

int main(void)
{
	int i;
	int a[] = { 1, 2, 3, 4, 5 };

	ary_set(&a[2], 2, 99);

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}
*/

// �����͸� �̿��� ���ڿ�
/*
#include <stdio.h>

int main(void)
{
	char* p = "123";

	printf("p = \"%s\"\n", p);

	p = "456" + 1;

	printf("p = \"%s\"\n", p);

	return 0;
}
*/

// ���ڿ� �迭
/*
#include <stdio.h>

int main(void)
{
	int i;
	char a[][5] = { "LISP", "C", "Ada" };
	char *p[] = { "PAUL", "X", "MAC" };

	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
		printf("a[%d] = \"%s\"\n", i, a[i]);

	for (i = 0; i < sizeof(p) / sizeof(p[0]); i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);

	return 0;
}
*/

// ���ڿ��� Ư�� ���ڰ� ���Եƴ��� ���� (÷�� ��ȯ)
/*
#include <stdio.h>

int str_chr(const char* s, int ch)
{
	int idx = 0;

	while (*s) {
		if (*s++ == ch)
			return idx;
		idx++;
	}
	return -1;
}

int main(void)
{
	int idx;
	char str[256];
	char ch[10];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);

	printf("�˻��� ���ڸ� �Է��ϼ��� : ");
	scanf("%s", ch);

	if ((idx = str_chr(str, ch[0])) == -1)
		printf("�� ���ڴ� ���Ե��� �ʾҽ��ϴ�.\n");
	else
		printf("�� ���ڴ� %d��°�� ��� �ֽ��ϴ�.\n", idx + 1);

	return 0;
}
*/

// ���ڿ� ����
/*
#include <stdio.h>

char* str_copy(char* d, const char* s)
{
	char* t = d;

	while (*d++ = *s++)
		;
	return t;
}

int main(void)
{
	char str[128] = "ABC";
	char tmp[128];

	printf("str = \"%s\"\n", str);

	printf("������ ���� : ", tmp);
	scanf("%s", tmp);

	puts("�����߽��ϴ�. ");
	printf("str = \"%s\"\n", str_copy(str, tmp));

	return 0;
}
*/
