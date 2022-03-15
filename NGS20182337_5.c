#pragma warning(disable:4996)

// ������ ǥ�� ���� ���
/*
#include <stdio.h>
#include <limits.h>

int main(void)
{
	puts("�� ȯ�濡���� �� ������ ���� ����");
	printf("signed short int   : %d~%d\n", SHRT_MIN, SHRT_MAX);
	printf("signed int         : %d~%d\n", INT_MIN, INT_MAX);
	printf("signed long int    : %ld~%ld\n", LONG_MIN, LONG_MAX);

	printf("unsigned short int : %u~%u\n", 0, USHRT_MAX);
	printf("signed int         : %u~%u\n", 0, UINT_MAX);
	printf("signed long int    : %lu~%lu\n\n", 0, ULONG_MAX);

	return 0;
}
*/

// ������ ǥ�� ���� ���
/*
#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("�� ȯ�濡���� �������� %d��Ʈ��, ���� ������ ���� ǥ���� �� �ֽ��ϴ�.\n", CHAR_BIT);
	printf("char              : %d~%d\n", CHAR_MIN, CHAR_MAX);
	printf("signed char       : %d~%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char     : %d~%d\n", 0, UCHAR_MAX);

	return 0;
}
*/

// �������� �������� ũ�� ���
/*
#include <stdio.h>

int main(void)
{
	printf("char���� %u����Ʈ \n", (unsigned)sizeof(char));
	printf("short���� %u����Ʈ \n", (unsigned)sizeof(short));
	printf("int���� %u����Ʈ \n", (unsigned)sizeof(int));
	printf("long���� %u����Ʈ \n", (unsigned)sizeof(long));

	return 0;
}
*/

// sizeof �����ڸ� ����� ���� ���� ���� ���
/*
#include <stdio.h>

int main(void)
{
	int n;

	printf("sizeof 1                = %u\n", (unsigned)(sizeof 1));
	printf("sizeof+1                = %u\n", (unsigned)(sizeof+1));
	printf("sizeof-1                = %u\n", (unsigned)(sizeof-1));
	printf("sizeof(unsigned) - 1    = %u\n", (unsigned)(sizeof(unsigned) - 1));
	printf("sizeof(double) - 1      = %u\n", (unsigned)(sizeof(double) - 1));
	printf("sizeof((double) - 1)    = %u\n", (unsigned)(sizeof((double)-1)));
	printf("sizeof n+2              = %u\n", (unsigned)(sizeof n + 2));
	printf("sizeof(n+2)             = %u\n", (unsigned)(sizeof(n + 2)));
	printf("sizeof(n+2.0)           = %u\n", (unsigned)(sizeof(n + 2.0)));

	return 0;
}
*/

// ��ȣ ���� ������ ����Ʈ�� ���� 2�� ���� ������ ���ϰ� ���� ���� ������ Ȯ��

// �� a & b == b & c�� ���� ���
/*
#include <stdio.h>

int main(void)
{
	unsigned a, b, c;

	printf("a : "); scanf("%u", &a);
	printf("b : "); scanf("%u", &b);
	printf("c : "); scanf("%u", &c);
	printf("a & b == b & c�� ���� %u�Դϴ�.\n", a & b == b & c);

	return 0;
}
*/

// unsinged�� ���� ��Ʈ ���
/*
#include <stdio.h>

int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

int int_bits(void)
{
	return count_bits(~0U);
}

void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
	unsigned x;

	printf("���� �ƴ� ���� : "); scanf("%u", &x);
	printf("�� ������ ������ : "); print_bits(x); printf("�Դϴ�.\n");

	return 0;
}
*/

// ��ȣ ���� ������ ��Ʈ�� �¿�� ȸ��
/*
#include <stdio.h>

int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

int int_bits(void)
{
	return count_bits(~0U);
}

void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

unsigned rrotate(unsigned x, int n)
{
	unsigned lrotate(unsigned, int);

	if (n < 0)
		lrotate(x, -n);
	else
	{
		int bits = int_bits();
		n %= bits;
		return n ? (x >> n) | (x << (bits - n)) : x;
	}
}

unsigned lrotate(unsigned x, int n)
{
	if (n < 0)
		rrotate(x, -n);
	else
	{
		int bits = int_bits();
		n %= bits;
		return n ? (x << n) | (x >> (bits - n)) : x;
	}
}

int main(void)
{
	unsigned x, n;

	printf("��ȣ ���� ���� x�� n��Ʈ ȸ���մϴ�.\n");
	printf("x : "); scanf("%u", &x);
	printf("n : "); scanf("%u", &n);

	printf("\nȸ���ϱ� �� = "); print_bits(x);
	printf("\n������ ȸ�� = "); print_bits(rrotate(x, n));
	printf("\n���� ȸ�� = "); print_bits(lrotate(x, n));
	putchar('\n');

	return 0;
}
*/

// ��ȣ ���� ������ ���� ��Ʈ ����
/*
#include <stdio.h>

int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

int int_bits(void)
{
	return count_bits(~0U);
}

void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

unsigned lsht(unsigned x, int n)
{
	return (n <= 0 || n >= int_bits()) ? x : (x << n);
}

unsigned set(unsigned x, int pos)
{
	return x | lsht(1U, pos);
}

unsigned reset(unsigned x, int pos)
{
	return x & ~lsht(1U, pos);
}

unsigned inverse(unsigned x, int pos)
{
	return x ^ lsht(1U, pos);
}

int main(void)
{
	unsigned x, pos;

	printf("��ȣ ���� ���� x�� n��Ʈ�� �����մϴ�.\n");
	printf("x  : "); scanf("%u", &x);
	printf("pos : "); scanf("%u", &pos);

	printf("\nx                  ="); print_bits(x);
	printf("\nset(x, pos)        ="); print_bits(set(x, pos));
	printf("\nreset(x, pos)      ="); print_bits(reset(x, pos));
	printf("\ninverse(x, pos)    ="); print_bits(inverse(x, pos));
	printf('\n');

	return 0;
}
*/

// ��ȣ ���� ������ �����ϴ� ���� ��Ʈ ����
/*
#include <stdio.h>

int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

int int_bits(void)
{
	return count_bits(~0U);
}

void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

unsigned lsht(unsigned x, int n)
{
	return (n <= 0 || n >= int_bits()) ? x : (x << n);
}

unsigned set_n(unsigned x, int pos, int n)
{
	return x | lsht(~lsht(~0, n), pos);
}

unsigned reset_n(unsigned x, int pos, int n)
{
	return x & ~lsht(~lsht(~0, n), pos);
}

unsigned inverse_n(unsigned x, int pos, int n)
{
	return x ^ lsht(~lsht(~0, n), pos);
}

int main(void)
{
	unsigned x, pos, n;

	printf("��ȣ ���� ���� x�� pos��Ʈ���� pos+n-1��Ʈ���� �����մϴ�.\n");
	printf("x  : "); scanf("%u", &x);
	printf("pos : "); scanf("%u", &pos);
	printf("n : "); scanf("%u", &n);

	printf("\nx                  ="); print_bits(x);
	printf("\nset(x, pos, n)        ="); print_bits(set_n(x, pos, n));
	printf("\nreset(x, pos, n)      ="); print_bits(reset_n(x, pos, n));
	printf("\ninverse(x, pos, n)    ="); print_bits(inverse_n(x, pos, n));
	printf('\n');

	return 0;
}
*/

// �о� ���� 10���� ���� �������� 8������ 16������ ���
/*
#include <stdio.h>

int main(void)
{
	int n;

	printf("���� ������ : ");
	scanf("%d", &n);

	printf("8������ 0%o�Դϴ�.\n", n);
	printf("16������ 0x%x�Դϴ�.\n", n);
	
	return 0;
}
*/

// ��ȣ ���� ������ ��������� �����÷θ� ����Ű�� �ʴ��� Ȯ��
/*
#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned a;
	unsigned b;

	puts("��ȣ ���� �������� �հ� ���� ���մϴ�.");
	printf("UINT_MAX�� %u�Դϴ�.\n", UINT_MAX);
	printf("UINT_MAX�� �Ѵ´ٸ� �� ���� ����� (UINT_MAX + 1)�� ���� �������� �ȴ�.\n");
	printf("a : "); scanf("%u", &a);
	printf("b : "); scanf("%u", &b);

	printf("a + b = %u\n", a + b);
	printf("a * b = %u\n", a * b);

	return 0;
}
*/

// �ε��Ҽ����� ���� �� ���
/*
#include <stdio.h>

int main(void)
{
	float a;
	double b;
	long double c;

	puts("3���� �Ǽ����� �Է����ּ���.");
	printf("float��          a : "); scanf("%f", &a);
	printf("double��         b : "); scanf("%lf", &b);
	printf("long double��    c : "); scanf("%Lf", &c);

	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("c = %f\n", c);

	return 0;
}
*/

// �ε��Ҽ����� ũ�� ���
/*
#include <stdio.h>

int main(void)
{
	printf("sizeof(float)          = %u\n", (unsigned)sizeof(float));
	printf("sizeof(double)         = %u\n", (unsigned)sizeof(double));
	printf("sizeof(long double)    = %u\n", (unsigned)sizeof(long double));

	return 0;
}
*/

// ���簢�� ���̷� �� ���� ���̸� ����
/*
#include <math.h>
#include <stdio.h>

int main(void)
{
	double area;

	puts("���簢���� ���̷� �� ���� ���̸� ���մϴ�.");
	printf("���� : ");
	scanf("%lf", &area);

	printf("�� ���� ���̴� %f�Դϴ�.\n", sqrt(area));

	return 0;
}
*/

// 0.0���� 1.0���� 0.01 ������ �ݺ��Ͽ� ���
/*
#include <math.h>
#include <stdio.h>

int main(void)
{
	int i;
	float x = 0.0;

	for (i = 0; i <= 100; i++) {
		printf("x = %f x = %f\n", x, i / 100.0);
		x += 0.01;
	}

	return 0;
}
*/

// 0.0���� 1.0���� 0.01 ������ �ݺ��Ͽ� �հ踦 ����(float�� �̿��� �ݺ�)
/*
#include <stdio.h>

int main(void)
{
	float x, sum = 0.0;

	for (x = 0.0; x <= 1.0; x += 0.01)
		sum += x;

	printf("0.00, 0.01, 0.02, ..., 1.00�� �հ�� %f�Դϴ�.\n", sum);

	return 0;
}
*/

// 0.0���� 1.0���� 0.01 ������ �ݺ��Ͽ� �հ踦 ����(int�� �̿��� �ݺ�)
/*
#include <stdio.h>

int main(void)
{
	int i;
	float sum = 0.0;

	for (i = 0; i <= 100; i++)
		sum += i / 100.0;

	printf("0.00, 0.01, 0.02, ..., 1.00�� �հ�� %f�Դϴ�.\n", sum);

	return 0;
}
*/
