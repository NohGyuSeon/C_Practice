#pragma warning(disable:4996)

// �о���� �������� ��ȣ ����
/*
#include <stdio.h>

int main(void)
{
	int retry;
	
	do {
		int no;

		printf("������ �Է��ϼ��� : ");
		scanf("%d", &no);

		if (no == 0)
			puts("�� ���� 0�Դϴ�.");
		else if (no > 0)
			puts("�� ���� ����Դϴ�.");
		else
			puts("�� ���� �����Դϴ�.");

		printf("�� �� ��? [YES...0/NO...9] : ");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
*/

// ������ 2���� �о�鿩 ���� ������ ū ������ ��� ������ ���� �� ���
/*
#include <stdio.h>

int main(void)
{
	int a, b;
	int no, lower, upper;
	int sum = 0;

	printf("���� A : "); scanf("%d", &a);
	printf("���� B : "); scanf("%d", &b);

	if (a > b) {
		lower = b;
		upper = a;
	}
	else {
		lower = a;
		upper = b;
	}

	no = lower;
	do {
		sum = sum + no;
		no = no + 1;
	} while (no <= upper);

	printf("%d �̻� %d ������ ��� ������ ���� ���� %d�Դϴ�.\n", lower, upper, sum);

	return 0;
}
*/

// �о���� ���������� 0���� ī��Ʈ�ٿ�
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &no);

	if (no >= 0) {
		while (no >= 0) {
			printf("%d ", no);
			no--;
		}
		printf("\n");
	}

	return 0;
}
*/

// �о���� ���������� 1���� ī��Ʈ�ٿ�
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d ", &no);
	 
	if (no >= 1) {
		while (no >= 1)
			printf("%d", no--);
		printf("\n");
	}

	return 0;
}
*/

// �о���� ���� ���������� ī��Ʈ��
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d ", &no);

	if (no >= 1) {
		int i = 1;
		while (i <= no)
			printf("%d ", i++);
		printf("\n");
	}

	return 0;
}
*/

// �о���� ������ ������ ¦���� ������������ ���
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d ", &no);

	if (no >= 1) {
		int i = 2;
		while (i <= no) {
			printf("%d ", i);
			i += 2;
		}
		printf("\n");
	}

	return 0;
}
*/

// �о���� ������ ������ 2�� �ŵ������� ������������ ���
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d ", &no);

	if (no >= 1) {
		int i = 2;
		while (i <= no) {
			printf("%d ", i);
			i *= 2;
		}
		printf("\n");
	}

	return 0;
}
*/

// �о���� ���� ���������� ī��Ʈ��
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d ", &no);

	if (no >= 1) {
		int i = 1;
		printf("{");
		while (i < no)
			printf("%d ", i++);
		printf("%d}\n", no);
	}

	return 0;
}  
*/

// �о���� ���� ������ŭ *�� �����ؼ� ���
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("���� ���� : ");
	scanf("%d", &no);

	if (no >= 1) {
		while (no-- > 0)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
*/

// �о���� ���� ������ŭ *�� ���η� ���� ���
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("���� ���� : ");
	scanf("%d", &no);

	while (no-- > 0)
		puts("*");

	return 0;
}
*/

// �о���� ���� ������ ������ŭ +�� -�� ����� ��� (��� ���α׷� A)
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("���� ���� : ");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 1;
		while (i <= no) {
			if(i % 2)
				putchar('+');
			else
				putchar('-');
			i++;
		}
		putchar('\n');
	}

	return 0;
}
*/

// �о���� ���� ������ ������ŭ +�� -�� ����� ��� (��� ���α׷� B)
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("���� ���� : ");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 1;
		while (i <= no / 2) {
			printf("+-");
			i++;
		}
		if (no % 2 == 1)
			putchar('+');
		putchar('\n');
	}

	return 0;
}
*/

// �о���� ���� �������� �������� ���
/*
#include <stdio.h>

int main(void)
{
	int no;

	do{
		printf("���� ������ �Է��ϼ��� : : ");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a���� ������ �Է����ּ���.");
	} while (no <= 0);

	printf("%d��(��) �Ųٷ� ������ ", no);
	while (no > 0) {
		printf("%d", no % 10);
		no /= 10;
	}
	puts("�Դϴ�.");

	return 0;
}
*/

// �о���� ���� �������� �ڸ��� ���
/*
#include <stdio.h>

int main(void)
{
	int no, temp;
	int digits;

	do{
		printf("���� ������ �Է��ϼ��� : : ");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a���� ������ �Է����ּ���.");
	} while (no <= 0);

	temp = no;
	digits = 0;

	while (temp > 0) {
		temp /= 10;
		digits++;
	}
	printf("%d��(��) %d�ڸ��Դϴ�.\n", no, digits);

	return 0;
}
*/

// 1���� n������ ���� ����
/*
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int n;
	
	printf("n�� �� : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		sum += i;

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);

	return 0;
}
*/

// �о���� ���� ������ŭ 1234567890�� �ݺ� ��� (���α׷� A)
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("���� ������ �Է����ּ��� : ");
	scanf("%d", &no);

	for (i = 1; i <= no; i++)
		printf("%d", i % 10);
	putchar('\n');

	return 0;
}
*/

// �о���� ���� ������ŭ 1234567890�� �ݺ� ��� (���α׷� B)
/*
#include <stdio.h>

int main(void)
{
	int i, no, r, q;

	printf("���� ������ �Է����ּ��� : ");
	scanf("%d", &no);

	q = no / 10;
	r = no % 10;

	for (i = 1; i <= q; i++)
		printf("1234567890");
	for (i = 1; i <= r; i++)
		printf("%d", i % 10);
	putchar('\n');

	return 0;
}
*/

// Ű�� ǥ�� ������ ����ǥ ���
/*
#include <stdio.h>

int main(void)
{
	int height;
	int lower, upper, step;

	printf("�� cm���� : "); scanf("%d", &lower);
	printf("�� cm���� : "); scanf("%d", &upper);
	printf("�� cm���� : "); scanf("%d", &step);

	for (height = lower; height <= upper; height += step)
		printf("%dcm %.2fkg\n", height, (height - 100) * 0.9);

	return 0;
}
*/

// �о���� ������ ������ Ȧ�� ���
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("������ : ");
	scanf("%d", &no);

	for (i = 1; i <= no; i += 2)
		printf("%d ", i);
	putchar('\n');

	return 0;
}
*/

// �о���� ������ ������ ������ �� ���� �� ���
/*
#include <stdio.h>

int main(void)
{
	int i, n;

	printf("n�� �� : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i ++)
		printf("%d�� ������ %d\n", i, i * i);

	return 0;
}
*/

// �о���� ���� ������ŭ 5���� �� �ٲ� �ϸ� '*' ��� (���α׷� A)
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("�� ���� *�� ����ұ��? ");
	scanf("%d", &no);

	if (no > 0) {
		int i;
		for (i = 0; i < no; i++) {
			putchar('*');
			if (i % 5 == 4)
				putchar('\n');
		}
		if (i % 5 != 0)
			putchar('\n');
	}

	return 0;
}
*/

// �о���� ���� ������ŭ 5���� �� �ٲ� �ϸ� '*' ��� (���α׷� B)
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("�� ���� *�� ����ұ��? ");
	scanf("%d", &no);

	if (no > 0) {
		int i;
		int rem = no % 5; 
		for (i = 0; i < no / 5; i++) 
			puts("*****");
		if(rem > 0) {
		for (i = 0; i < rem; i++)
			putchar('*');
		putchar('\n');
		}
	}

	return 0;
}
*/

// �о���� �������� ��� ����� �� ������ ���
/*
#include <stdio.h>

int main(void)
{
	int i, n, count;

	printf("������ : ");
	scanf("%d", &n);

	count = 0;
	for(i=1; i<=n; i++)
		if (n % i == 0) {
			printf("%d\n", i);
			count++;
		}
	printf("����� %d���Դϴ�.\n", count);

	return 0;
}
*/

// �о���� ������ ������ ��� ���簢���� ���� ����(����) ����
/*
#include <stdio.h>

int main(void)
{
	int area;
	int height;

	printf("���� : ");
	scanf("%d", &area);

	for (height = 1; height < area; height++) {
		if(height * height > area) break;
		if(area * height != 0) continue;
		printf("%d x %d\n", height, area / height);
	}

	return 0;
}
*/

// ������ ǥ ���
/*
#include <stdio.h>

int main(void)
{
	int i, j;

	printf(" :");

	for(i=1; i<=9; i++)
		printf("%3d", i);
	putchar('\n');

	puts("--+--------------------");

	for(i=1; i<=9; i++) {
		printf("%d : ", i);
		for (j=1; j<=9; j++)
			printf("%3d", i*j);
		putchar('\n');
	}

	return 0;
}
*/

// ���簢�� �׸���
/*
#include <stdio.h>

int main(void)
{
	int i, j;
	int height;

	printf("���簢���� �׸��ϴ�. ");
	printf("���̴� ���Դϱ�? "); scanf("%d", &height);
	
	for (i=1; i<=height; i++) {
		for(j=1; j<=height; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
*/

// ���簢�� �׸���
/*
#include <stdio.h>

int main(void)
{
	int i, j;
	int side1, side2, height, width;

	puts("������ �� ���簢���� �׸��ϴ�. ");
	printf("�� ��(1) : "); scanf("%d", &side1);
	printf("�� ��(2) : "); scanf("%d", &side2);

	if(side1 < side2) {
		height = side1;
		width = side2;
	}
	else {
		height = side2;
		width = side1;
	}

	for(i=1; i<=height; i++) {
		for (j=1; j<=width; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
*/

// width������ �� �ٲ��ϸ鼭 no���� '*' ���
/*
#include <stdio.h>

int main(void)
{
	int no, width;
	
	printf("�� ���� *�� ����ұ��? "); scanf("%d", &no);
	printf("�� ������ �� �ٲ��ұ��? "); scanf("%d", &width);

	if (no > 0) {
		int i, j;
		int rem = no % width;
		for (i = 0; i < no / width; i++) {
			for (j = 0; j < width; j++)
				putchar('*');
			putchar('\n');
		}
		if(rem > 0) {
			for(i=0; i<rem; i++)
				putchar('*');
			putchar('\n');
		}
	}

	return 0;
}
*/

// ���� �Ʒ��� ������ �����̵�ﰢ�� ���
/*
#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("���� �Ʒ��� ������ �����̵�ﰢ���� ����ϴ�.");
	printf("ª�� �� : ");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
*/

// ���� ���� ������ �����̵�ﰢ�� ���
/*
#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("���� ���� ������ �����̵�ﰢ���� ����ϴ�.");
	printf("ª�� �� : ");
	scanf("%d", &len);

	for (i = len; i >= 1; i--) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
*/

// ������ �Ʒ��� ������ �����̵�ﰢ�� ���
/*
#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("���� ���� ������ �����̵�ﰢ���� ����ϴ�.");
	printf("ª�� �� : ");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		for (j = 1; j <= len - i; j++)
			putchar(' ');
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
*/

// ������ �Ʒ��� ������ �����̵�ﰢ�� ���
/*
#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("���� ���� ������ �����̵�ﰢ���� ����ϴ�.");
	printf("ª�� �� : ");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		for (j = 1; j <= len - i; j++)
			putchar(' ');
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
*/

// ������ ���� ������ �����̵�ﰢ�� ���
/*
#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("���� ���� ������ �����̵�ﰢ���� ����ϴ�.");
	printf("ª�� �� : ");
	scanf("%d", &len);

	for (i = len; i >= 1; i--) {
		for (j = 1; j <= len - i; j++)
			putchar(' ');
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
*/

// �Ƕ�̵� �׸���
/*
#include <stdio.h>

int main(void)
{
	int i, j;
	int h;

	puts("�Ƕ�̵带 ����ϴ�.");
	printf("�� ���ΰ���? ");
	scanf("%d", &h);

	for (i = 1; i <= h; i++) { 
		for (j = 1; j <= h - i; j++)
			putchar(' ');
	for (j = 1; j <= 2 * i - 1; j++)
		putchar('*');
	putchar('\n');	
	}

	return 0;
}
*/

// �Ʒ��� ���� ���� �Ƕ�̵� �׸���
/*
#include <stdio.h>

int main(void)

{
	int i, j;
	int h;

	puts("�Ʒ��� ���� ���� �Ƕ�̵带 ����ϴ�.");
	printf("�� ���ΰ���? ");
	scanf("%d", &h);

	for (i = 1; i <= h; i++) {
		for (j = 1; j < i - 1; j++)
			putchar(' ');
		for (j = 1; j <= 2 * (h - i) + 1; j++)
			printf("%d", i % 10);
		putchar('\n');
	}

	return 0;
}
*/

// 1���� 50������ �����ջ�, 51���� 99������ �״��, 100�� ������ ���϶� (���α׷� A)
/*
#include <stdio.h>

int main(void)
{
	int i;
	int sum1 = 0, sum2 = 0, sum3 = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i <= 50)
		{
			sum1 = sum1 + i;
			printf("1���� 50������ ���� : %d\n", i);
		}

		else if (i >= 51 && i <= 99)
		{
			sum2 = sum2 + i;
		}
		else
		{
			sum3 = sum1 + sum2 + 100;
		}
	}
	printf("51���� 99������ ���� �ջ� : %d\n", sum2);
	printf("1���� 100������ ���� �ջ� : %d\n", sum3);

	return 0;
}
*/

// 1���� 50������ �����ջ�, 51���� 99������ �״��, 100�� ������ ���϶� (���α׷� B)
/*
#include <stdio.h>

int main(void)
{
	int i;
	int sum1 = 0, sum2 = 0, sum3 = 0;

	for (i = 100; i >= 1; i--)
	{
		if (i == 100)
		{
			sum3 = sum3 + i;
		}
		else if (i >= 51 && i <= 99)
		{
			sum2 = sum2 + i;
		}
		else
		{
			sum1 = sum1 + i;
			printf("1���� 50������ ���� : %d\n", i);
		}
	}
	sum3 = sum3 + sum2 + sum1;
	printf("51���� 99������ ���� �ջ� : %d\n", sum2);
	printf("1���� 100������ ���� �ջ� : %d\n", sum3);

	return 0;
}
*/





