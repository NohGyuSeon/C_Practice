#pragma warning(disable:4996)

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

// 문자열을 출력하고 문자열에 포함된 특정 문자 개수 조사

