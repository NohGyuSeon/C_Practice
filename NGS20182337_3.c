#pragma warning(disable:4996)

// 배열의 각 요소에 앞에서부터 순서대로 0, 1, 2, 3, 4를 대입하고 출력
/*
#include <stdio.h>

int main(void)
{
	int i;
	int v[5];

	for (i = 0; i < 5; i++)
		v[i] = i;

	for (i = 0; i < 5; i++)
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
*/

// 배열의 각 요소에 앞에서부터 순서대로 5, 4, 3, 2, 1을 대입하고 출력
/*
#include <stdio.h>

int main(void)
{
	int i;
	int v[5];

	for (i = 0; i < 5; i++)
		v[i] = 5 - i;

	for (i = 0; i < 5; i++)
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
*/

// 배열의 각 요소를 앞에서부터 순서대로 5, 4, 3, 2, 1로 초기화하고 출력
/*
#include <stdio.h>

int main(void)
{
	int i;
	int v[5] = { 5, 4, 3, 2, 1 };

	for (i = 0; i < 5; i++)
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
*/

// 배열의 모든 요소를 별도의 배열로 역순 복사
/*
#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = { 17, 23, 36 };
	int b[5];

	for (i = 0; i < 5; i++)
		b[i] = a[4 - i];

	puts("  a   b  ");
	puts("----------");
	for (i = 0; i < 5; i++)
		printf("%4d%4d\n", a[i], b[i]);

	return 0;
}
*/

// 배열의 모든 요소 나열을 반전
/*
#include <stdio.h>
#define NUMBER 7

int main(void)
{
	int i;
	int x[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < NUMBER / 2; i++) {
		int temp = x[i];
		x[i] = x[NUMBER - i - 1];
		x[NUMBER - i - 1] = temp;
	}

	puts("반전했습니다.");
	for (i = 0; i < NUMBER; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
*/

// 대입 후의 변숫값 출력
/*
#include <stdio.h>

int main(void)
{
	double a;
	int b;

	a = b = 1.5;
	printf("a = %.1f b = %d\n", a, b);

	return 0;
}
*/

// 배열의 요소에 값을 읽어 들여 출력
/*
#include <stdio.h>
#define NUMBER 96

int main(void)
{
	int i, num;
	int a[NUMBER];

	printf("데이터 수 : ");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a1~%d 사이로 입력해주세요. ", NUMBER);
	} while (num < 1 || num > NUMBER);

	for (i = 0; i < num; i++) {
		printf("%2d번 : ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("{");

	for (i = 0; i < num - 1; i++)
		printf("%d ", a[i]);

	printf("%d}\n", a[i]);

	return 0;
}
*/

// 학생 점수를 읽어 들여 분포를 출력
/*
#include <stdio.h>
#define NUMBER 80

int main(void)
{
	int i, j;
	int num;
	int score[NUMBER];
	int dist[11] = { 0 };

	printf("학생 수를 입력해주세요. ");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a1~%d 사이로 입력해주세요. ", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("%d명의 점수를 입력해주세요.\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d번 : ", i + 1);
		do {
			scanf("%d", &score[i]);
			if (score[i] < 0 || score[i] > 100)
				printf("\a0~100 사이로 입력해주세요.");
		} while (score[i] < 0 || score[i] > 100);
		dist[score[i] / 10]++;
	}

	puts("\n--- 분포 그래프 ---");

	for (i = 0; i <= 9; i++) {
		printf("%3d~%3d : ", i * 10, i * 10 + 9);
		for (j = 0; j < dist[i]; j++)
			putchar('*');
		putchar('\n');
	}

	printf("   100 : ");
	for (j = 0; j < dist[10]; j++)
		putchar('*');
	putchar('\n');

	return 0;
}
*/

// 4행과 3열의 행렬과 3행 4열의 행렬의 곱 구하기
/*
#include <stdio.h>
#define NUMBER 80

int main(void)
{
	int i, j, k;
	int a[4][3];
	int b[3][4];
	int c[4][4];

	printf("4행 3열 a와 3행 4열 b의 곱을 c로 구합니다.\n");

	puts("a의 각 요소 값을 입력하세요. ");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	puts("b의 각 요소 값을 입력하세요.");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("b[%d][%d] : ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			c[i][j] = 0;
			for (k = 0; k < 3; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}

	puts("c의 값은 다음과 같습니다. ");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("c[%d][%d] = %d\n", i, j, c[i][j]);
		}
	}

	return 0;
} 
*/

// 학생 6명의 2과목 시험 점수를 읽어 들어 집계
/*
#include <stdio.h>
#define NUMBER 6

int main(void)
{
	int i, j;
	int score[NUMBER][2];
	int student[NUMBER] = { 0 };
	int subject[2] = { 0 };

	printf("%d명의 점수를 입력하세요.\n", NUMBER);

	for (i = 0; i < NUMBER; i++) {
		printf("%2d번...국어: ", i + 1);
		scanf("%d", &score[i][0]);
		printf("     수학 : ", i + 1);
		scanf("%d", &score[i][1]);

		student[i] = score[i][0] + score[i][1];
		subject[0] += score[i][0];
		subject[1] += score[i][1];
	}

	printf("-----------------------\n");
	printf("번호 국어 수학 합계 평균\n");
	printf("-----------------------\n");
	for (i = 0; i < NUMBER; i++)
		printf("%3d%6d%6d%6d%7.1f\n", i + 1, score[i][0], score[i][1], student[i], (double)student[i] / 2);
	printf("-----------------------\n");
	printf("합계%5d%6d%6d\n", subject[0], subject[1], subject[0] + subject[1]);
	printf("평균 %6.1f%6.1f%6.1f\n", (double)subject[0] / NUMBER, (double)subject[1] / NUMBER, (double)(subject[0] + subject[1]) / NUMBER);
	printf("-----------------------\n");

	return 0;
}
*/

// 학생 4명의 3과목 시험 점수 2회분 합계를 구해 출력
/*
#include <stdio.h>

int main(void)
{
	int i, j, k;
	int score[2][4][3] = {
		{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}},
		{{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}
	};

	int sum[4][3];

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			sum[i][j] = score[0][i][j] + score[1][i][j];
	}

	for (i = 0; i < 2; i++) {
		printf("%d번째 점수\n", i + 1);
		for (j = 0; j < 4; j++) {
			for(k=0; k<3; k++)
				printf("%4d", score[i][j][k]);
			putchar('\n');
		}
	}

	puts("점수 합계");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}

	return 0;
}
*/

// 배열을 이용한 여러가지 형태의 구구단 출력
/*
#include <stdio.h>

int main(void)
{
	int i, j;
	int gugudan[10][10];

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			gugudan[i][j] = i * j;
		}
	}

	printf("구구단을 구합니다.\n");

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%2dx%2d = %2d ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("상하 반전합니다.\n");

	for (i = 9; i >= 1; i--) {
		for (j = 1; j <= 9; j++) {
			printf("%2dx%2d = %2d  ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("좌우 반전합니다.\n");

	for (i = 1; i <= 9; i++) {
		for (j = 9; j >= 1; j--) {
			printf("%2dx%2d = %2d  ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("상하좌우 반전합니다.\n");

	for (i = 9; i >= 1; i--) {
		for (j = 9; j >= 1; j--) {
			printf("%2dx%2d = %2d  ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("오른쪽 아래 방향 대각선만 출력합니다.\n");
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			if (gugudan[i] == gugudan[j])
				printf("%2dx%2d = %2d ", i, j, gugudan[i][j]);
			else
				printf("            ");	
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("왼쪽 위 방향 대각선만 출력합니다.\n");
	for (i = 9; i >= 1; i--) {
		for (j = 9; j >= 1; j--) {
			if (gugudan[i] == gugudan[j])
				printf("%2dx%2d = %2d ", i, j, gugudan[i][j]);
			else
				printf("            ");
		}
		printf("\n");
	}

	return 0;
}
*/

// 일반식을 이용한 여러가지 형태의 구구단 출력
/*
#include <stdio.h>
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			printf("%2dx%2d = %2d ", i, j, i * j);
		}
		printf("\n");
	}

	printf("\n\n\n");
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			if (i == 5 || j == 5)
				printf("%2dx%2d = %2d ", i, j, i * j);
			else
				printf("           ");
		}
		printf("\n");
	}

	printf("\n\n\n");
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			if (i == 0 || j == 0 || i == 9 || j == 9)
				printf("%2dx%2d = %2d ", i, j, i * j);
			else
				printf("           ");
		}
		printf("\n");
	}

	return 0;
}
*/

// 함수를 이용한 여러가지 형태의 구구단 출력
/*
#include <stdio.h>

int func(int a, int b)
{
	int i, j;
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			if (a == i || a == j)
				printf("%2dx%2d = %2d ", i, j, i * j);
			else
				printf("           ");
		}
		printf("\n");
	}
}

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);

	func(x, y);

	return 0;
}
*/
