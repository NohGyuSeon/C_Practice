// �о���� �������� 10�� ����ΰ�?
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &no);

	if (no % 10)
	{
		puts("�� ���� 10�� ����� �ƴմϴ�.");
	}

	return 0;
}
*/

// �о���� ������ B�� A�� ����ΰ�?
/*
#include <stdio.h>

int main(void)
{
	int a, b;

	puts("2���� ������ �Է��ϼ���");
	printf("���� A : "); scanf_s("%d", &a);
	printf("���� B : "); scanf_s("%d", &b);

	if (a % b)
		puts("B�� A�� ����� �ƴմϴ�.");
	else
		puts("B�� A�� ����Դϴ�.");

	return 0;
}
*/

// �о���� �������� ��ȣ�� ����
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &no);
	 
	if (no == 0)
		puts("�� ���� 0�Դϴ�.");
	else if (no > 0)
		puts("�� ���� ����Դϴ�.");
	else
		puts("�� ���� �����Դϴ�.");

	return 0;
}
*/

// �о���� �������� ������ ���
/*
#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	if (num < 0)
		num = -num;

	printf("������ %d�Դϴ�.", num);

	return 0;
}
*/

// �о���� ������ 2���� ��� ���踦 ���
/*
#include <stdio.h>

int main(void)
{
	int a, b;

	puts("2���� ������ �Է��ϼ��� : ");
	printf("���� A : "); scanf_s("%d", &a);
	printf("���� B : "); scanf_s("%d", &b);

	if (a == b)
		puts("A�� B�� �����ϴ�.");
	else if (a > b)
		puts("A�� B���� Ů�ϴ�.");
	else
		puts("A�� B���� �۽��ϴ�.");

	return 0;
}
*/

// � �����ڿ� ���� �����ڰ� �����ϴ� �� ���
/*
#include <stdio.h>

int main(void)
{
	int a, b;

	puts("2���� ������ �Է��ϼ���.");
	printf("���� a : "); scanf_s("%d", &a);
	printf("���� b : "); scanf_s("%d", &b);

	puts("����� ��");
	printf("a == b�� �� : %d\n", a == b);
	printf("a != b�� �� : %d\n", a != b);

	puts("������� ��");
	printf("a < b�� �� : %d\n", a < b);
	printf("a <= b�� �� : %d\n", a <= b);
	printf("a > b�� �� : %d\n", a > b);
	printf("a >= b�� �� : %d\n", a >= b);

	return 0;
}
*/

// �о���� ������ 3���� �ּڰ��� ���ؼ� ���
/*
#include <stdio.h>

int main(Void)
{
	int n1, n2, n3, min;

	puts("3���� ������ �Է��ϼ���.");
	printf("���� 1 : "); scanf_s("%d", &n1);
	printf("���� 2 : "); scanf_s("%d", &n2);
	printf("���� 3 : "); scanf_s("%d", &n3);

	min = n1;
	if (n2 < min) min = n2;
	if (n3 < min) min = n3;

	printf("�ּڰ��� %d�Դϴ�.\n", min);

	return 0;
}
*/

// �о���� ������ 4���� �ִ��� ���ؼ� ���
/*
#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, max;

	puts("4���� ������ �Է��ϼ���.");
	printf("���� 1 : "); scanf_s("%d", &n1);
	printf("���� 2 : "); scanf_s("%d", &n2);
	printf("���� 3 : "); scanf_s("%d", &n3);
	printf("���� 4 : "); scanf_s("%d", &n4);

	max = n1;
	if (n2 > max) max = n2;
	if (n3 > max) max = n3;
	if (n4 > max) max = n4;

	printf("�ִ��� %d�Դϴ�.\n", max);

	return 0;
}
*/

// �о���� ������ 2���� ���̸� ���ؼ� ���
/*
#include <stdio.h>

int main(void)
{
	int n1, n2, diff;

	puts("2���� ������ �Է��ϼ��� : ");
	printf("���� : 1"); scanf_s("%d", &n1);
	printf("���� : 2"); scanf_s("%d", &n2);

	if (n1 > n2)
		diff = n1 - n2;
	else
		diff = n2 - n1;

	printf("�� ���� ���̴� %d�Դϴ�.\n", diff);

	return 0;
}
*/

// �о���� ������ 3���� �ּڰ��� ���ؼ� ���
/*
#include <stdio.h>

int main(void)
{
	int n1, n2, n3;

	puts("3���� ������ �Է��ϼ���.");
	printf("���� 1 : "); scanf_s("%d", &n1);
	printf("���� 2 : "); scanf_s("%d", &n2);
	printf("���� 3 : "); scanf_s("%d", &n3);

	printf("�ּڰ��� %d�Դϴ�.\n", (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3));

	return 0;
}
*/

// �о���� ������ 3���� ��ġ ���� ���
/*
#include <stdio.h>

int main(void)
{
	int a, b, c;

	puts("3���� ������ �Է��ϼ���.");
	printf("���� A : "); scanf_s("%d", &a);
	printf("���� B : "); scanf_s("%d", &b);
	printf("���� C : "); scanf_s("%d", &c);

	if (a == b && b == c)
		puts("3���� ���� ��� �����ϴ�.");
	else if (a == b || b == c || c == a)
		puts("2�� ���� �����ϴ�.");
	else
		puts("3�� ���� ��� �ٸ��ϴ�.");

	return 0;
}
*/

// �о���� ������ 2���� ���̰� 10 �������� �ƴ��� ���
/*
#include <stdio.h>

int main(void)
{
	int a, b, diff;

	puts("4���� ������ �Է��ϼ���.");
	printf("���� A : "); scanf_s("%d", &a);
	printf("���� B : "); scanf_s("%d", &b);

	diff = a - b;

	if (diff > 10 || diff < -10)
		puts("�� ���� ���̴� 11 �̻��Դϴ�.");
	else
		puts("�� ���� ���̴� 10 �����Դϴ�.");

	return 0;
}
*/

// �о���� ������ ���� ��� ���
/*
#include <stdio.h>

int main(void)
{
	int point;

	printf("���� : ");
	scanf_s("%d", &point);

	if (point < 0 || point > 100)
		puts("�ùٸ��� ���� �����Դϴ�.");
	else if (point <= 59)
		puts("�Ұ�");
	else if (point <= 69)
		puts("����");
	else if (point <= 79)
		puts("��ȣ");
	else
		puts("���");

	return 0;
}
*/

// �о���� ������ 2���� ������?
/*
#include <stdio.h>

int main(void)
{
	int a, b, diff;

	puts("2���� ������ �Է��ϼ���.");
	printf("���� A : "); scanf_s("%d", &a);
	printf("���� B : "); scanf_s("%d", &b);

	if (a == b)
		puts("�� ���� �����ϴ�.");
	else {
		int min, max;
		if (a < b) {
			min = a;
			max = b;
		}
		else {
			min = b;
			max = a;
		}
		printf("���� ���� %d�Դϴ�.\n", min);
		printf("ū ���� %d�Դϴ�.\n", max);
	}

	return 0; 
}
*/

// �о���� �������� ¦���ΰ� Ȧ���ΰ�?
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &no);

	switch (no % 2) {
		case 0 : puts("�� ���� ¦���Դϴ�.\n"); break;
		case 1 : puts("�� ���� Ȧ���Դϴ�.\n"); break;
	}

	return 0;
}
*/

// �о���� ���� ������ ���
/*
#include <stdio.h>

int main(void)
{
	int month;

	printf("�� ���ΰ���? ");
	scanf_s("%d", &month);
	printf("%d���� ", month);
	switch (month) {
		case 3 :
		case 4 :
		case 5 : puts("���Դϴ�."); break;
		case 6 :
		case 7 :
		case 8 : puts("�����Դϴ�."); break;
		case 9 :
		case 10 :
		case 11: puts("�����Դϴ�."); break;
		case 12:
		case 1 :
		case 2: puts("�ܿ��Դϴ�."); break;
		default: puts("���� ���Դϴ�!!\a"); break;
	}
	
	return 0;
}
*/





/*
1. ���� ������(����ģ �ﰢ���� ����)�� ���ϴ� ����
2. �� ���� ���� A�� ���簢���� ���̸� ���ϴ� ����
3. ���� ���̸� ���ϴ� ����
4. ����ģ �ﰢ���� ���̸� ���ϴ� ����
5. ��ü ����ģ �κ��� ���̴� 
	-> �簢���� ���� - ���� ���� + �ﰢ���� ���̷� ���ϴ� ����
*/