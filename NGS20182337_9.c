#pragma warning(disable:4996)

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

// ���ڿ��� ����ϰ� ���ڿ��� ���Ե� Ư�� ���� ���� ����

