//�о� ���� �������� 10�� ��Ģ������ �� ���
/*
#include <stdio.h>

int main(void)
{
	int n;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &n);

	printf("10�� ���ϸ� %d�Դϴ�.\n", n + 10);
	printf("10�� ���� %d�Դϴ�.\n", n - 10);
	printf("10�� ���ϸ� %d�Դϴ�.\n", n * 10);
	printf("10�� ���� ���� %d�Դϴ�.\n", n / 10);
	printf("10�� ���� ������ %d�Դϴ�.\n", n % 10);
	return 0;
}
*/

//�о� ���� ������ 2���� ������ ������� ���
/*
#include <stdio.h>

int main(void)
{
	int x, y;

	puts("2���� �������� �Է��ϼ���.");
	printf("���� x : "); scanf_s("%d", &x);
	printf("���� y : "); scanf_s("%d", &y);

	printf("x���� y���� %d%%�Դϴ�.\n", 100 * x / y);

	return 0;
}
*/

// �������� �о� �鿩 ���� ���̸� ���ϰ� �̸� ���
/*
#include <stdio.h>

int main(void)
{
	double r;

	printf("�������� : ");
	scanf_s("%lf", &r);

	printf("���� ���̴� %f�Դϴ�.\n", 3.14 * r * r);

	return 0;
}
*/

/* �о���� ������ 2���� ������ �����(�Ǽ�)�� ���
#include <stdio.h>

int main(void)
{
	double a, b;

	puts("2���� ������ �Է��ϼ��� : ");
	printf("���� a : "); scanf_s("%d", &a);
	printf("���� b : "); scanf_s("%d", &b);

	printf("a ���� b�� %f%%�Դϴ�.\n", (double)a / b * 64.285714);

	return 0;

}
*/

// �о���� Ű�� ���� ǥ�� ü���� ���ؼ� ���
/*
#include <stdio.h>

int main(void)
{
	int height;

	printf("Ű�� �Է��ϼ��� : ");
	scanf_s("%d", &height);

	printf("ǥ��ü���� %.1f�Դϴ�.\n", (height - 100) * 0.9);

	return 0;
}
*/

// �о���� Ű�� �����Է� BMI�� ���ؼ� ���
/*
#include <stdio.h>

int main(void)
{
	double height, weight;

	printf("Ű�� �Է��ϼ���: "); scanf_s("%lf", &height);
	printf("�����Ը� �Է��ϼ���: "); scanf_s("%lf", &weight);

	printf("BMI�� %.2f�Դϴ�.\n", weight / ((height / 100.0) * (height / 100.0)));

	return 0;

}
*/




