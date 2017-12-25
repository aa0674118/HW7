#include<stdio.h>
#include <stdlib.h>
int main()
{
	FILE *f;
	char ch;
	int count = 0;
	f = fopen("‪D:\C_code\HW7\P14\source\welcome.txt","r");
	if (f != NULL)
	{
		while (ch = getc(f) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(f);
		printf("\n總共有%d個字元\n", count);
	}
	else
		printf("檔案開啟失敗!!\n");
	system("pause");
	return 0;
}