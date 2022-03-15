#pragma warning(disable:4996)

// 읽어들인 정숫값의 부호 판정
/*
#include <stdio.h>

int main(void)
{
	int retry;
	
	do {
		int no;

		printf("정수를 입력하세요 : ");
		scanf("%d", &no);

		if (no == 0)
			puts("이 수는 0입니다.");
		else if (no > 0)
			puts("이 수는 양수입니다.");
		else
			puts("이 수는 음수입니다.");

		printf("한 번 더? [YES...0/NO...9] : ");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
*/

// 정숫값 2개를 읽어들여 작은 수부터 큰 수까지 모든 정수를 더한 값 출력
/*
#include <stdio.h>

int main(void)
{
	int a, b;
	int no, lower, upper;
	int sum = 0;

	printf("정수 A : "); scanf("%d", &a);
	printf("정수 B : "); scanf("%d", &b);

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

	printf("%d 이상 %d 이하의 모든 정수를 더한 값은 %d입니다.\n", lower, upper, sum);

	return 0;
}
*/

// 읽어들인 정숫값부터 0까지 카운트다운
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("양의 정수를 입력하세요 : ");
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

// 읽어들인 정숫값부터 1까지 카운트다운
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("양의 정수를 입력하세요 : ");
	scanf("%d ", &no);
	 
	if (no >= 1) {
		while (no >= 1)
			printf("%d", no--);
		printf("\n");
	}

	return 0;
}
*/

// 읽어들인 양의 정숫값까지 카운트업
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("양의 정수를 입력하세요 : ");
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

// 읽어들인 정숫값 이하의 짝수를 오름차순으로 출력
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("양의 정수를 입력하세요 : ");
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

// 읽어들인 정숫값 이하의 2의 거듭제곱을 오름차순으로 출력
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("양의 정수를 입력하세요 : ");
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

// 읽어들인 양의 정숫값까지 카운트업
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("양의 정수를 입력하세요 : ");
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

// 읽어들인 정수 개수만큼 *를 연속해서 출력
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("양의 정수 : ");
	scanf("%d", &no);

	if (no >= 1) {
		while (no-- > 0)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
*/

// 읽어들인 정수 개수만큼 *를 세로로 연속 출력
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("양의 정수 : ");
	scanf("%d", &no);

	while (no-- > 0)
		puts("*");

	return 0;
}
*/

// 읽어들인 양의 정숫값 개수만큼 +와 -를 교대로 출력 (출력 프로그램 A)
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("양의 정수 : ");
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

// 읽어들인 양의 정숫값 개수만큼 +와 -를 교대로 출력 (출력 프로그램 B)
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("양의 정수 : ");
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

// 읽어들인 양의 정숫값을 역순으로 출력
/*
#include <stdio.h>

int main(void)
{
	int no;

	do{
		printf("양의 정수를 입력하세요 : : ");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a양의 정수만 입력해주세요.");
	} while (no <= 0);

	printf("%d을(를) 거꾸로 읽으면 ", no);
	while (no > 0) {
		printf("%d", no % 10);
		no /= 10;
	}
	puts("입니다.");

	return 0;
}
*/

// 읽어들인 양의 정숫값의 자릿수 출력
/*
#include <stdio.h>

int main(void)
{
	int no, temp;
	int digits;

	do{
		printf("양의 정수를 입력하세요 : : ");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a양의 정수만 입력해주세요.");
	} while (no <= 0);

	temp = no;
	digits = 0;

	while (temp > 0) {
		temp /= 10;
		digits++;
	}
	printf("%d은(는) %d자리입니다.\n", no, digits);

	return 0;
}
*/

// 1부터 n까지의 합을 구함
/*
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int n;
	
	printf("n의 값 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		sum += i;

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return 0;
}
*/

// 읽어들인 정수 개수만큼 1234567890을 반복 출력 (프로그램 A)
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("양의 정수를 입력해주세요 : ");
	scanf("%d", &no);

	for (i = 1; i <= no; i++)
		printf("%d", i % 10);
	putchar('\n');

	return 0;
}
*/

// 읽어들인 정수 개수만큼 1234567890을 반복 출력 (프로그램 B)
/*
#include <stdio.h>

int main(void)
{
	int i, no, r, q;

	printf("양의 정수를 입력해주세요 : ");
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

// 키와 표준 몸무게 대응표 출력
/*
#include <stdio.h>

int main(void)
{
	int height;
	int lower, upper, step;

	printf("몇 cm부터 : "); scanf("%d", &lower);
	printf("몇 cm까지 : "); scanf("%d", &upper);
	printf("몇 cm마다 : "); scanf("%d", &step);

	for (height = lower; height <= upper; height += step)
		printf("%dcm %.2fkg\n", height, (height - 100) * 0.9);

	return 0;
}
*/

// 읽어들인 정숫값 이하의 홀수 출력
/*
#include <stdio.h>

int main(void)
{
	int i, no;

	printf("정숫값 : ");
	scanf("%d", &no);

	for (i = 1; i <= no; i += 2)
		printf("%d ", i);
	putchar('\n');

	return 0;
}
*/

// 읽어들인 정숫값 이하의 정수와 그 제곱 값 출력
/*
#include <stdio.h>

int main(void)
{
	int i, n;

	printf("n의 값 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i ++)
		printf("%d의 제곱은 %d\n", i, i * i);

	return 0;
}
*/

// 읽어들인 정수 개수만큼 5개씩 줄 바꿈 하며 '*' 출력 (프로그램 A)
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("몇 개의 *를 출력할까요? ");
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

// 읽어들인 정수 개수만큼 5개씩 줄 바꿈 하며 '*' 출력 (프로그램 B)
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("몇 개의 *를 출력할까요? ");
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

// 읽어들인 정숫값의 모든 약수와 그 개수를 출력
/*
#include <stdio.h>

int main(void)
{
	int i, n, count;

	printf("정숫값 : ");
	scanf("%d", &n);

	count = 0;
	for(i=1; i<=n; i++)
		if (n % i == 0) {
			printf("%d\n", i);
			count++;
		}
	printf("약수는 %d개입니다.\n", count);

	return 0;
}
*/

// 읽어들인 정수가 넓이인 모든 직사각형의 변의 길이(정수) 나열
/*
#include <stdio.h>

int main(void)
{
	int area;
	int height;

	printf("넓이 : ");
	scanf("%d", &area);

	for (height = 1; height < area; height++) {
		if(height * height > area) break;
		if(area * height != 0) continue;
		printf("%d x %d\n", height, area / height);
	}

	return 0;
}
*/

// 구구단 표 출력
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

// 정사각형 그리기
/*
#include <stdio.h>

int main(void)
{
	int i, j;
	int height;

	printf("정사각형을 그립니다. ");
	printf("높이는 얼마입니까? "); scanf("%d", &height);
	
	for (i=1; i<=height; i++) {
		for(j=1; j<=height; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
*/

// 직사각형 그리기
/*
#include <stdio.h>

int main(void)
{
	int i, j;
	int side1, side2, height, width;

	puts("옆으로 긴 직사각형을 그립니다. ");
	printf("한 변(1) : "); scanf("%d", &side1);
	printf("한 변(2) : "); scanf("%d", &side2);

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

// width개마다 줄 바꿈하면서 no개의 '*' 출력
/*
#include <stdio.h>

int main(void)
{
	int no, width;
	
	printf("몇 개의 *를 출력할까요? "); scanf("%d", &no);
	printf("몇 개마다 줄 바꿈할까요? "); scanf("%d", &width);

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

// 왼쪽 아래가 직각인 직각이등변삼각형 출력
/*
#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("왼쪽 아래가 직각인 직각이등변삼각형을 만듭니다.");
	printf("짧은 변 : ");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
*/

// 왼쪽 위가 직각인 직각이등변삼각형 출력
/*
#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("왼쪽 위가 직각인 직각이등변삼각형을 만듭니다.");
	printf("짧은 변 : ");
	scanf("%d", &len);

	for (i = len; i >= 1; i--) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
*/

// 오른쪽 아래가 직각인 직각이등변삼각형 출력
/*
#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("왼쪽 위가 직각인 직각이등변삼각형을 만듭니다.");
	printf("짧은 변 : ");
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

// 오른쪽 아래가 직각인 직각이등변삼각형 출력
/*
#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("왼쪽 위가 직각인 직각이등변삼각형을 만듭니다.");
	printf("짧은 변 : ");
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

// 오른쪽 위가 직각인 직각이등변삼각형 출력
/*
#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("왼쪽 위가 직각인 직각이등변삼각형을 만듭니다.");
	printf("짧은 변 : ");
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

// 피라미드 그리기
/*
#include <stdio.h>

int main(void)
{
	int i, j;
	int h;

	puts("피라미드를 만듭니다.");
	printf("몇 단인가요? ");
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

// 아래로 향한 숫자 피라미드 그리기
/*
#include <stdio.h>

int main(void)

{
	int i, j;
	int h;

	puts("아래로 향한 숫자 피라미드를 만듭니다.");
	printf("몇 단인가요? ");
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

// 1부터 50까지는 누적합산, 51부터 99까지는 그대로, 100은 총합을 구하라 (프로그램 A)
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
			printf("1부터 50까지의 숫자 : %d\n", i);
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
	printf("51부터 99까지의 누적 합산 : %d\n", sum2);
	printf("1부터 100까지의 누적 합산 : %d\n", sum3);

	return 0;
}
*/

// 1부터 50까지는 누적합산, 51부터 99까지는 그대로, 100은 총합을 구하라 (프로그램 B)
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
			printf("1부터 50까지의 숫자 : %d\n", i);
		}
	}
	sum3 = sum3 + sum2 + sum1;
	printf("51부터 99까지의 누적 합산 : %d\n", sum2);
	printf("1부터 100까지의 누적 합산 : %d\n", sum3);

	return 0;
}
*/





