#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

{
	int sum = 0;
	int line_count = 0;
	char buffer[100];
	char* temp = buffer;
	int num;
	FILE* p_file = NULL;


	if (0 == fopen_s(&p_file, "C:\\Users\\pc\\Desktop\\선형대수 과제]\\선대 결과.txt", "rt"))
	{
		/*fseek(p_file, 0, SEEK_SET);//파일 포인터를 처음으로 옮김.
		fseek(p_file, 10, SEEK_CUR);//10번째부터 읽는다.
		fgets(temp, 100, p_file);
		printf("%s", temp);
		num = atoi(temp);
		printf("%d\n", num);
		fseek(p_file, 10, SEEK_CUR);
		fgets(temp, 100, p_file);
		printf("%s", temp);
		fclose(p_file);*/
		while (fgets(temp, 100, p_file) != NULL)
		{
			int len = strlen(temp);
			fseek(p_file, -len + 9, SEEK_CUR);

			line_count++;
			fgets(temp, 100, p_file);
			num = atoi(temp);
			sum += num;
			//printf("%s", temp);
		}
		printf("%d\n", sum);
		printf("%d", line_count);
		double average = ((double)sum / line_count);
		printf("\n평균은 : %f", average);
		fclose(p_file);
	}
	printf("\n\n");

	return 0;

}
//while (fgets(temp, 100, p_file) != NULL)