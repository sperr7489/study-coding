#include <stdio.h>


void nrpira(int n)
{
	// ���� n�� ���� n*2-1������ n�� �ϳ��� �پ��� ����.
	int k = 1;
	
	for (int i = n; i > 0; i--)
	{
		int p = 2*i-1;
		for (int j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		while (p > 0)
		{
			printf("%d", k);
			p--;
		}
		k++;
		printf("\n");
	}


}


int main()
{
	nrpira(4);

	return 0;

}