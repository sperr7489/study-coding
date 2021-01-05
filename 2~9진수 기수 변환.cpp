#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
void card_convr(unsigned x, int n)//x라는 값을 n진수로 변환하기.
{
	int val = x;
	int digit = 0;
	int temp;
	while (x) {
		printf("%d |		%02d ㆍㆍㆍ%d\n", n, x, x % n);
		printf("   +-------------------\n");
		x /= n;

		digit++;

	}
	temp = digit;
	if (x == 0)
	{
		printf("    		%d\n", x);
		
	}
	int* a = (int*)malloc(sizeof(int) * digit);
	int i, k = 0;
	while (val) {
		a[--digit] = val % n;
		val /= n;
	}
	printf("%d 진수로 ",n);
	for (int i = 0; i < temp; i++)
	{
		printf("%d", a[i]);
	}
	printf("입니다.\n");

}


int main()
{
	int n, m, t;
	printf("10진수를 기수 변환합니다. \n");
	do
	{printf("변환하는 음이 아닌 정수 : ");
	scanf("%d", &n);

	printf("어떤 진수로 변환할까요? : ");
	scanf("%d", &m);

	card_convr(n, m);
	printf("한번 더 할까요? (1 ㆍㆍㆍ예 / 0ㆍㆍㆍ아니오)\n");
	scanf("%d", &t);
	}while (t);

	return 0;
}