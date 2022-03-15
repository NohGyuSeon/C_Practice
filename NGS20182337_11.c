#pragma warning(disable:4996)

// 특정 파일이 있는지 확인
/*
#include <stdio.h>

int main(void)
{
	FILE* fp;
	char fname[256];

	printf("파일 이름 : ");
	scanf("%s", fname);

	fp = fopen(fname, "r");

	if (fp == NULL)
		printf("이 파일은 없습니다.\n");
	else {
		printf("이 파일은 있습니다.\n");
		fclose(fp);
	}

	return 0;
}
*/

// 특정 파일이 있는지 확인(다른 해답)
/*
#include <stdio.h>

int fexist(const char* filename)
{
	FILE* fp;

	if ((fp = fopen(filename, "r")) == NULL)
		return 0;
	fclose(fp);
	return 1;
}

int main(void)
{
	FILE* fp;
	char fname[256];

	printf("파일 이름 : ");
	scanf("%s", fname);

	if (fexist(fname))
		printf("이 파일은 있습니다.\n");
	else
		printf("이 파일은 없습니다.\n");

	return 0;
}
*/

// 키와 몸무게를 읽어 들여 키순으로 정렬함과 동시에 평균값을 구하여 출력
/*
#include <stdio.h>
#include <string.h>
#define NUM_MAX 50
#define NAME_LEN 100

int main(void)
{
	FILE* fp;
	int i, j;
	int number = 0;
	char name[NAME_LEN][NUM_MAX];
	double height[NUM_MAX];
	double weight[NUM_MAX];
	double hsum = 0.0;
	double wsum = 0.0;

	if ((fp = fopen("hw.dat", "r")) == NULL)
		printf("\a파일을 열 수 없습니다.\n");
	else {
		for (i = 0; i < NUM_MAX; i++) {
			if (fscanf(fp, "%s%lf%lf", name[number], &height[number], &weight[number]) != 3)
				break;

				hsum += height[number];
				wsum += weight[number];
				number++;
		}

		for (i = 0; i < number; i++) {
			for (j = number - 1; j > 1; j--) {
				if (height[j - 1] > height[j]) {
					char tn[NAME_LEN];
					double td;
					strcpy(tn, name[j]);
					strcpy(name[j], name[j - 1]);
					strcpy(name[j - 1], tn);
					td = height[j]; height[j] = height[j - 1]; height[j - 1] = td;
					td = weight[j]; weight[j] = weight[j - 1]; weight[j - 1] = td;
				}
			}
		}

		for (i = 0; i < number; i++)
			printf("%-10s %5.1f %5.1f\n", name[i], height[i], weight[i]);

		printf("-------------------------\n");
		printf("평균           %5.1f %5.1f\n", hsum / number, wsum / number);
		fclose(fp);
		}

	return 0;
}
*/

// 이전 프로그램 실행 시의 날짜, 시각, 기분을 출력
/*
#include <time.h>
#include <stdio.h>

char data_file[] = "feeling.dat";

void get_data(void)
{
	FILE* fp;

	if ((fp = fopen(data_file, "r")) == NULL)
		printf("이 프로그램을 처음 실행하는군요.\n");
	else {
		int year, month, day, h, m, s;
		char feeling[2048];

		fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
		fscanf(fp, "%s", feeling);
		printf("이전 실행은 %d년 %d월 %d일 %d시 %d분 %d초였고 기분은 '%s'였습니다.\n", year, month, day, h, m, s, feeling);

		fclose(fp);
	}
}

void put_data(const char* feeling)
{
	FILE* fp;
	time_t current = time(NULL);
	struct tm *timer = localtime(&current);

	if ((fp = fopen(data_file, "w")) == NULL)
		printf("\a파일을 열 수 없습니다.\n");
	else {
		fprintf(fp, "%d %d %d %d %d %d\n", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec);
		fprintf(fp, "%s\n", feeling);
		fclose(fp);
	}
}

int main(void)
{
	char feeling[2048];
	
	get_data();

	printf("지금의 기분은 : ");
	scanf("%s", feeling);

	put_data(feeling);

	return 0;
}
*/

// 파일 안의 숫자 문자 개수 세기
/*
#include <stdio.h>

int main(void)
{
	int i, ch;
	FILE* fp;
	char fname[FILENAME_MAX];
	int cnt[10] = { 0 };

	printf("파일 이름 : ");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)
		printf("\a파일을 열 수 없습니다.\n");
	else {
		while ((ch = fgetc(fp)) != EOF)
			if (ch >= '0' && ch <= '9')
				cnt[ch - '0']++;
		fclose(fp);

		puts("숫자 문자의 출현 횟수");
		for (i = 0; i < 10; i++)
			printf("%d : %d\n", i, cnt[i]);
	}

	return 0;
}
*/

// 파일 안의 내용 중 소문자를 대문자로 변환하면서 복사
/*
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	int ch;
	FILE* sfp;
	FILE* dfp;
	char sname[FILENAME_MAX];
	char dname[FILENAME_MAX];

	printf("복사할 내용이 있는 파일 이름 : "); scanf("%s", sname);
	printf("내용을 복사해 넣을 파일 이름 : "); scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)
		printf("\a복사할 내용이 있는 파일을 열 수 없습니다.\n");
	else {
		if ((dfp = fopen(sname, "r")) == NULL)
			printf("\a내용을 복사해 넣을 파일을 열 수 없습니다.\n");
		else {
			while ((ch = fgetc(sfp)) != EOF) {
				fputc(toupper(ch), dfp);
			}
			fclose(dfp);
		}
		fclose(sfp);
	}

	return 0;
}
*/

// double형 배열을 바이너리 파일로 쓴 다음 읽기
/*
#include <stdio.h>
#define ARY_SIZE 10

int main(void)
{
	int i;
	FILE* fp;
	double a[ARY_SIZE] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0 };

	if ((fp = fopen("ARRAY.bin", "wb")) == NULL)
		printf("\a파일을 열 수 없습니다.\n");
	else {
		fwrite(a, sizeof(double), ARY_SIZE, fp);
		fclose(fp);
	}

	if ((fp = fopen("ARRAY.bin", "rb")) == NULL)
		printf("\a파일을 열 수 없습니다.\n");
	else {
		fread(a, sizeof(double), ARY_SIZE, fp);
		for (i = 0; i < ARY_SIZE; i++)
			printf("a[%d] = %.1f\n", i, a[i]);
		fclose(fp);
	}

	return 0;
}
*/

// 파일 복사
/*
#include <stdio.h>
#define BUF_SIZE 1024

int main(void)
{
	int n;
	char buf[BUF_SIZE];
	FILE* sfp;
	FILE* dfp;
	char sname[FILENAME_MAX];
	char dname[FILENAME_MAX];

	printf("복사할 내용이 있는 파일 이름 : "); scanf("%s", sname);
	printf("내용을 복사해 넣을 파일 이름 : "); scanf("%s", dname);

	if ((sfp = fopen(sname, "rb")) == NULL)
		printf("\a복사할 내용이 있는 파일을 열 수 없습니다.\n");
	else {
		if ((dfp = fopen(sname, "wb")) == NULL)
			printf("\a내용을 복사해 넣을 파일을 열 수 없습니다.\n");
		else {
			while (1) {
				if ((n = fread(buf, 1, BUF_SIZE, sfp)) != 0)
					fwrite(buf, 1, n, dfp);
				if (n < BUF_SIZE)
					break;
			}
			fclose(dfp);
		}
		fclose(sfp);
	}

	return 0;
}
*/

// 지금의 날짜와 시각을 출력
/*
#include <time.h>
#include <stdio.h>

int main(void)
{
	time_t current = time(NULL);
	struct tm* timer = localtime(&current);
	char* wday_name[] = { "일", "월", "화", "수", "목", "금", "토" };

	printf("지금의 날짜와 시각은 %d년 %d월  %d일(%s) %d시 %d분 %d초입니다.\n",
		timer->tm_year + 1900,
		timer->tm_mon + 1,
		timer->tm_mday,
		wday_name[timer->tm_wday],
		timer->tm_hour,
		timer->tm_min,
		timer->tm_sec
		);

	return 0;
}
*/
