#pragma warning(disable:4996)

// 정수형 표현 범위 출력
/*
#include <stdio.h>
#include <limits.h>

int main(void)
{
	puts("이 환경에서의 각 정수형 값의 범위");
	printf("signed short int   : %d~%d\n", SHRT_MIN, SHRT_MAX);
	printf("signed int         : %d~%d\n", INT_MIN, INT_MAX);
	printf("signed long int    : %ld~%ld\n", LONG_MIN, LONG_MAX);

	printf("unsigned short int : %u~%u\n", 0, USHRT_MAX);
	printf("signed int         : %u~%u\n", 0, UINT_MAX);
	printf("signed long int    : %lu~%lu\n\n", 0, ULONG_MAX);

	return 0;
}
*/

// 문자형 표현 범위 출력
/*
#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("이 환경에서는 문자형은 %d비트로, 다음 범위의 값을 표현할 수 있습니다.\n", CHAR_BIT);
	printf("char              : %d~%d\n", CHAR_MIN, CHAR_MAX);
	printf("signed char       : %d~%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char     : %d~%d\n", 0, UCHAR_MAX);

	return 0;
}
*/

// 문자형과 정수형의 크기 출력
/*
#include <stdio.h>

int main(void)
{
	printf("char형은 %u바이트 \n", (unsigned)sizeof(char));
	printf("short형은 %u바이트 \n", (unsigned)sizeof(short));
	printf("int형은 %u바이트 \n", (unsigned)sizeof(int));
	printf("long형은 %u바이트 \n", (unsigned)sizeof(long));

	return 0;
}
*/

// sizeof 연산자를 사용한 식을 평가한 값을 출력
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

// 부호 없는 정수를 시프트한 값이 2의 제곱 값으로 곱하고 나눈 값과 같음을 확인

// 식 a & b == b & c의 값을 출력
/*
#include <stdio.h>

int main(void)
{
	unsigned a, b, c;

	printf("a : "); scanf("%u", &a);
	printf("b : "); scanf("%u", &b);
	printf("c : "); scanf("%u", &c);
	printf("a & b == b & c의 값은 %u입니다.\n", a & b == b & c);

	return 0;
}
*/

// unsinged형 구성 비트 출력
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

	printf("음이 아닌 정수 : "); scanf("%u", &x);
	printf("이 정수의 내용은 : "); print_bits(x); printf("입니다.\n");

	return 0;
}
*/

// 부호 없는 정수의 비트를 좌우로 회전
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

	printf("부호 없는 정수 x를 n비트 회전합니다.\n");
	printf("x : "); scanf("%u", &x);
	printf("n : "); scanf("%u", &n);

	printf("\n회전하기 전 = "); print_bits(x);
	printf("\n오른쪽 회전 = "); print_bits(rrotate(x, n));
	printf("\n왼쪽 회전 = "); print_bits(lrotate(x, n));
	putchar('\n');

	return 0;
}
*/

// 부호 없는 정수의 임의 비트 조작
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

	printf("부호 없는 정수 x를 n비트로 조작합니다.\n");
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

// 부호 없는 정수의 연속하는 임의 비트 조작
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

	printf("부호 없는 정수 x를 pos비트부터 pos+n-1비트까지 조작합니다.\n");
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

// 읽어 들인 10진수 양의 정숫값을 8진수와 16진수로 출력
/*
#include <stdio.h>

int main(void)
{
	int n;

	printf("양의 정숫값 : ");
	scanf("%d", &n);

	printf("8진수는 0%o입니다.\n", n);
	printf("16진수는 0x%x입니다.\n", n);
	
	return 0;
}
*/

// 부호 없는 정수의 산술연산이 오버플로를 일으키지 않는지 확인
/*
#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned a;
	unsigned b;

	puts("부호 없는 정숫값의 합과 곱을 구합니다.");
	printf("UINT_MAX는 %u입니다.\n", UINT_MAX);
	printf("UINT_MAX를 넘는다면 그 연산 결과는 (UINT_MAX + 1)로 나눈 나머지가 된다.\n");
	printf("a : "); scanf("%u", &a);
	printf("b : "); scanf("%u", &b);

	printf("a + b = %u\n", a + b);
	printf("a * b = %u\n", a * b);

	return 0;
}
*/

// 부동소수점형 변수 값 출력
/*
#include <stdio.h>

int main(void)
{
	float a;
	double b;
	long double c;

	puts("3개의 실숫값을 입력해주세요.");
	printf("float형          a : "); scanf("%f", &a);
	printf("double형         b : "); scanf("%lf", &b);
	printf("long double형    c : "); scanf("%Lf", &c);

	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("c = %f\n", c);

	return 0;
}
*/

// 부동소수점형 크기 출력
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

// 정사각형 넓이로 한 변의 길이를 구함
/*
#include <math.h>
#include <stdio.h>

int main(void)
{
	double area;

	puts("정사각형의 넓이로 한 변의 길이를 구합니다.");
	printf("넓이 : ");
	scanf("%lf", &area);

	printf("한 변의 길이는 %f입니다.\n", sqrt(area));

	return 0;
}
*/

// 0.0부터 1.0까지 0.01 단위로 반복하여 출력
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

// 0.0부터 1.0까지 0.01 단위로 반복하여 합계를 구함(float를 이용한 반복)
/*
#include <stdio.h>

int main(void)
{
	float x, sum = 0.0;

	for (x = 0.0; x <= 1.0; x += 0.01)
		sum += x;

	printf("0.00, 0.01, 0.02, ..., 1.00의 합계는 %f입니다.\n", sum);

	return 0;
}
*/

// 0.0부터 1.0까지 0.01 단위로 반복하여 합계를 구함(int를 이용한 반복)
/*
#include <stdio.h>

int main(void)
{
	int i;
	float sum = 0.0;

	for (i = 0; i <= 100; i++)
		sum += i / 100.0;

	printf("0.00, 0.01, 0.02, ..., 1.00의 합계는 %f입니다.\n", sum);

	return 0;
}
*/
