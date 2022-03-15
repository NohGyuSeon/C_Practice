#pragma warning(disable:4996)

// 2개의 정수 중 작은 쪽의 값 구하기
/*
#include <stdio.h>

int min2(int a, int b)
{
	return (a < b) ? a : b;
}

int main(void)
{
	int n1, n2;

	puts("정수 2개를 입력하세요. ");
	printf("정수 1 : "); scanf("%d", &n1);
	printf("정수 2 : "); scanf("%d", &n2);

	printf("작은 쪽의 값은 %d입니다.\n", min2(n1, n2));

	return 0;
}
*/

// 3개의 정수 중 최솟값 구하기
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

	puts("정수 3개를 입력하세요. ");

	printf("정수 1 : "); scanf("%d", &a);
	printf("정수 1 : "); scanf("%d", &b);
	printf("정수 1 : "); scanf("%d", &c);

	printf("최솟값은 %d입니다.\n", min3(a, b, c));

	return 0;
}
*/

// 정수의 3제곱 값 구하기
/*
#include <stdio.h>

int cube(int x)
{
	return x * x * x;
}

int main(void)
{
	int n;

	printf("정숫값 : ");
	scanf("%d", &n);

	printf("%d의 3제곱 값은 %d입니다.\n", n, cube(n));

	return 0;
}
*/

// 정수의 4제곱 값 구하기
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

	printf("정숫값 : ");
	scanf("%d", &n);

	printf("%d의 4제곱 값은 %d입니다.\n", n, pow4(n));

	return 0;
}
*/

// 1부터 n까지의 합 구하기
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

	printf("정숫값 : ");
	scanf("%d", &no);

	printf("1부터 %d까지의 합은 %d입니다\n", no, sumup(no));

	return 0;
}
*/

// 반복해서 경고음 발생
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
	printf("경고음을 내는 횟수 : ");
	scanf("%d", &n);
	put_chars_ln('-', 24);

	alert(n);
	putchar('\n');

	put_chars_ln('=', 24);

	return 0;
}
*/

// "안녕하세요."를 출력
/*
#include <stdio.h>

void hello(void)
{
	puts("안녕하세요.");
}

int main(void)
{
	hello();

	return 0;
}
*/

// 2개의 정숫값 평균 구하기
/*
#include <stdio.h>

int scan_int(void)
{
	int temp;

	printf("정숫값 : ");
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
		printf("n1과 n3의 평균값은 0입니다.\n");
	else if (ave > 0)
		printf("n1과 n3의 평균값은 양수로, %d입니다.\n", ave);
	else
		printf("n1과 n3의 평균값은 음수로, %d입니다.\n", ave);

	if ((ave = ave_of(n2, n3)) == 0)
		printf("n2과 n3의 평균값은 0입니다.\n");
	else if (ave > 0)
		printf("n2과 n3의 평균값은 양수로, %d입니다.\n", ave);
	else
		printf("n2과 n3의 평균값은 음수로, %d입니다.\n", ave);

	return 0;
}
*/

// 점수를 읽어 들여 합격자(60점 이상) 목록을 출력
/*
#include <stdio.h>

int point[7];

void print_success(void);

int main(void)
{
	int i;
	extern int point[7];
	
	puts("7명의 점수를 입력해주세요.");
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

	puts("합격자 목록");
	puts("----------");
	for (i = 0; i < 7; i++) {
		if(point[i] >= 60)
		printf("%d번 : %d\n", i + 1, point[i]);
	}
	puts("----------");
}
*/

// 영어 점수와 수학 점수의 최저 점수 구하기
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

	printf("%d명의 점수를 입력해주세요.\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("[%d] 영어 : ", i + 1); scanf("%d", &eng[i]);
		printf("     수학 : "); scanf("%d", &mat[i]);
	}

	min_e = min_of(eng, NUMBER);
	min_m = min_of(mat, NUMBER);

	printf("영어 최저 점수 : %d\n", min_e);
	printf("수학 최저 점수 : %d\n", min_m);

	return 0;
}
*/

// 배열의 모든 요소를 반전
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

	puts("반전했습니다.");
	for (i = 0; i < NUMBER; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
*/

// 배열의 모든 요소를 반전한 후 다른 배열에 저장
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

	puts("반전하고 복사했습니다.");
	for (i = 0; i < NUMBER; i++)
		printf("x2[%d] = %d\n", i, x2[i]);

	return 0;
}
*/

// 선형 탐색(순차 탐색)
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
	printf("찾을 값 : ");
	scanf("%d", &ky);

	if ((idx = searchr(vx, ky, NUMBER)) == FAILED)
		puts("\a탐색에 실패했습니다.");
	else
		printf("%d은(는) %d번째에 있습니다.\n", ky, idx + 1);

	return 0;
}
*/

// 특정 값을 가진 배열 안의 모든 요소의 첨자 추출
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
	printf("찾을 값 : ");
	scanf("%d", &ky);

	if ((num = search_idx(vx, pt, ky, NUMBER)) == 0)
		puts("\a배열에 해당 값이 없습니다.");
	else {
		printf("%d은(는) %d개 있습니다.\n", ky, num);
		for (i = 0; i < num; i++)
			printf("vx[%d] = %d\n", pt[i], vx[pt[i]]);
	}

	return 0;
}
*/

// 행렬의 곱 구하기
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

	printf("4열 3행의 mx와 3열 4행의 my의 곱을 구합니다.\n");

	puts("행렬 mx");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("mx[%d][%d] : ", i, j);
			scanf("%d", &mx[i][j]);
		}
	}

	puts("행렬 my");

		for (i = 0; i < 3; i++) {
			for (j = 0; j < 4; j++) {
				printf("my[%d][%d] : ", i, j);
				scanf("%d", &my[i][j]);
			}
		}

	mat_mul(mx, my, mz);

	puts("행렬의 곱");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", mz[i][j]);
		putchar('\n');
	}

	return 0;
}
*/

// 학생 4명의 3과목 시험 점수 2회분의 합계를 구하여 출력
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
		printf("%d회째의 점수\n", i + 1);
		mat_print(&score[i], 4);
		putchar('\n');
	}

	puts("합계 점수");
	mat_print(sum, 4);

	return 0;
}
*/

// 정적 기억 수명을 가진 객체의 암묵 초기화 확인
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

// 호출된 횟수를 출력하는 함수
/*
#include <stdio.h>

void put_count(void)
{
	static int count = 0;
	printf("put_count : %d회\n", ++count);
}

int main(void)
{
	int i, n;

	printf("호출 횟수 : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		put_count();

	return 0;
}
*/





// 면적, 합계, 구구단, 정렬, 함수 -> 변형 조건, 응용