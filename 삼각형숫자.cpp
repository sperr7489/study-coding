#include <stdio.h>


void nrpira(int n)
{
	// 행이 n개 열이 n*2-1개에서 n이 하나씩 줄어드는 구조.
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