// 읽어들인 정숫값이 10의 배수인가?
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &no);

	if (no % 10)
	{
		puts("이 수는 10의 배수가 아닙니다.");
	}

	return 0;
}
*/

// 읽어들인 정숫값 B는 A의 약수인가?
/*
#include <stdio.h>

int main(void)
{
	int a, b;

	puts("2개의 정수를 입력하세요");
	printf("정수 A : "); scanf_s("%d", &a);
	printf("정수 B : "); scanf_s("%d", &b);

	if (a % b)
		puts("B는 A의 약수가 아닙니다.");
	else
		puts("B는 A의 약수입니다.");

	return 0;
}
*/

// 읽어들인 정숫값의 부호를 판정
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &no);
	 
	if (no == 0)
		puts("이 수는 0입니다.");
	else if (no > 0)
		puts("이 수는 양수입니다.");
	else
		puts("이 수는 음수입니다.");

	return 0;
}
*/

// 읽어들인 정숫값의 절댓값을 출력
/*
#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	if (num < 0)
		num = -num;

	printf("절댓값은 %d입니다.", num);

	return 0;
}
*/

// 읽어들인 정숫값 2개의 대소 관계를 출력
/*
#include <stdio.h>

int main(void)
{
	int a, b;

	puts("2개의 정수를 입력하세요 : ");
	printf("정수 A : "); scanf_s("%d", &a);
	printf("정수 B : "); scanf_s("%d", &b);

	if (a == b)
		puts("A와 B는 같습니다.");
	else if (a > b)
		puts("A는 B보다 큽니다.");
	else
		puts("A는 B보다 작습니다.");

	return 0;
}
*/

// 등가 연산자와 관계 연산자가 생성하는 값 출력
/*
#include <stdio.h>

int main(void)
{
	int a, b;

	puts("2개의 정수를 입력하세요.");
	printf("변수 a : "); scanf_s("%d", &a);
	printf("변수 b : "); scanf_s("%d", &b);

	puts("등가식의 값");
	printf("a == b의 값 : %d\n", a == b);
	printf("a != b의 값 : %d\n", a != b);

	puts("관계식의 값");
	printf("a < b의 값 : %d\n", a < b);
	printf("a <= b의 값 : %d\n", a <= b);
	printf("a > b의 값 : %d\n", a > b);
	printf("a >= b의 값 : %d\n", a >= b);

	return 0;
}
*/

// 읽어들인 정숫값 3개의 최솟값을 구해서 출력
/*
#include <stdio.h>

int main(Void)
{
	int n1, n2, n3, min;

	puts("3개의 정수를 입력하세요.");
	printf("정수 1 : "); scanf_s("%d", &n1);
	printf("정수 2 : "); scanf_s("%d", &n2);
	printf("정수 3 : "); scanf_s("%d", &n3);

	min = n1;
	if (n2 < min) min = n2;
	if (n3 < min) min = n3;

	printf("최솟값은 %d입니다.\n", min);

	return 0;
}
*/

// 읽어들인 정숫값 4개의 최댓값을 구해서 출력
/*
#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, max;

	puts("4개의 정수를 입력하세요.");
	printf("정수 1 : "); scanf_s("%d", &n1);
	printf("정수 2 : "); scanf_s("%d", &n2);
	printf("정수 3 : "); scanf_s("%d", &n3);
	printf("정수 4 : "); scanf_s("%d", &n4);

	max = n1;
	if (n2 > max) max = n2;
	if (n3 > max) max = n3;
	if (n4 > max) max = n4;

	printf("최댓값은 %d입니다.\n", max);

	return 0;
}
*/

// 읽어들인 정숫값 2개의 차이를 구해서 출력
/*
#include <stdio.h>

int main(void)
{
	int n1, n2, diff;

	puts("2개의 정수를 입력하세요 : ");
	printf("정수 : 1"); scanf_s("%d", &n1);
	printf("정수 : 2"); scanf_s("%d", &n2);

	if (n1 > n2)
		diff = n1 - n2;
	else
		diff = n2 - n1;

	printf("두 값의 차이는 %d입니다.\n", diff);

	return 0;
}
*/

// 읽어들인 정숫값 3개의 최솟값을 구해서 출력
/*
#include <stdio.h>

int main(void)
{
	int n1, n2, n3;

	puts("3개의 정수를 입력하세요.");
	printf("정수 1 : "); scanf_s("%d", &n1);
	printf("정수 2 : "); scanf_s("%d", &n2);
	printf("정수 3 : "); scanf_s("%d", &n3);

	printf("최솟값은 %d입니다.\n", (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3));

	return 0;
}
*/

// 읽어들인 정숫값 3개의 등치 관계 출력
/*
#include <stdio.h>

int main(void)
{
	int a, b, c;

	puts("3개의 정수를 입력하세요.");
	printf("정수 A : "); scanf_s("%d", &a);
	printf("정수 B : "); scanf_s("%d", &b);
	printf("정수 C : "); scanf_s("%d", &c);

	if (a == b && b == c)
		puts("3개의 값이 모두 같습니다.");
	else if (a == b || b == c || c == a)
		puts("2개 값이 같습니다.");
	else
		puts("3개 값은 모두 다릅니다.");

	return 0;
}
*/

// 읽어들인 정숫값 2개의 차이가 10 이하인지 아닌지 출력
/*
#include <stdio.h>

int main(void)
{
	int a, b, diff;

	puts("4개의 정수를 입력하세요.");
	printf("정수 A : "); scanf_s("%d", &a);
	printf("정수 B : "); scanf_s("%d", &b);

	diff = a - b;

	if (diff > 10 || diff < -10)
		puts("두 값의 차이는 11 이상입니다.");
	else
		puts("두 값의 차이는 10 이하입니다.");

	return 0;
}
*/

// 읽어들인 정수의 판정 결과 출력
/*
#include <stdio.h>

int main(void)
{
	int point;

	printf("정수 : ");
	scanf_s("%d", &point);

	if (point < 0 || point > 100)
		puts("올바르지 않은 점수입니다.");
	else if (point <= 59)
		puts("불가");
	else if (point <= 69)
		puts("가능");
	else if (point <= 79)
		puts("양호");
	else
		puts("우수");

	return 0;
}
*/

// 읽어들인 정수값 2개가 같은가?
/*
#include <stdio.h>

int main(void)
{
	int a, b, diff;

	puts("2개의 정수를 입력하세요.");
	printf("정수 A : "); scanf_s("%d", &a);
	printf("정수 B : "); scanf_s("%d", &b);

	if (a == b)
		puts("두 값은 같습니다.");
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
		printf("작은 값은 %d입니다.\n", min);
		printf("큰 값은 %d입니다.\n", max);
	}

	return 0; 
}
*/

// 읽어들인 정숫값이 짝수인가 홀수인가?
/*
#include <stdio.h>

int main(void)
{
	int no;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &no);

	switch (no % 2) {
		case 0 : puts("이 값은 짝수입니다.\n"); break;
		case 1 : puts("이 값은 홀수입니다.\n"); break;
	}

	return 0;
}
*/

// 읽어들인 월의 계절을 출력
/*
#include <stdio.h>

int main(void)
{
	int month;

	printf("몇 월인가요? ");
	scanf_s("%d", &month);
	printf("%d월은 ", month);
	switch (month) {
		case 3 :
		case 4 :
		case 5 : puts("봄입니다."); break;
		case 6 :
		case 7 :
		case 8 : puts("여름입니다."); break;
		case 9 :
		case 10 :
		case 11: puts("가을입니다."); break;
		case 12:
		case 1 :
		case 2: puts("겨울입니다."); break;
		default: puts("없는 월입니다!!\a"); break;
	}
	
	return 0;
}
*/





/*
1. 원의 반지름(빗금친 삼각형의 높이)을 구하는 과정
2. 한 변의 값이 A인 직사각형의 넓이를 구하는 과정
3. 원의 넓이를 구하는 과정
4. 빗금친 삼각형의 넓이를 구하는 과정
5. 전체 빗금친 부분의 넓이는 
	-> 사각형의 넓이 - 원의 넓이 + 삼각형의 넓이로 구하는 과정
*/