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

	printf("x��ǥ : "); scanf("%lf", &temp.x);
	printf("y��ǥ : "); scanf("%lf", &temp.y);

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
	printf("���� 2��\n\n");

	Rectangle r;

	printf(" ���� ���� ������ �Ʒ��� ��ǥ �Է�\n");
	printf("----------------------------------\n");

	puts("= ��ǥ 1 = "); r.p1 = scan_point();
	puts("= ��ǥ 2 = "); r.p2 = scan_point();

	printf("----------------------------------\n");
	printf("���� = %.3f\n", area_of(r));
	printf("�׺��� ���� = %.3f\n", len(&r));

	printf("\n���� 3��\n\n");
	int x, y;
	printf("���� 2�� �Է� : \n");
	printf("----------------------------------\n");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("----------------------------------\n");

	printf("�ִ����� : %d\n", func(x, y));
	printf("----------------------------------\n");

	return 0;
}
