#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
void card_convr(unsigned x, int n)//x��� ���� n������ ��ȯ�ϱ�.
{
	int val = x;
	int digit = 0;
	int temp;
	while (x) {
		printf("%d |		%02d ������%d\n", n, x, x % n);
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
	printf("%d ������ ",n);
	for (int i = 0; i < temp; i++)
	{
		printf("%d", a[i]);
	}
	printf("�Դϴ�.\n");

}


int main()
{
	int n, m, t;
	printf("10������ ��� ��ȯ�մϴ�. \n");
	do
	{printf("��ȯ�ϴ� ���� �ƴ� ���� : ");
	scanf("%d", &n);

	printf("� ������ ��ȯ�ұ��? : ");
	scanf("%d", &m);

	card_convr(n, m);
	printf("�ѹ� �� �ұ��? (1 �������� / 0�������ƴϿ�)\n");
	scanf("%d", &t);
	}while (t);

	return 0;
}