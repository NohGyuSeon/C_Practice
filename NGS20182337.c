#pragma warning(disable:4996)

// 성적 입력 프로그램
// 30명 성적 테이블 -> 기본적으로 초기값 배정
// 구조체 멤버 입력
// 정렬 기준 입력 -> 이름, 전산점수, 수학점수, 영어점수, 평균
// 정렬 종류 입력 -> 오름차순, 내림차순
// 라인별 클래스명 배정
// 라인별 총합, 평균 출력
// 한 화면에 전체 클래스 및 분할 클래스 출력 (좌, 우 분할)
// 순위 배정

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SUM(stu) (stu.com + stu.mat + stu.eng)
#define TOTAL 30
#define SIZE 10

typedef struct {
	char name[30];
	char tel[30];
	int com;
	int mat;
	int eng;
} Student;

void swap_student(Student* x, Student* y)
{
	Student tmp = *x;
	*x = *y;
	*y = tmp;
}

void up_name(Student s[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (strcmp(s[j].name, s[j + 1].name) > 0) {
				Student tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
		}
	}
}

void down_name(Student s[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (strcmp(s[j].name, s[j + 1].name) < 0) {
				Student tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
		}
	}
}

void up_com(Student s[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (s[j].com > s[j + 1].com) {
				swap_student(s + j, s + j + 1);
			}
		}
	}
}

void down_com(Student s[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (s[j].com < s[j + 1].com) {
				swap_student(s + j, s + j + 1);
			}
		}
	}
}

void up_mat(Student s[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (s[j].mat > s[j + 1].mat) {
				swap_student(s + j, s + j + 1);
			}
		}
	}
}

void down_mat(Student s[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (s[j].mat < s[j + 1].mat) {
				swap_student(s + j, s + j + 1);
			}
		}
	}
}

void up_eng(Student s[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (s[j].eng > s[j + 1].eng) {
				swap_student(s + j, s + j + 1);
			}
		}
	}
}

void down_eng(Student s[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (s[j].eng < s[j + 1].eng) {
				swap_student(s + j, s + j + 1);
			}
		}
	}
}

void up_avg(Student s[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (SUM(s[j]) / 3.0 > SUM(s[j + 1]) / 3.0) {
				swap_student(s + j, s + j + 1);
			}
		}
	}
}

void down_avg(Student s[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (SUM(s[j]) / 3.0 < SUM(s[j + 1]) / 3.0) {
				swap_student(s + j, s + j + 1);
			}
		}
	}
}

void view(Student s[], Student s1[], Student s2[], Student s3[], int n, int m) {
	int i, j;
	int rank[30] = { 0 };
	int rank1[10] = { 0 };
	int rank2[10] = { 0 };
	int rank3[10] = { 0 };

	for (i = 0; i < n; i++) {
		rank1[i]++;
		rank2[i]++;
		rank3[i]++;
	}

	for (i = 0; i < m; i++) {
		rank[i]++;
	}

	printf("\n%8s| %10s| %4s| %4s| %4s| %s| %6s| %s\t\t\t\t%8s| %10s| %4s| %4s| %4s| %s| %6s| %s\n",
		"이름", "번호", "전산점수", "수학점수", "영어점수", "합계", "평균", "순위", "이름", "번호", "전산점수", "수학점수", "영어점수", "합계", "평균", "순위");

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if (SUM(s[i]) / 3.0 > SUM(s[j]) / 3.0) {
				rank[j]++;
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (SUM(s1[i]) / 3.0 > SUM(s1[j]) / 3.0) {
				rank1[j]++;
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (SUM(s2[i]) / 3.0 > SUM(s2[j]) / 3.0) {
				rank2[j]++;
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (SUM(s3[i]) / 3.0 > SUM(s3[j]) / 3.0) {
				rank3[j]++;
			}
		}
	}

	printf("\n    [전체 클래스]\t\t\t\t\t\t\t\t\t\t[A 클래스]\n\n");

	for (i = 0; i < m + 10; i++)
	{
		if (i >= 0 && i < 10) {
			printf("%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\t\t\t\t%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\n",
				s[i].name, s[i].tel, s[i].com, s[i].mat, s[i].eng, SUM(s[i]), SUM(s[i]) / 3.0, rank[i],
				s1[i].name, s1[i].tel, s1[i].com, s1[i].mat, s1[i].eng, SUM(s1[i]), SUM(s1[i]) / 3.0, rank1[i]);
		}
		else if (i == 10) {
			printf("%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\n",
				s[i].name, s[i].tel, s[i].com, s[i].mat, s[i].eng, SUM(s[i]), SUM(s[i]) / 3.0, rank[i]);
		}
		else if (i == 11) {
			printf("%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\t\t\t\t======================================================================\n",
				s[i].name, s[i].tel, s[i].com, s[i].mat, s[i].eng, SUM(s[i]), SUM(s[i]) / 3.0, rank[i]);
		}
		else if (i == 12) {
			printf("%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\n",
				s[i].name, s[i].tel, s[i].com, s[i].mat, s[i].eng, SUM(s[i]), SUM(s[i]) / 3.0, rank[i]);
		}
		else if (i == 13) {
			printf("%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\t\t\t\t[B 클래스]\n",
				s[i].name, s[i].tel, s[i].com, s[i].mat, s[i].eng, SUM(s[i]), SUM(s[i]) / 3.0, rank[i]);
		}
		else if (i == 14) {
			printf("%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\n",
				s[i].name, s[i].tel, s[i].com, s[i].mat, s[i].eng, SUM(s[i]), SUM(s[i]) / 3.0, rank[i]);
		}
		else if (i >= 15 && i < 25) {
			printf("%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\t\t\t\t%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\n",
				s[i].name, s[i].tel, s[i].com, s[i].mat, s[i].eng, SUM(s[i]), SUM(s[i]) / 3.0, rank[i],
				s2[i - 15].name, s2[i - 15].tel, s2[i - 15].com, s2[i - 15].mat, s2[i - 15].eng, SUM(s2[i - 15]), SUM(s2[i - 15]) / 3.0, rank2[i - 15]);
		}
		else if (i == 25) {
			printf("%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\n",
				s[i].name, s[i].tel, s[i].com, s[i].mat, s[i].eng, SUM(s[i]), SUM(s[i]) / 3.0, rank[i]);
		}
		else if (i == 26) {
			printf("%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\t\t\t\t======================================================================\n",
				s[i].name, s[i].tel, s[i].com, s[i].mat, s[i].eng, SUM(s[i]), SUM(s[i]) / 3.0, rank[i]);
		}
		else if (i == 27) {
			printf("%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\n",
				s[i].name, s[i].tel, s[i].com, s[i].mat, s[i].eng, SUM(s[i]), SUM(s[i]) / 3.0, rank[i]);
		}
		else if (i == 28) {
			printf("%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\t\t\t\t[C 클래스]\n",
				s[i].name, s[i].tel, s[i].com, s[i].mat, s[i].eng, SUM(s[i]), SUM(s[i]) / 3.0, rank[i]);
		}
		else if (i == 29) {
			printf("%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\n",
				s[i].name, s[i].tel, s[i].com, s[i].mat, s[i].eng, SUM(s[i]), SUM(s[i]) / 3.0, rank[i]);
		}
		else {
			printf("\t\t\t\t\t\t\t\t\t\t\t\t%8s| %10s| %8d| %8d| %8d| %4d| %6.1f| %4d\n",
				s3[i - 30].name, s3[i - 30].tel, s3[i - 30].com, s3[i - 30].mat, s3[i - 30].eng, SUM(s3[i - 30]), SUM(s3[i - 30]) / 3.0, rank3[i - 30]);
		}
	}
}

int main(void)
{
	int i, x, y;

	Student std[TOTAL] = {
	{ "Jeon", "2345-7890", 32, 24, 48 },
	{ "Kim", "3458-9990", 22, 23, 37 },
	{ "Lee", "7345-9870", 45, 55, 51 },
	{ "Bae", "5321-1234", 54, 46, 69 },
	{ "Kang", "4916-5052", 48, 85, 57 },
	{ "Lee", "2039-3458", 25, 53, 31 },
	{ "Kim", "4708-2323", 34, 44, 42 },
	{ "Smith", "6408-3298", 39, 94, 46 },
	{ "Park", "3482-9283", 21, 13, 38 },
	{ "Kim", "8934-2738", 25, 53, 38 },
	{ "Jhon", "2475-7890", 33, 54, 84 },
	{ "Kang", "3488-2990", 32, 33, 77 },
	{ "Wee", "7345-9350", 55, 15, 71 },
	{ "Bu", "5325-1224", 74, 76, 63 },
	{ "Goh", "4911-5022", 68, 85, 27 },
	{ "Noh", "2369-3458", 95, 93, 91 },
	{ "Kim", "4748-4323", 34, 44, 42 },
	{ "Alice", "6401-5298", 49, 93, 76 },
	{ "An", "3422-9986", 24, 15, 68 },
	{ "Ma", "8534-2238", 22, 13, 88 },
	{ "Paul", "2535-7890", 37, 52, 81 },
	{ "Bile", "3428-2990", 42, 53, 73 },
	{ "Sam", "7255-9350", 53, 13, 11 },
	{ "Goh", "5645-1324", 56, 64, 73 },
	{ "Choi", "4911-5742", 28, 65, 37 },
	{ "Noh", "2310-2927", 100, 100, 100 },
	{ "Choi", "4268-3623", 34, 0, 49 },
	{ "Alice", "1401-5398", 79, 94, 96 },
	{ "Jenni", "3622-9186", 69, 44, 74 },
	{ "Chu", "8534-2468", 58, 85, 82 } };

	Student std1[SIZE] = {
	{ "Jeon", "2345-7890", 32, 24, 48 },
	{ "Kim", "3458-9990", 22, 23, 37 },
	{ "Lee", "7345-9870", 45, 55, 51 },
	{ "Bae", "5321-1234", 54, 46, 69 },
	{ "Kang", "4916-5052", 48, 85, 57 },
	{ "Lee", "2039-3458", 25, 53, 31 },
	{ "Kim", "4708-2323", 34, 44, 42 },
	{ "Smith", "6408-3298", 39, 94, 46 },
	{ "Park", "3482-9283", 21, 13, 38 },
	{ "Kim", "8934-2738", 25, 53, 38 } };

	Student std2[SIZE] = {
	{ "Jhon", "2475-7890", 33, 54, 84 },
	{ "Kang", "3488-2990", 32, 33, 77 },
	{ "Wee", "7345-9350", 55, 15, 71 },
	{ "Bu", "5325-1224", 74, 76, 63 },
	{ "Goh", "4911-5022", 68, 85, 27 },
	{ "Noh", "2369-3458", 95, 93, 91 },
	{ "Kim", "4748-4323", 34, 44, 42 },
	{ "Alice", "6401-5298", 49, 93, 76 },
	{ "An", "3422-9986", 24, 15, 68 },
	{ "Ma", "8534-2238", 22, 13, 88 } };

	Student std3[SIZE] = {
	{ "Paul", "2535-7890", 37, 52, 81 },
	{ "Bile", "3428-2990", 42, 53, 73 },
	{ "Sam", "7255-9350", 53, 13, 11 },
	{ "Goh", "5645-1324", 56, 64, 73 },
	{ "Choi", "4911-5742", 28, 65, 37 },
	{ "Noh", "2310-2927", 100, 100, 100 },
	{ "Choi", "4268-3623", 34, 0, 49 },
	{ "Alice", "1401-5398", 79, 94, 96 },
	{ "Jenni", "3622-9186", 69, 44, 74 },
	{ "Chu", "8534-2468", 58, 85, 82 } };

	printf("10명의 학생 정보를 지닌 3개의 클래스가 있습니다.\n");
	printf("\"이름\", \"번호\", \"전산점수\", \"수학점수\", \"영어점수\", \"합계\", \"평균\"\n\n");
	printf("정렬 기준이 되는 번호를 입력하세요.\n");
	printf("0 -> 이름   1 -> 전산   2 -> 수학   3 -> 영어   4 -> 평균 ");

	while (1) {
		scanf("%d", &x);
		if (x == 0 || x == 1 || x == 2 || x == 3 || x == 4)
			break;
		else
			printf("다시 입력하세요.\n0 -> 이름   1 -> 전산   2 -> 수학   3 -> 영어   4 -> 평균 ");
	}

	printf("\n정렬 기법을 입력하세요.\n");
	printf("1 -> 오름차순   2 -> 내림차순 ");

	while (1) {
		scanf("%d", &y);
		if (x == 0) {
			if (y == 1) {
				up_name(std, TOTAL);
				up_name(std1, SIZE);
				up_name(std2, SIZE);
				up_name(std3, SIZE);
				break;
			}
			else if (y == 2) {
				down_name(std, TOTAL);
				down_name(std1, SIZE);
				down_name(std2, SIZE);
				down_name(std3, SIZE);
				break;
			}
			else {
				printf("다시 입력하세요.\n1 -> 오름차순   2 -> 내림차순 ");
				continue;
			}
		}

		else if (x == 1) {
			if (y == 1) {
				up_com(std, TOTAL);
				up_com(std1, SIZE);
				up_com(std2, SIZE);
				up_com(std3, SIZE);
				break;
			}
			else if (y == 2) {
				down_com(std, TOTAL);
				down_com(std1, SIZE);
				down_com(std2, SIZE);
				down_com(std3, SIZE);
				break;
			}
			else {
				printf("다시 입력하세요.\n1 -> 오름차순   2 -> 내림차순 ");
				continue;
			}
		}

		else if (x == 2) {
			if (y == 1) {
				up_mat(std, TOTAL);
				up_mat(std1, SIZE);
				up_mat(std2, SIZE);
				up_mat(std3, SIZE);
				break;
			}
			else if (y == 2) {
				down_mat(std, TOTAL);
				down_mat(std1, SIZE);
				down_mat(std2, SIZE);
				down_mat(std3, SIZE);
				break;
			}
			else {
				printf("다시 입력하세요.\n1 -> 오름차순   2 -> 내림차순 ");
				continue;
			}
		}

		else if (x == 3) {
			if (y == 1) {
				up_eng(std, TOTAL);
				up_eng(std1, SIZE);
				up_eng(std2, SIZE);
				up_eng(std3, SIZE);
				break;
			}
			else if (y == 2) {
				down_eng(std, TOTAL);
				down_eng(std1, SIZE);
				down_eng(std2, SIZE);
				down_eng(std3, SIZE);
				break;
			}
			else {
				printf("다시 입력하세요.\n1 -> 오름차순   2 -> 내림차순 ");
				continue;
			}
		}

		else if (x == 4) {
			if (y == 1) {
				up_avg(std, TOTAL);
				up_avg(std1, SIZE);
				up_avg(std2, SIZE);
				up_avg(std3, SIZE);
				break;
			}
			else if (y == 2) {
				down_avg(std, TOTAL);
				down_avg(std1, SIZE);
				down_avg(std2, SIZE);
				down_avg(std3, SIZE);
				break;
			}
			else {
				printf("다시 입력하세요.\n1 -> 오름차순   2 -> 내림차순 ");
				continue;
			}
		}
	}

	view(std, std1, std2, std3, SIZE, TOTAL);

	return 0;
}
