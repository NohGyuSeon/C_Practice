#pragma warning(disable:4996)

// 문자열을 빈 문자열로 하는 함수
/*
#include <stdio.h>

void null_string(char s[])
{
	s[0] = '\0';
}

int main(void)
{
	char str[128];

	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	printf("문자열 str은 \"%s\"입니다.\n", str);
	null_string(str);
	printf("문자열 str을 빈 문자열 \"%s\"로 했습니다.\n", str);

	return 0;
}
*/

// 문자열 안의 영문자를 대문자/소문자로 출력
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
	
	printf("문자열을 입력해주세요 : ");
	scanf("%s", str);

	printf("대문자 : "); put_upper(str); putchar('\n');
	printf("소문자 : "); put_lower(str); putchar('\n');
	
	return 0;
}
*/

// 문자열이 회문인지 검사하기
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

// 문자열에 특정 문자가 포함됐는지 조사
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

	printf("문자열을 입력하세요 : ");
	scanf("%s", str);
	
	printf("검색할 문자는 : ");
	scanf("%s", ch);

	if ((p = str_chr(str, ch[0])) == NULL)
		printf("이 문자는 포함되지 않았습니다.");
	else
		printf("이 이후의 문자는 %s입니다.\n", p);

	return 0;
}
*/

// 학생의 키와 몸무게를 갱신
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

	printf("이름 : "); scanf("%s", gildong.name);
	printf("키 : "); scanf("%d", &gildong.height);
	printf("몸무게 : "); scanf("%f", &gildong.weight);
	printf("장학금 : "); scanf("%ld", &gildong.schols);

	heeyoon(&gildong);

	printf("이름 = %s\n", gildong.name);
	printf("키 = %d\n", gildong.height);
	printf("몸무게 = %.lf\n", gildong.weight);
	printf("장학금 = %ld\n", gildong.schols);

	return 0;
}
*/

// 알파벳 대소문자 변환
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

// 공백이 있는 문자열 입출력
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

// 석차 계산
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