#pragma warning(disable:4996)

#include <stdio.h>
#define abs(n) ((n>=0) ? (n) : -(n))

typedef struct {
	double x;
	double y;
} Point;

typedef struct {
	Point p1;
	Point p2;
} Rectangle;

Point scan_point(void)
{
	Point temp;

	printf("x좌표 : "); scanf("%lf", &temp.x);
	printf("y좌표 : "); scanf("%lf", &temp.y);

	return temp;
}

double area_of(Rectangle r)
{
	return abs(r.p2.x - r.p1.x) * abs(r.p2.y - r.p1.y);
}

double len(Rectangle* r)
{
	return 2 * (abs(r->p2.x - r->p1.x) + abs(r->p2.y - r->p1.y));
}

int func(int x, int y)
{
	if (y == 0)
		return x;
	else
		return func(y, x % y);
}

int main(void)
{
	printf("문제 2번\n\n");

	Rectangle r;

	printf(" 왼쪽 위와 오른쪽 아래의 좌표 입력\n");
	printf("----------------------------------\n");

	puts("= 좌표 1 = "); r.p1 = scan_point();
	puts("= 좌표 2 = "); r.p2 = scan_point();

	printf("----------------------------------\n");
	printf("넓이 = %.3f\n", area_of(r));
	printf("네변의 길이 = %.3f\n", len(&r));

	printf("\n문제 3번\n\n");
	int x, y;
	printf("정수 2개 입력 : \n");
	printf("----------------------------------\n");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("----------------------------------\n");

	printf("최대공약수 : %d\n", func(x, y));
	printf("----------------------------------\n");

	return 0;
}
