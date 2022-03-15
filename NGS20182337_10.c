#pragma warning(disable:4996)

// 학생을 나타내는 구조체
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

	printf("이름 = %s %p\n", gildong.name, &gildong.name);
	printf("키 = %d %p\n", gildong.height, &gildong.height);
	printf("몸무게 = %.1f %p\n", gildong.weight, &gildong.weight);
	printf("이름 = %ld %p\n", gildong.schols, &gildong.schols);

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
	if (std->height > 180) std->weight = 80;
}

int main(void)
{
	Student gildong;

	printf("이름 : "); scanf("%s", &gildong.name);
	printf("키 : "); scanf("%d", &gildong.height);
	printf("몸무게 : "); scanf("%f", &gildong.weight);
	printf("장학금 : "); scanf("%ld", &gildong.schols);

	heeyoon(&gildong);

	printf("이름 = %s\n", gildong.name);
	printf("키 = %d\n", gildong.height);
	printf("몸무게 = %.1f\n", gildong.weight);
	printf("이름 = %ld\n", gildong.schols);

	return 0;
}
*/

// 구조체를 반환하는 함수
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

	printf("int형 멤버 x의 값 : "); scanf("%d", &temp.x);
	printf("long형 멤버 y의 값 : "); scanf("%ld", &temp.y);
	printf("double형 멤버 z의 값 : "); scanf("%lf", &temp.z);

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

// 학생 5명의 키/이름을 오름차순으로 정렬
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
		printf("%d번째 학생\n", i + 1);
		printf("이름 : "); scanf("%s", std[i].name);
		printf("키 : "); scanf("%d", &std[i].height);
		printf("몸무게 : "); scanf("%f", &std[i].weight);
		printf("장학금 : "); scanf("%ld", &std[i].schols);
	}

	printf("어떤 순서로 정렬할까요? [0]...키순 [1]...이름순 : ");
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

// 자동차 이동
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
	printf("현재 위치 : (%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("남은 연료 : %.2f리터\n", c.fuel);
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

		printf("이동할까요? [1...이동할 곳 좌표 입력\2...이동 거리 입력\0...종료] : ");
		scanf("%d", &select);
		if (select != 1 && select != 2) break;

		switch (select) {
		case 1:
			printf("목적지 x 좌표 : "); scanf("%lf", &dest.x);
			printf("	y 좌표 : "); scanf("%lf", &dest.y);
			break;
		case 2: {
			double x, y;
			printf("x 방향 이동 거리 : "); scanf("%lf", &x);
			printf("y 방향 이동 거리 : "); scanf("%lf", &y);
			dest.x = mycar.pt.x + x;
			dest.y = mycar.pt.y + y;
			break;
		}
		}
		if (!move(&mycar, dest))
			puts("\a연료 부족으로 이동할 수 없습니다.");
	}

	return 0;
}
*/