#pragma warning(disable:4996)

// ���ڿ��� �� ���ڿ��� �ϴ� �Լ�
/*
#include <stdio.h>

void null_string(char s[])
{
	s[0] = '\0';
}

int main(void)
{
	char str[128];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);

	printf("���ڿ� str�� \"%s\"�Դϴ�.\n", str);
	null_string(str);
	printf("���ڿ� str�� �� ���ڿ� \"%s\"�� �߽��ϴ�.\n", str);

	return 0;
}
*/

// ���ڿ� ���� �����ڸ� �빮��/�ҹ��ڷ� ���
/*
#include <stdio.h>
#include <ctype.h>

void put_upper(const char s[])
{
	int i = 0;
	while (s[i] != '\0')
		putchar(toupper(s[i++]));
}

void put_lower(const char s[])
{
	int i = 0;
	while (s[i] != '\0')
		putchar(tolower(s[i++]));
}

int main(void)
{
	char str[128];
	
	printf("���ڿ��� �Է����ּ��� : ");
	scanf("%s", str);

	printf("�빮�� : "); put_upper(str); putchar('\n');
	printf("�ҹ��� : "); put_lower(str); putchar('\n');
	
	return 0;
}
*/

// ���ڿ��� ȸ������ �˻��ϱ�
/*
#include <stdio.h>
#include <string.h>

int func(char s[])
{
	int l = 0;
	int h = strlen(s) - 1;

	while (s[l] != '\0')
	{
		if (s[l++] != s[h--]) {
			printf("%s : No", s);
			return;
		}
	}
	printf("%s : Yes", s);
} 

int main(void)
{
	char input[100] = { 0 };
	gets(input);

	func(input);

	return 0;
}
*/

// ���ڿ��� Ư�� ���ڰ� ���Եƴ��� ����
/*
#include <stdio.h>

char* str_chr(const char* s, int c)
{
	while (*s) {
		if (*s == c)
			return s;
		s++;
	}
	return NULL;
}

int main(void)
{
	char str[256];
	char ch[10];
	char* p;

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);
	
	printf("�˻��� ���ڴ� : ");
	scanf("%s", ch);

	if ((p = str_chr(str, ch[0])) == NULL)
		printf("�� ���ڴ� ���Ե��� �ʾҽ��ϴ�.");
	else
		printf("�� ������ ���ڴ� %s�Դϴ�.\n", p);

	return 0;
}
*/

// �л��� Ű�� �����Ը� ����
/*
#include <stdio.h>
#define NAME_LEN 64

typedef struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
} Student;

void heeyoon(Student* std)
{
	if (std->height < 180) std->height = 180;
	if (std->height > 80) std->weight = 80;
}

int main(void)
{
	Student gildong;

	printf("�̸� : "); scanf("%s", gildong.name);
	printf("Ű : "); scanf("%d", &gildong.height);
	printf("������ : "); scanf("%f", &gildong.weight);
	printf("���б� : "); scanf("%ld", &gildong.schols);

	heeyoon(&gildong);

	printf("�̸� = %s\n", gildong.name);
	printf("Ű = %d\n", gildong.height);
	printf("������ = %.lf\n", gildong.weight);
	printf("���б� = %ld\n", gildong.schols);

	return 0;
}
*/

// ���ĺ� ��ҹ��� ��ȯ
/*
#include <stdio.h>
#include <string.h>

int func(char s[]) {

	int len, i;
	len = strlen(s);

	for (i = 0; i < len; i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = toupper(s[i]);
		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = tolower(s[i]);
	}

	s[i] = '\0';

	printf("%s", s);

	return 0;
}

 int main(void)
{ 
	char str[100];
	gets(str);

	func(str);

	return 0;
}
*/

// ������ �ִ� ���ڿ� �����
/*
#include <stdio.h>

int main(void)
{
	char s[256];

	gets(s);

	printf("%s", s);

	return 0;
}
*/

// ���� ���
/*
#include <stdio.h> 

struct Student {
	int score;
};

int main(void)
{
	int n, i, j;
	int rank[200] = { 0 };
	for (i = 0; i < 200; i++) {
		rank[i]++;
	}

	scanf("%d", &n);
	struct Student s[200];

	for (int i = 0; i < n; i++) {
		scanf("%d", &s[i].score);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (s[i].score < s[j].score)
				rank[i]++;               
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d %d\n", s[i].score, rank[i]);
	}

	return 0;
}
*/