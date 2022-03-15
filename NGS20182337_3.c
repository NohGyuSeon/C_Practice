#pragma warning(disable:4996)

// �迭�� �� ��ҿ� �տ������� ������� 0, 1, 2, 3, 4�� �����ϰ� ���
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

// �迭�� �� ��ҿ� �տ������� ������� 5, 4, 3, 2, 1�� �����ϰ� ���
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

// �迭�� �� ��Ҹ� �տ������� ������� 5, 4, 3, 2, 1�� �ʱ�ȭ�ϰ� ���
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

// �迭�� ��� ��Ҹ� ������ �迭�� ���� ����
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

// �迭�� ��� ��� ������ ����
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

	puts("�����߽��ϴ�.");
	for (i = 0; i < NUMBER; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
*/

// ���� ���� ������ ���
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

// �迭�� ��ҿ� ���� �о� �鿩 ���
/*
#include <stdio.h>
#define NUMBER 96

int main(void)
{
	int i, num;
	int a[NUMBER];

	printf("������ �� : ");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a1~%d ���̷� �Է����ּ���. ", NUMBER);
	} while (num < 1 || num > NUMBER);

	for (i = 0; i < num; i++) {
		printf("%2d�� : ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("{");

	for (i = 0; i < num - 1; i++)
		printf("%d ", a[i]);

	printf("%d}\n", a[i]);

	return 0;
}
*/

// �л� ������ �о� �鿩 ������ ���
/*
#include <stdio.h>
#define NUMBER 80

int main(void)
{
	int i, j;
	int num;
	int score[NUMBER];
	int dist[11] = { 0 };

	printf("�л� ���� �Է����ּ���. ");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a1~%d ���̷� �Է����ּ���. ", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("%d���� ������ �Է����ּ���.\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d�� : ", i + 1);
		do {
			scanf("%d", &score[i]);
			if (score[i] < 0 || score[i] > 100)
				printf("\a0~100 ���̷� �Է����ּ���.");
		} while (score[i] < 0 || score[i] > 100);
		dist[score[i] / 10]++;
	}

	puts("\n--- ���� �׷��� ---");

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

// 4��� 3���� ��İ� 3�� 4���� ����� �� ���ϱ�
/*
#include <stdio.h>
#define NUMBER 80

int main(void)
{
	int i, j, k;
	int a[4][3];
	int b[3][4];
	int c[4][4];

	printf("4�� 3�� a�� 3�� 4�� b�� ���� c�� ���մϴ�.\n");

	puts("a�� �� ��� ���� �Է��ϼ���. ");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	puts("b�� �� ��� ���� �Է��ϼ���.");
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

	puts("c�� ���� ������ �����ϴ�. ");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("c[%d][%d] = %d\n", i, j, c[i][j]);
		}
	}

	return 0;
} 
*/

// �л� 6���� 2���� ���� ������ �о� ��� ����
/*
#include <stdio.h>
#define NUMBER 6

int main(void)
{
	int i, j;
	int score[NUMBER][2];
	int student[NUMBER] = { 0 };
	int subject[2] = { 0 };

	printf("%d���� ������ �Է��ϼ���.\n", NUMBER);

	for (i = 0; i < NUMBER; i++) {
		printf("%2d��...����: ", i + 1);
		scanf("%d", &score[i][0]);
		printf("     ���� : ", i + 1);
		scanf("%d", &score[i][1]);

		student[i] = score[i][0] + score[i][1];
		subject[0] += score[i][0];
		subject[1] += score[i][1];
	}

	printf("-----------------------\n");
	printf("��ȣ ���� ���� �հ� ���\n");
	printf("-----------------------\n");
	for (i = 0; i < NUMBER; i++)
		printf("%3d%6d%6d%6d%7.1f\n", i + 1, score[i][0], score[i][1], student[i], (double)student[i] / 2);
	printf("-----------------------\n");
	printf("�հ�%5d%6d%6d\n", subject[0], subject[1], subject[0] + subject[1]);
	printf("��� %6.1f%6.1f%6.1f\n", (double)subject[0] / NUMBER, (double)subject[1] / NUMBER, (double)(subject[0] + subject[1]) / NUMBER);
	printf("-----------------------\n");

	return 0;
}
*/

// �л� 4���� 3���� ���� ���� 2ȸ�� �հ踦 ���� ���
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
		printf("%d��° ����\n", i + 1);
		for (j = 0; j < 4; j++) {
			for(k=0; k<3; k++)
				printf("%4d", score[i][j][k]);
			putchar('\n');
		}
	}

	puts("���� �հ�");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}

	return 0;
}
*/

// �迭�� �̿��� �������� ������ ������ ���
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

	printf("�������� ���մϴ�.\n");

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%2dx%2d = %2d ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("���� �����մϴ�.\n");

	for (i = 9; i >= 1; i--) {
		for (j = 1; j <= 9; j++) {
			printf("%2dx%2d = %2d  ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("�¿� �����մϴ�.\n");

	for (i = 1; i <= 9; i++) {
		for (j = 9; j >= 1; j--) {
			printf("%2dx%2d = %2d  ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("�����¿� �����մϴ�.\n");

	for (i = 9; i >= 1; i--) {
		for (j = 9; j >= 1; j--) {
			printf("%2dx%2d = %2d  ", i, j, gugudan[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");
	printf("������ �Ʒ� ���� �밢���� ����մϴ�.\n");
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
	printf("���� �� ���� �밢���� ����մϴ�.\n");
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

// �Ϲݽ��� �̿��� �������� ������ ������ ���
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

// �Լ��� �̿��� �������� ������ ������ ���
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
