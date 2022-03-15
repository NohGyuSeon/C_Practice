#pragma warning(disable:4996)

// �л��� ��Ÿ���� ����ü
/*
#include <stdio.h>
#define NAME_LEN 64

struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
};

int main(void)
{
	struct student gildong = { "Gildong", 173, 86.2 };

	printf("�̸� = %s %p\n", gildong.name, &gildong.name);
	printf("Ű = %d %p\n", gildong.height, &gildong.height);
	printf("������ = %.1f %p\n", gildong.weight, &gildong.weight);
	printf("�̸� = %ld %p\n", gildong.schols, &gildong.schols);

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
	if (std->height > 180) std->weight = 80;
}

int main(void)
{
	Student gildong;

	printf("�̸� : "); scanf("%s", &gildong.name);
	printf("Ű : "); scanf("%d", &gildong.height);
	printf("������ : "); scanf("%f", &gildong.weight);
	printf("���б� : "); scanf("%ld", &gildong.schols);

	heeyoon(&gildong);

	printf("�̸� = %s\n", gildong.name);
	printf("Ű = %d\n", gildong.height);
	printf("������ = %.1f\n", gildong.weight);
	printf("�̸� = %ld\n", gildong.schols);

	return 0;
}
*/

// ����ü�� ��ȯ�ϴ� �Լ�
/*
#include <stdio.h>

struct xyz {
	int x;
	long y;
	double z;
};

struct xyz scan_xyz()
{
	struct xyz temp;

	printf("int�� ��� x�� �� : "); scanf("%d", &temp.x);
	printf("long�� ��� y�� �� : "); scanf("%ld", &temp.y);
	printf("double�� ��� z�� �� : "); scanf("%lf", &temp.z);

	return temp;
}

int main(void)
{
	struct xyz s;

	s = scan_xyz();

	printf("s.x = %d\n", s.x);
	printf("s.y = %ld\n", s.y);
	printf("s.z = %f\n", s.z);

	return 0;
}
*/

// �л� 5���� Ű/�̸��� ������������ ����
/*
#include <stdio.h>
#include <string.h>
#define NUMBER 5
#define NAME_LEN 64

typedef struct {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
} Student;

void swap_Student(Student* x, Student* y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

void sort_by_height(Student a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j < i; i--) {
			if (a[j - 1].height > a[j].height)
				swap_Student(&a[j - 1], &a[j]);
		}
	}
}

void sort_by_name(Student a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--)
			if (strcmp(a[j - 1].name, a[j].name) > 0)
				swap_Student(&a[j - 1], &a[j]);
	}
}

int main(void)
{
	int i;
	int sort_type;
	Student std[5];

	for (i = 0; i < NUMBER; i++) {
		printf("%d��° �л�\n", i + 1);
		printf("�̸� : "); scanf("%s", std[i].name);
		printf("Ű : "); scanf("%d", &std[i].height);
		printf("������ : "); scanf("%f", &std[i].weight);
		printf("���б� : "); scanf("%ld", &std[i].schols);
	}

	printf("� ������ �����ұ��? [0]...Ű�� [1]...�̸��� : ");
	scanf("%d", &sort_type);

	switch (sort_type) {
		case 0: sort_by_height(std, NUMBER); break;
		case 1: sort_by_name(std, NUMBER); break;
	}

	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);

	return 0;
}
*/

// �ڵ��� �̵�
/*
#include <math.h>
#include <stdio.h>
#define sqr(n) ((n) * (n))

typedef struct {
	double x;
	double y;
} Point;

typedef struct {
	Point pt;
	double fuel;
} Car;

double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

void put_info(Car c)
{
	printf("���� ��ġ : (%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("���� ���� : %.2f����\n", c.fuel);
}

int move(Car* c, Point dest)
{
	double d = distance_of(c->pt, dest);
	if (d > c->fuel)
		return 0;
	c->pt = dest;
	c->fuel -= d;
	return 1;
}

int main(void)
{
	Car mycar = { {0.0, 0.0}, 90.0 };

	while (1) {
		int select;
		Point dest;

		put_info(mycar);

		printf("�̵��ұ��? [1...�̵��� �� ��ǥ �Է�\2...�̵� �Ÿ� �Է�\0...����] : ");
		scanf("%d", &select);
		if (select != 1 && select != 2) break;

		switch (select) {
		case 1:
			printf("������ x ��ǥ : "); scanf("%lf", &dest.x);
			printf("	y ��ǥ : "); scanf("%lf", &dest.y);
			break;
		case 2: {
			double x, y;
			printf("x ���� �̵� �Ÿ� : "); scanf("%lf", &x);
			printf("y ���� �̵� �Ÿ� : "); scanf("%lf", &y);
			dest.x = mycar.pt.x + x;
			dest.y = mycar.pt.y + y;
			break;
		}
		}
		if (!move(&mycar, dest))
			puts("\a���� �������� �̵��� �� �����ϴ�.");
	}

	return 0;
}
*/