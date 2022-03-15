#pragma warning(disable:4996)

// 읽어들인 정수를 0~100이 되도록 조정
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

	printf("시험 점수 : ");
	scanf("%d", &point);

	adjust_point(&point);

	printf("점수는 %d점입니다.\n", point);

	return 0;
}
*/

// 날짜를 전날 또는 다음날로 갱신
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

	puts("날짜를 입력해주세요.");
	printf("연 : "); scanf("%d", &y);
	printf("월 : "); scanf("%d", &m);
	printf("일 : "); scanf("%d", &d);

	printf("며칠 뒤로 할까요 : "); scanf("%d", &n);
	for (i = 0; i < n; i++)
		decrement_date(&y, &m, &d);

	printf("%d년 %d월 %d일이 되었습니다.\n", y, m, d);

	printf("며칠 앞으로 할까요 : "); scanf("%d", &n);
	for (i = 0; i < n; i++)
		increment_date(&y, &m, &d);
	
	printf("%d년 %d월 %d일이 되었습니다.\n", y, m, d);

	return 0;
}
*/

// 정수 3개를 오름차순으로 정렬
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

	puts("3개의 정수를 입력해주세요.");
	printf("정수 A : "); scanf("%d", &na);
	printf("정수 B : "); scanf("%d", &nb);
	printf("정수 C : "); scanf("%d", &nc);

	sort3(&na, &nb, &nc);

	puts("오름차순으로 정렬했습니다.");
	printf("정수 A는 %d입니다.\n", na);
	printf("정수 B는 %d입니다.\n", nb);
	printf("정수 C는 %d입니다.\n", nc);

	return 0;
}
*/

// 배열 주고받기
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

// 배열 주고받기
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

// 포인터를 이용한 문자열
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

// 문자열 배열
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

// 문자열에 특정 문자가 포함됐는지 조사 (첨자 반환)
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

	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	printf("검색할 문자를 입력하세요 : ");
	scanf("%s", ch);

	if ((idx = str_chr(str, ch[0])) == -1)
		printf("이 문자는 포함되지 않았습니다.\n");
	else
		printf("이 문자는 %d번째에 들어 있습니다.\n", idx + 1);

	return 0;
}
*/

// 문자열 복사
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

	printf("복사할 것은 : ", tmp);
	scanf("%s", tmp);

	puts("복사했습니다. ");
	printf("str = \"%s\"\n", str_copy(str, tmp));

	return 0;
}
*/
